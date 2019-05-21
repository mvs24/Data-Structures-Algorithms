#ifndef LIST_H
#define LIST_H
#include <iostream>
using namespace std;

template <class T>
struct List_node
{
    T _value;
    List_node<T> *_pPrev;
    List_node<T> *_pNext;
};

template <class T>
class Linked_list
{
public:
    typedef T value_type;
    typedef List_node<T> *position;

    // konstruktoret
    Linked_list();
    Linked_list(int);

    // konstruktori i kopjes
    Linked_list(const Linked_list<T> &);
    //destruktori
    ~Linked_list();
    // operatoret


    void create();
    bool empty() const;
    value_type read(position) const;
    void write(const value_type &, position);
    position begin() const;
    position last() const;
    bool end(position) const;
    position next(position) const;
    position previous(position) const;
    void insert(const value_type &, position);
    void erase(position);
    int size() const
    {
        return _length;
    };
    // overload i operatoreve
    Linked_list<T> &operator=(const Linked_list<T> &); // operatori i vleredhenies
    bool operator==(const Linked_list<T> &) const;     // kontrollon dy lista per barazi

    friend std::ostream &operator<<(ostream &os, const Linked_list<T> &l)
    {
        position p;
        p = l.begin();
        os << "[";
        while (!l.end(p))
        {
            if (p != l.begin())
                os << ", " << l.read(p);
            else
                os << l.read(p);
            p = l.next(p);
        }
        os << "]" << endl;
        return os;
    }

    void ciftet(Linked_list<T> &);
    bool isSorted();
    void printPozicione();
    bool palindrome();

private:
    List_node<T> *_pHead;
    int _length; // gjatesia e listes
};
#endif // _LINKED_LIST_H