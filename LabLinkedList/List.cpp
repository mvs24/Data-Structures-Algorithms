#include "List.h"
using namespace std;
template <class T>
Linked_list<T>::Linked_list()
{
    _pHead = new List_node<T>;
    _pHead->_pNext = _pHead;
    _pHead->_pPrev = _pHead;
    _length = 0;
}

template <class T>
Linked_list<T>::Linked_list(const Linked_list<T> &L)
{
    _length = L.size();
    _pHead = new List_node<T>;
    _pHead->_pNext = _pHead;
    _pHead->_pPrev = _pHead;
    if (!L.empty())
    {
        position p = L.last();
        for (int i = 0; i <= L._length; i++)
        {
            insert(L.read(p), begin());
            p = L.previous(p);
        }
    }
}
template <class T>
Linked_list<T>::~Linked_list()
{
    while (!empty())
        erase(begin());
    delete _pHead;
}


template <class T>
void Linked_list<T>::create()
{
    if (empty())
        _length = 0;
}


template <class T>
bool Linked_list<T>::empty() const
{
    return (_pHead == _pHead->_pNext);
}


template <class T>
typename Linked_list<T>::position
Linked_list<T>::begin() const
{
    // kthen nje Node* qe pointon ne elementin e pare te listes
        return (_pHead->_pNext);
}


template <class T>
typename Linked_list<T>::position
Linked_list<T>::last() const
{
    //kthen nje Node* qe pointon ne elementin e fundit te listes
    return (_pHead->_pPrev);
}



template <class T>
typename Linked_list<T>::position
Linked_list<T>::next(position p) const
{
    //kthen nje Node* qe pointon ne elementin pasardhes te listes
        return (p->_pNext);
}



template <class T>
typename Linked_list<T>::position Linked_list<T>::previous(position p) const
{
    //kthen nje Node* qe pointon ne elementin paraardhes te listes
    if (p != _pHead)
        return (p->_pPrev);
}


template <class T>
bool Linked_list<T>::end(position p) const
{
    // kthen true nese jemi ne dummy Node
    return (p == _pHead);
}


template <class T>
typename Linked_list<T>::value_type
Linked_list<T>::read(position p) const
{
    // merr si parameter ne Node* dhe kthen vleren e asaj Node
    if (!end(p))
        return (p->_value);
}


template <class T>
void Linked_list<T>::write(const value_type &a, position p)
{
    if (!end(p))
        p->_value = a;
}


template <class T>
void Linked_list<T>::insert(const value_type &a, position p)
{
    position t = new List_node<T>;
    t->_value = a;
    t->_pNext = p;
    t->_pPrev = p->_pPrev;
    p->_pPrev->_pNext = t;
    p->_pPrev = t;
    _length++;
}



    template <class T>
    void Linked_list<T>::erase(position p)
{
    // fshin ne pozicionin p ku p eshte pointer  (njesoj si pozicion me numra por ketu e kemi gati pointerin nuk ecim me for(i=0--->pos-1))
    if (!empty() && !end(p))
    {
        p->_pPrev->_pNext = p->_pNext;
        p->_pNext->_pPrev = p->_pPrev;
        delete p;
    }
}



template <class T>
Linked_list<T> &Linked_list<T>::operator=(const Linked_list<T> &L)
{
    if (this != &L)
    {
        _length = L.size();
        _pHead = new List_node<T>;
        _pHead->_pNext = _pHead;
        _pHead->_pPrev = _pHead;
        //cout << L.empty();
        //cout << L.size();
        if (!L.empty())
        {
            position p = L.last();

            for (int i = 0; i < L.size(); i++)
            {
                //cout << i, L.read(p);
                insert(L.read(p), begin());
                p = L.previous(p);
            }
        }
    }
    return *this;
}



template <class T>
bool Linked_list<T>::operator==(const Linked_list<T> &L) const
{
    if (L.size() != _length)
        return false;
    position p, pL;
    p = begin();
    pL = L.begin();
    while (!end(p))
    {
        if (p->_value != pL->_value)
            return false;
        p = p->_pNext;
        pL = pL->_pNext;
    }
    return true;
}


 template <class T>
    void Linked_list<T>::ciftet(Linked_list<T> &l){
    position p, pl;
    p=begin();
    pl=l.begin();
    while(!end(p)){
        while(!l.end(pl)){
            int s=p->_value+pl->_value;
            if(s%2==0){
                cout<<p->_value<<" "<<pl->_value<<endl;
            }
            pl=pl->_pNext;
        }
        pl=l.begin();
        p=p->_pNext;
    }
}


template<class T>
bool Linked_list<T>::isSorted(){

    position p;
    p=begin();
    p->_pPrev->_value=-9999;
    
    while(!end(p)){
            // cout<<p->_pNext->_value;

        if(p->_pNext->_value > p->_value){
            return false;
        }
        p=p->_pNext;
    }
    return true;
}

template<class T>
void Linked_list<T>::printPozicione(){
 position p;
    p=begin();
    while(!end(p)){
        cout<<p->_pNext->_value<<endl;
        p=p->_pNext;
    }
}

template<class T>
bool Linked_list<T>::palindrome(){
	position p;
    p=begin();
    position end;
    end=p->_pPrev->_pPrev;
    while(p!=end){
    	if(p->_value!=end->_value){
    		return false;
    	}
    	p=p->_pNext;
    	end=end->_pPrev;
    }
    return true;
}





template class Linked_list<int>;
template class Linked_list<float>;