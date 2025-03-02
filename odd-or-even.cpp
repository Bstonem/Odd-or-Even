#include <iostream>
using namespace std;

int main() {

    int userNumber; 
    int divRemainder;

    cout << "Enter a number. "; // Prompts user to enter a number.
    cin >> userNumber;
        divRemainder = userNumber % 2; // The modulo (%) operator evaluates the remainder by dividing userNumber by 2.  

    if (divRemainder == 0) {                  // This sets up the condition of remainder being equal to 0.
        cout << userNumber << " is even!";   //  If condition is true, this output will occur.
    } else {  
        cout << userNumber << " is odd!";  //  If the condition is not true, this output will occur.
    }

    return 0;

    }



