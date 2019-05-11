#include "List.h"
#include <iostream>
using namespace std;
template <class T>
List_Vektor<T>::List_Vektor()
{
    this->array_dimension_ = 10;
    this->create();
}

// konstruktori
template <class T>
List_Vektor<T>::List_Vektor(int dim)
{
    array_dimension_ = dim;
    this->create();
}
/* konstruktori i kopies kopjon te dhenat e nje objekti ne nje objekt tjeter
te te njejtit tip
* Ky konstruktor thirret psh kur nje objekt i kalohet me vlere nje funksioni
si argument,
* ose kur nje funksion kthen nje vlere
*/
template <class T>
List_Vektor<T>::List_Vektor(const List_Vektor<T> &Lista)
{
    this->array_dimension_ = Lista.array_dimension_;
    this->length_ = Lista.length_;
    this->elements_ = new T[array_dimension_];
    for (int i = 0; i < Lista.array_dimension_; i++)
        this->elements_[i] = Lista.elements_[i];
}
// destruktori
template <class T>
List_Vektor<T>::~List_Vektor()
{
    delete elements_;
}
// veprimet
template <class T>
void List_Vektor<T>::create()
{
    this->elements_ = new T[array_dimension_];
    this->length_ = 0;
}
template <class T>
bool List_Vektor<T>::empty() const
{

    return (length_ == 0);
}
template <class T>
typename List_Vektor<T>::position List_Vektor<T>::begin() const
{
    return 1; // dmth pos(1)=pos(n+1) nqs lista eshte bosh (n=0)
}
template <class T>
typename List_Vektor<T>::position List_Vektor<T>::next(position p) const
{
    // length_ + 1 sepse lista fillon me index nga 1 dhe elementi i fundit eshte me index length 
    if ((0 < p) && (p < length_ + 1))
        return (p + 1);
    else
        return (p);
}
template <class T>
typename List_Vektor<T>::position List_Vektor<T>::previous(position p)
    const
{
    if ((1 < p) && (p < length_ + 1))
        return (p - 1);
    else
        return (p);
}
template <class T>
bool List_Vektor<T>::end(position p) const
{
    if ((0 < p) && (p <= length_ + 1))
        return (p == length_ + 1); //true if(p == length_ + 1)
    else
        return (false);
}
template <class T>
typename List_Vektor<T>::value_type List_Vektor<T>::read(position p) const
{
    if ((0 < p) && (p < length_ + 1)){
        return (elements_[p - 1]);
    }
}
template <class T>
void List_Vektor<T>::write(const value_type &a, position p)
{
    if ((0 < p) && (p < length_ + 1))
        elements_[p - 1] = a;
}
template <class T>
void List_Vektor<T>::insert(const value_type &a, position p)
{
    if (length_ == array_dimension_)
    {

        change_dimension_(elements_, array_dimension_, array_dimension_ * 2);
        array_dimension_ = array_dimension_ * 2;
    }
    if ((0 < p) && (p <= length_ + 1))
    {
        for (int i = length_; i >= p; i--){
            elements_[i] = elements_[i - 1];
        }
        elements_[p - 1] = a;
        length_ = length_ + 1;
    }
}


template <class T>
void List_Vektor<T>::erase(position p)
{
    if ((0 < p) && (p < length_ + 1))
        if (!empty())
        {

            for (int i = p - 1; i < (length_ - 1); i++){
                elements_[i] = elements_[i + 1];
            }
            length_ = length_ - 1;
        }
}
template <class T>
void List_Vektor<T>::change_dimension_(T *&a, int dimensionVjeter, int dimensionRi)
{
    T *temp = new T[dimensionRi];
    int number;
    if (dimensionVjeter < dimensionRi)
        number = dimensionVjeter;
    else
        number = dimensionRi;
    for (int i = 0; i < number; i++)
        temp[i] = a[i];
    delete[] a;
    a = temp;
}
/* operatori i vleredhenies */
template <class T>
List_Vektor<T> &List_Vektor<T>::operator=(const List_Vektor<T> &l)
{
    if (this != &l)
    { // kujdes qe te eleminojme rastion l = l
        this->array_dimension_ = l.array_dimension_;
        this->length_ = l.length_;
        delete this->elements_;
        this->elements_ = new T[array_dimension_];
        for (int i = 0; i < l.array_dimension_; i++)
            this->elements_[i] = l.elements_[i];
    }
    return *this;
}



    /* operatori i barazise */
    template <class T>
    bool List_Vektor<T>::operator==(const List_Vektor<T> &l) const
{
    if (l.length_ != this->length_)
        return false;

    for (int i = 0; i < this->array_dimension_; i++)
        if (this->elements_[i] != l.elements_[i])
            return false;

    return true;
}
template <class T>
void List_Vektor<T>::print()
{
    int p;
    p = this->begin();
    cout << "[";
    while (!this->end(p))
    {
        if (p != this->begin())
            cout << ", " << this->read(p);
        else
            cout << this->read(p);
        p = this->next(p);
    }
    cout << "]" << endl;
}


template<class T>
void List_Vektor<T>::duplicate(){
  
    // cout<<length_;
    for (int i = 1; i < this->length_; ++i)
    {
        for (int j = i+1; j < this->length_+1; ++j)
        {
            if(elements_[i]==elements_[j]){

                cout<<elements_[i]<<endl;
               
            }
        }
    }
}

template<class T>
void List_Vektor<T>::duplicateList(List_Vektor<T> &t){
    int k=0;
    int A[10];
    
    for (int i = 0; i < length_; ++i)
    {
        for (int j = 0; j < t.length_; ++j)
            {
                if(elements_[i]==t.elements_[j]){

                     // cout<<elements_[i]<<" "<<endl;
                    A[k++]=elements_[i];
                }
            }    
    }

    // for (int i = 0; i < k; ++i)
    // {
    //     cout<<A[i]<<endl;
    // }
  // [1,4,4,4,1]
    for (int i = 0; i < k-1; ++i)
    {
     int counter=0;
        for (int j = i+1; j < k; ++j)
        {
           
            if(A[i]==A[j]){
             counter++;
             if(counter==1){
                cout<<A[i]<<endl;
             }
               
            }
        }
    }
  
}













template class List_Vektor<int>;
template class List_Vektor<float>;