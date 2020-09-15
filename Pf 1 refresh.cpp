#include <iostream>
using namespace std;

void Passed(int value) {
    if (value < 60)
        cout << "you failed";
    else
        cout << "you passed!";
}
int main()
{
    cout << "Hello World!" << endl;

    // Data Types
    int;
    float;
    double;
    long;
    short;

    char; 
    string;

    bool;

    // To declare any variable, use dataType variableName = value;

 

    //conditionals
    if (20 > 18) {
        cout << "20 is greater than 18" << endl;
    }
    else
        cout << "nope";

    //Loops

    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }



    //Arrays
    string Pokemon[] = { "Bulbasaur", "Squirtle", "Charmander", "Pikachu" };

    for (int i = 0; i < 4; i++)
    {
        cout << Pokemon[i] << endl;
    }

    int myNum 50;
    //Calling a function
    Passed(myNum);
}

