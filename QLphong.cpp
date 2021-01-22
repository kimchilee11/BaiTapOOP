#include "QLphong.h"

template<class T> 
QLphong<T>::QLphong()
        : length(0), data(nullptr)
{

}

template<class T> 
QLphong<T>::QLphong(int l)
        : length(l)
{
        this->data = new T[this->length];
}

template<class T> 
QLphong<T>::~QLphong()
{
    delete[] (this->data);
}

template<class T> 
void QLphong<T>::Delete()
{
    delete[] this->data;
    this->data = nullptr;
    this->length = 0;
}

template<class T>
T& QLphong<T>::operator[](int index)
{
    return this->data[index];
}

template<class U>
void QLphong<U>::Insert(U value, int index )
{
    if(this->length==0)
    {
        this->data = new U;
        this->data[0] = value;
        ++this->length;
    }
    else 
    {
        U *d = new U[this->length+1];
        for (int i=0; i< index; ++i)
        {
            d[i] = this->data[i];
        }
        d[index] = value;
        for(int i=index; i< this->length; ++i)
        {
            d[i+1] = this->data[i];
        }
        this->data = d;
        ++this->length;
    }
}


template<class U>
ostream& operator<<(ostream& o, const QLphong<U>& ql)
{
    for(int i=0; i< ql.length; ++i)
    {
        o << i+1;
        o << ql.data[i] ;
        o << endl;
    }
    return o;
}


template<class U>
void QLphong<U>::Remove(int index)
{
    U *d = new U[this->length-1];
    for (size_t i = 0; i < index; i++)
    {
        d[i] = (*this)[i];
        int bien= d[i].getMaPh();
    }
    for (size_t i = index+1; i < this->length; i++)
    {
        d[i-1] = (*this)[i];
    }
    this->data = data;
    --this->length;
    
}


template<class U>
void QLphong<U>::SapXep()
{
    for (int i = 0; i < this->length; i++)
    {
        for (int j = i; j < this->length; j++)
        {
            U tam = this->data[i];
            if ( this->data[i].getMaPh() > this->data[j].getMaPh() )
            {
                this->data[i] = this->data[j];
                this->data[j] = tam ;
            }
        }
    }
    
}

template<class T>
T QLphong<T>::search(int index)
{
    int i = 0;
    for (i; i < this->length; i++)
    {
        if(index == i) break;
    }
        return this->data[i];
}

template<class T>
void QLphong<T>::update(int index, T neww)
{
    for (int i = 0; i < this->length; i++)
    {
        if(index == i)
        this->data[i] = neww;
    }
}

template<class T>
int QLphong<T>::GetLength() const
{
    return this->length;
}

template<class T>
QLphong<T>& QLphong<T>::operator=(const QLphong<T>& l)
{
    for (int i = 0; i < l.length; i++)
    {
        this->data[i] = l.data[i];
    }
    this->length = l.length;
    return *this;
}

template<class T>
istream& operator>>(istream& cin, QLphong<T>& ql)
{
    cout << "Nhap Chieu Dai Mang : ";
    cin >> ql.length;
    ql.data = new T[ql.length];
    for (size_t i = 0; i < ql.length; i++)
    {
        cout << "Nhap Phan Tu thu " <<i <<" : ";
        cin >> ql.data[i];
    }
    return cin;
}


// CREATE TRIGGER UPDATE_BANHANG
// ON DonHang
// FOR Update 
// AS 
// IF UPDATE(soluong)
//     UPDATE VPP 


