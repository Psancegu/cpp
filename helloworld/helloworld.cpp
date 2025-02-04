#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName; 


    string x = "10";
    string y = "20";
    string z = x + y;   // z will be 1020 (a string) 

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length(); 

    string myString = "Hello";
    cout << myString[0];
    // Outputs H

    string helloda = "Hello";
    myString[0] = 'J';
    cout << myString;

    string fullName2;
    cout << "Type your full name: ";
    getline (cin, fullName2);
    cout << "Your name is: " << fullName2;

    // Type your full name: John Doe
    // Your name is: John Doe

    string greeting1 = "Hello";  // Regular String
    char greeting2[] = "Hello";  // C-Style String (an array of characters)
    cout << greeting2;
    cout << max(5, 10);
    cout << min(5, 10);

    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun;  // Outputs 1 (true)
    cout << isFishTasty;  // Outputs 0 (false)

}

/*
int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
*/
/*
for (type variableName : arrayName) {
  // code block to be executed
}
*/



/* ARRAYS 
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"}
int myNum[3] = {10, 20, 30};

Size of an Array.

int myNumbers[5] = {10, 20, 30, 40, 50};
int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
cout << getArrayLength;


int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}

 string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

string letters[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};


*/
