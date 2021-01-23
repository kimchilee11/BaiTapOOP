//abc
#include"Date.h"
//ABC
Date::Date()
{
    this->Day = 0;
    this->Month = 0;
    this->Year = 0;
}

Date::~Date()
{

}

int Date::GET_Day()
{
    return this->Day;
}

int Date::GET_Month()
{
    return this->Month;
}

int Date::GET_Year()
{
    return this->Year;
}

void Date::input()
{
    while (1)
    {
        cin >> this->Day;
        // if(this->Day <1 || this->Day > 30) throw 777;
        cin >>  this->Month;
        // if(this->Month <1 || this->Month > 12) throw 777;
        cin >> this->Year ;
        // if(this->Year <1900) throw 777;
        if((this->Day <= 31 && this->Day >=1) && (this->Month <= 12 && this->Month >= 1) && (this->Year <= 2020 && this->Year >=1900 ))
        {
            break;
        }
        else
        {
            cout << "\n(Ban vua nhap sai ngay thang nam .)\n Moi ban nhap lai :";
        }
        
        
    }
    
}

Date Date::operator=(const Date& d)
{
    this->Day = d.Day;
    this->Month = d.Month;
    this->Year = d.Year;
    return *this;
}

const ostream& operator<<( ostream& cout,const Date& d)
{
    if(d.Day==0)
    {
        cout << "NULL";
    }
    else  cout << d.Day << "/" << d.Month << "/" << d.Year;
    return cout ;
}
