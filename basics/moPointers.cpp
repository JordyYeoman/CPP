#include <iostream>

using namespace std;

int updatePointerValues()
{
    int var = 5;
    int *pointVar;

    // store address of var
    pointVar = &var;

    // print var
    cout << "var = " << var << endl;

    // print *pointVar
    cout << "*pointVar = " << *pointVar << endl
         << endl;

    cout << "Changing value of var to 7:" << endl;

    // change value of var to 7
    var = 7;

    // print var
    cout << "var = " << var << endl;

    // print *pointVar
    cout << "*pointVar = " << *pointVar << endl
         << endl;

    cout << "Changing value of *pointVar to 16:" << endl;

    // change value of var to 16
    *pointVar = 16;

    // print var
    cout << "var = " << var << endl;

    // print *pointVar
    cout << "*pointVar = " << *pointVar << endl;
    return 0;
}

int moBasics()
{
    int var = 5;

    // declare pointer variable
    int *pointVar;

    // store address of var
    pointVar = &var;

    // print value of var
    cout << "var = " << var << endl;

    // print address of var
    cout << "Address of var (&var) = " << &var << endl
         << endl;

    // print pointer pointVar
    cout << "pointVar = " << pointVar << endl;

    // print the content of the address pointVar points to
    cout << "Content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;

    return 0;
}

int main()
{
    // declare variables
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;
    cout << "In C++, pointers are variables that store the memory addresses of other variables." << endl;
    // print address of var1
    cout << "Memory Address of var1: " << &var1 << endl;

    // print address of var2
    cout << "Memory Address of var2: " << &var2 << endl;

    // print address of var3
    cout << "Memory Address of var3: " << &var3 << endl;

    // Here is how we can declare pointers.
    int *pointVar;
    // Poiinters can also be declared this way:
    int *pointVar2; // preferred syntax

    int *pointVar3, p;
    int z;
    cout << "Does this work?: " << &pointVar3 << endl;
    cout << "Does this work?: " << &p << endl;
    cout << "Does this work?: " << &z << endl;

    // Assigning addresses to pointers
    int *pointVar4, bigDog;
    bigDog = 5;

    // assign address of var to pointVar4 pointer
    pointVar4 = &bigDog;

    // access value pointed by pointVar
    cout << *pointVar4 << endl; // Output: 5 // Go to the address * saved at inside this variable and retrieve the value stored there.

    // Example 2
    moBasics();
    updatePointerValues();
    return 0;
}