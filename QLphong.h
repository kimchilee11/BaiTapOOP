// #include"PhongBT.h"
// #include"PhongVIP.h"
// #include"Date.h"
#include<iostream>

using namespace std;

template<class T>
class QLphong
{
private:
    T *data;
    int length;
public:
    QLphong();
    QLphong(int);
    ~QLphong();
    void Delete();
    T& operator[](int);
    int GetLength() const;
    void Reallocate(int);
    void Resize(int);
    void Insert(T, int);
    void InsertFirst( int);
    void InsertLast(T);
    void Remove(int);
    T search(int);
    void update(int, T);
    QLphong<T>& operator=(const QLphong<T>&);
    template<class U>
    friend ostream& operator<<(ostream&, const QLphong<U>&);
    template<class U>
    friend istream& operator>>(istream&, QLphong<U>&);
    void QuanLi();
    void SapXep();
};
