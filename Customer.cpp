/* TITLE Project2.cpp
 * ABSTRACT:  
 * Author: Kyle Dilbeck 
 * ID: 1996
 * Date: 4/16/19
 */

#include <iostream>
#include <iomanip>
#include "Customer.h"
#include <fstream>
#include <cstdlib> //for exit

using namespace std;

Customer::Customer()
{
    SSN = 0; 
    first = ""; 
    last = "";
    checkings = nullptr; 
    savings = nullptr;
};

Customer::Customer(int newSSN, string newFirst, string newLast, int newID, int newType, double newBalance)
{
    
    SSN = newSSN; 
    first = newFirst; 
    last = newLast; 
    checkings = nullptr ; 
    savings = nullptr  ; 
    //cout << "Constructor: " <<hasChecking() << " " << hasSaving()<<  endl; 
    accOpen(newID, newType ,newBalance);
    
}


// GETTERS-----------------------------
string Customer::getFirst()
{
    return first;
}
string Customer::getLast()
{
    return last; 
}
int Customer::getID()
{
    return ID;
}
int Customer::getSSN()
{
    return SSN; 
}
/*
int Customer::getType()
{
    return type; 
}
*/


double Customer::get_checkingBalance()
{
    return checkings->balance; 
}

double Customer::get_savingBalance()
{

    return savings->balance;  
}

// END GETTERS --------------------------


bool Customer::hasChecking()
{
    return checkings != nullptr; 
}

bool Customer::hasSaving()
{
    return savings != nullptr; 
}

bool Customer::accClose(int num)
{
    if(hasChecking())
    {
        if(num == checkings->num) 
        {
            delete checkings; 
            checkings == nullptr; 
            //print out account closed info 
            
            return true; 
        }
    }
    if(hasSaving())
    {
        if(num == savings->num)
        {
            delete savings; 
            savings == nullptr; 
            //print out account closed info 
            cout << "          Name: " << getFirst() << " " << getLast() << endl 
                 << "Account number: " << getID() << endl
                 << "  Account type: " << "[filler accType]" << endl 
                 << "       Balance: " << get_checkingBalance() << " " << get_savingBalance() << endl; 
                 
            
            return true; 
        }
        
    }
    
    return false; 
    
}

bool Customer::accOpen(int num, int type, double balance)
{
    //check type 
    if(type == 1)
    {
        if(!hasChecking())
        {
            setID(num);
            setType(type);
            checkings = new Account(num, balance);
            
            return true; 
        }
        else
        {
            //cout << num << " " << type << " "<<balance << endl; 
            cout << "checking full"<<endl; 
            
        }
        
    }
    if(type==2)
    {
        //cout << "type" << type << " bal: " << balance << " " << hasSaving()<<endl; 
        //cout << num << " " << type << " "<<balance << endl; 
        if(!hasSaving())
        {
            setID(num);
            setType(type);
            savings = new Account(num, balance);
            return true; 
        }
        else 
        
            cout << "savings full " << endl; 
    }
    
    return false; 
    
}

string Customer::setFirst(string x)
{
    first = x; 
}
string Customer::setLast(string y)
{
    last = y; 
}
int Customer::setSSN(int x)
{
    SSN = x; 
}
int Customer::setID(int y)
{
    ID = y; 
}
int Customer::setType(int x)
{
    type = x; 
}
void Customer::setSavings(double d)
{
    //savings = d; 
}
void Customer::setChecking(double d)
{
    //checkings = d; 
}
