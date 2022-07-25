#pragma once
#include <iostream>
using namespace std;
//Abstraction is basically like a rules comtract. 
//They are basically a list of functions you must write code for when you create a new class
//You can group different classes in arrays if you use abstraction
//For example:
//Every class that is a child class of the base class instrument can be grouped together in an array
//You have to do class childclassname : public baseclassname to make the class a child class
//To make the base class and abstract class, you must have at least one pure virtual function in the class
//This is a pure virtual function:
//virtual void functionname() = 0;
//Always keep public above the function to make it usable by other classes and exterior function (like int main())
//Use void when declaring a function
//Now just look below
//   | |
//   | |
//  _| |_
//  \   /
//   \ /
class instrument
{
public:
    virtual void sound() = 0;
    virtual void made_of() = 0;
};

class trumpet : public instrument
{
public:
    void sound()
    {
        cout << "Trumpet playing" << endl;
    }
    void made_of()
    {
        cout << "A trumpet is made out of brass." << endl;
    }
};
class piano : public instrument
{
public:
    void sound()
    {
        cout << "Piano playing" << endl;
    }
    void made_of()
    {
        cout << "A piano is made out of wood, metal, or hard glass. It has tiny hammers made out of soft wood or artificial substances to pluck/hit the strings inside." << endl;
    }
};
class cello : public instrument
{
public:
    void sound()
    {
        cout << "Cello playing" << endl;
    }
    void made_of()
    {
        cout << "A cello is made out of wood and plastic." << endl;
    }
};
class viola : public instrument
{
public:
    void sound()
    {
        cout << "Viola playing" << endl;
    }
    void made_of()
    {
        cout << "A viola is made out of wood and plastic." << endl;
    }
};
class violin : public instrument
{
public:
    void sound()
    {
        cout << "Violin playing" << endl;
    }
    void made_of()
    {
        cout << "A violin is made out of wood and plastic." << endl;
    }
};
class flute : public instrument
{
public:
    void sound()
    {
        cout << "Flute playing" << endl;
    }
    void made_of()
    {
        cout << "A flute is made out of metal or wood." << endl;
    }
};
class drums : public instrument
{
public:
    void sound()
    {
        cout << "Drums drumming" << endl;
    }
    void made_of()
    {
        cout << "Drums are made out of metal and plastic." << endl;
    }
};
class tuba : public instrument
{
public:
    void sound()
    {
        cout << "Tuba playing" << endl;
    }
    void made_of()
    {
        cout << "A tuba is made out of brass." << endl;
    }
};
class double_bass : public instrument
{
public:
    void sound()
    {
        cout << "Double Bass playing" << endl;
    }
    void made_of()
    {
        cout << "A double bass is made out of wood and plastic." << endl;
    }
};