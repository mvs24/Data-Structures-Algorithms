#ifndef LIST_VEKTOR_H
#define LIST_VEKTOR_H
#include <iostream>
using namespace std;

template <class T>
class List_Vektor
{ 
public:
    typedef T value_type; // tip i te dhenave T qe ruhet ne liste
    typedef int position;
    // konstruktori
    List_Vektor();
    List_Vektor(int);
    // konstruktori i kopies
    List_Vektor(const List_Vektor<T> &);
    //destruktori
    ~List_Vektor();
    // veprimet


    void create();
    bool empty() const;
    value_type read(position) const;
    void write(const value_type &, position);
    position begin() const;
    bool end(position) const;
    position next(position) const;
    position previous(position) const;
    void insert(const value_type &, position);
    void duplicate();
    void duplicateList(List_Vektor<T> &);
    void erase(position);
    void print();
    // overwrite i operatoreve aritmetike
    List_Vektor<T> &operator=(const List_Vektor<T> &); // operatori i

    bool operator==(const List_Vektor<T> &) const; // krahason dy lista nqs


    List_Vektor<T> concat(List_Vektor<T> &);

    List_Vektor<T> unionIntersection(List_Vektor<T> &);


    private:
    void change_dimension_(T *&, int, int);
    value_type *elements_;
    int length_;          // gjatesia e listes
    int array_dimension_; // permasat e vektorit

};
#endif
