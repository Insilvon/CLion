#include <iostream>
//This is a comment, just like java it appears
/*
 * Multi line!
 */

#include <vector> //handles arrays, vectors
#include <string> //handles strings
#include <fstream> //handles filewriting

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    cout << "Hello world!" << endl;

    //variables and data types

    const double PI = 3.1415926535; //constant variable, double, value
    char myGrade = 'A'; //same as java
    bool isHappy = true; //bool, not boolean
    int x = 5; //same as java
    float y = 5.5555; //same as java
    double otherFavNum = 15.111111; //same as java

    cout <<"Fav Number" << otherFavNum << endl; //print to c out the <<<< stuff, then add variable?

    cout <<"Size of Int: " << sizeof(x)
    << endl;

    int largestInt = 1234567890;
    cout <<"Size of Int: "<< sizeof(largestInt) <<endl;

    //PRINT FORMATTING
//    cout <<""<< endl;
    cout <<"Multiple statements can go on one line!" <<endl; cout<<"Isn't this neat?"<< endl;

    return 0;
}