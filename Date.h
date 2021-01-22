#pragma once
#include<iostream>
#include<exception>
using namespace std;

class Date
{
private:
    int Day, Month  , Year ;
public:
    int GET_Day();
    int GET_Month();
    int GET_Year();
    void input();
    Date operator=(const Date&);
    friend const ostream& operator<<( ostream&,const Date&);
    Date();
    ~Date();
};
