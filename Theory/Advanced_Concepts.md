# C++ Advanced Concepts

## Structures

```c++
// Create a structure variable called myStructure
struct {
  int myNum;
  string myString;
} myStructure;

// Assign values to members of myStructure
myStructure.myNum = 1;
myStructure.myString = "Hello World!";

// Print members of myStructure
cout << myStructure.myNum << "\n";
cout << myStructure.myString << "\n";
```

### Multiples

```c++
struct {
  string brand;
  string model;
  int year;
} myCar1, myCar2; // We can add variables by separating them with a comma here

// Put data into the first structure
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Put data into the second structure
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;

// Print the structure members
cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n"; 
```

### Structures with name it's lika java advanced type:

```c++
// Declare a structure named "car"
struct car {
  string brand;
  string model;
  int year;
};

int main() {
  // Create a car structure and store it in myCar1;
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Create another car structure and store it in myCar2;
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;
 
  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 
  return 0;
}
```


## Enums

```c++
enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
}; 


int main() {
  enum Level myVar = MEDIUM;
  cout << myVar;  // Now outputs 50
  return 0;
} 
```


```c++
enum Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main() {
  enum Level myVar = MEDIUM;

  switch (myVar) {
    case 1:
      cout << "Low Level";
      break;
    case 2:
      cout << "Medium level";
      break;
    case 3:
      cout << "High level";
      break;
  }
  return 0;
} 
```

## References

&Davant de variable = referència a lo que apunta.
```c++
string food = "Pizza";
string &meal = food;

cout << food << "\n";  // Outputs Pizza
cout << meal << "\n";  // Outputs Pizza
```

Si vull l'adreça de memòria:

```c++
string food = "Pizza";

cout << &food; // Outputs 0x6dfed4
```

## Pointers

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";  // Variable declaration
  string* ptr = &food;    // Pointer declaration

  // Reference: Output the memory address of food with the pointer
  cout << ptr << "\n";

  // Dereference: Output the value of food with the pointer
  cout << *ptr << "\n";
  return 0;
}
```

## Functions

```c++
 // Create a function
void myFunction() {
  cout << "I just got executed!";
}

int main() {
  myFunction(); // call the function
  return 0;
}

// Outputs "I just got executed!"
```

**Note: If a user-defined function, such as myFunction() is declared after the main() function, an error will occur.**

## Function Paramters

### Default Parameter

```c++
void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  return 0;
}

// Sweden
// India
// Norway
// USA
```

### Pass by Reference

```c++
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}
```

### Pass Arrays to a Function

```c++
void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
} 
```

Arrays always get past by reference withou the &.

## Function Overloading

```c++
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
```


