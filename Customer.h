 /* TITLE Project2.cpp
 * ABSTRACT:  
 * Author: Kyle Dilbeck 
 * ID: 1996
 * Date: 4/16/19
 */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib> //for exit
using namespace std;

struct Account
{
 
 int num; 
 double balance; 
 Account(){}
 Account(int x , int bal):num(x), balance(bal){}
 
 
};

class Customer
 {
    private:
       string first, last; 
        int ID, SSN, type; 
        double balance; 
        Account *checkings ; 
        Account *savings   ; 
        
     public:
        string getFirst(); 
        string getLast(); 
        int getID(); 
        int getSSN(); 
        double get_checkingBalance(); 
        double get_savingBalance(); 
        bool hasChecking();
        bool hasSaving(); 
        bool accClose(int num);
        bool accOpen(int num, int type, double balance);
        Customer(); 
        Customer(int newSSN, string newFirst, string  newLast, int newID, int newType, double newBalance);
        string setFirst(string x); 
        string setLast(string y); 
        void setChecking(double d); 
        void setSavings(double d); 
        int setID(int y); 
        int setSSN(int x); 
        int setType(int x); 
       

     
 };
 
 