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

void readFile(ifstream &inFile, Customer *ID[]); 
//void readNames(); 
class Bank
{
   public:
        Bank(); 
        void display(); 
        void transfer(); 
        //void insert(); 
        //~Bank();
        //bool open(string name, int accountNumber, int type, int balance);
        //bool close(int accountNumber);
   private:
        //Account * accounts[5];
        int numAccounts;
        int dollars; 
        int cents ; 
        

};

Bank::Bank(){}




int main()
{
    /*
    // File stream object
    ifstream inFile;
   
    // Array to hold the numbers
    
    //int size; 
    //inFile >> size; 
    int MAX_SIZE = 20; 

    Customer *arrPtr[MAX_SIZE];
    
    // Don't forget to initialize the pointers with nullptr.
    for (int i=0; i < MAX_SIZE; i++)
    {
        arrPtr[i] = nullptr;
    }

    //int numbers[20];
    // Open the input file.
    string file; 
    cout << "Enter File name: "; 
    cin >> file; 
    inFile.open(file);

    // Test for errors.
    if (!inFile)
    {
        cout << "Error opening the file.\n";
        return 0;
    }

    // Read the numbers into the array.
    readFile(inFile, arrPtr);
    
    cout << "===== First 10 Numbers from Input File =====\n";
    for (int i=0; i < 10; i++)
        cout << arrPtr[i]->getFirst() << " ";
    cout << endl << endl;
    

    // Close the file.
    inFile.close();
    
    */
    
    Customer c1(7777, "Tom" , "Smith", 3000, 2, 100.00);
    c1.accOpen(4000 , 1 , 125.75); 
    
    cout << "check: " << c1.hasChecking() << " savings:" << c1.hasSaving()<<endl; 
    if(c1.hasChecking())
    {
        cout << c1.get_checkingBalance() << endl; 
        
    }
    c1.accClose(3000);
    
    if(c1.hasChecking())
    {
        cout << c1.get_checkingBalance() << endl; 
        
    }
    
    
    if(c1.hasSaving())
    {
        cout << c1.get_savingBalance() << endl; 
        
    }
    c1.accClose(3000);
    
    if(c1.hasSaving())
    {
        cout << c1.get_savingBalance() << endl; 
        
    }
    cout << "ID   : "<< c1.getID() <<endl; 
    cout << "Account Type : ";
    if(c1.hasChecking())
        cout << "Checking" << endl; 
    if(c1.hasSaving())
        cout << "Saving  " << endl; 
    Bank b1; 
    b1.display(); 
}


/*
//define read numbers -- insert numbers into array 
void readFile(ifstream &inFile, Customer arrPtr)
{
    
    int size; 
    inFile >> size; 
    cout << "debug size:" << size << endl; 
    int tempID , tempType , tempSSN; 
    string tempFirst, tempLast; 
    double tempBalance; 
    
   for (int i = 0; i < size; i++)
   {
      
      inFile >> tempSSN;
      inFile >> tempFirst;
      inFile >> tempLast;
      inFile >> tempID;
      inFile >> tempType;
      inFile >> tempBalance;
      
      Customer object(tempSSN, tempFirst, tempLast, tempID, tempType, tempBalance);
      *arrPtr[i] = object; 
   }
   
   
}
*/
/*
//define read names -- insert names into array
void readNames(ifstream &inFile, string names[], int y)
{
   for (int i = 0; i < y; i++)
      inFile >> names[i];
}


*/

void Bank::display()
{
    cout << "       Select your choice:     " << endl <<endl; 
    
    cout << "  1.	Read customer data file " << endl 
         << "  2.	Close an account        " << endl
         << "  3.	Customer Info           " << endl 
         << "  4.	Bank Info               " << endl
         << "  5.	Transfer Money          " << endl
         << "  6.	Customer List           " << endl
         << "  7.	Exit                    " << endl;

         
         
}
/*
void Bank::insert(ListNodePtr afterMe, int theData)
{
    ListNodePtr p;
    p = new ListNode;
    p->data = theData;
    p->link = afterMe->link;
    afterMe->link = p;
}
*/

void Bank::transfer()
{
    
}