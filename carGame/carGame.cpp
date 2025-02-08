#include <iostream>

using namespace std;

class Car {
public:
    string brand;   
    string model;
    int horsepower;
    int year;

    Car() {}

    Car(string x, string y, int z, int a) { 
        brand = x;
        model = y;
        horsepower = z;
        year = a;
    }

    void display() {
        cout << "Brand: " << brand << ", Model: " << model 
             << ", Horsepower: " << horsepower << ", Year: " << year << endl;
    }
};

int main() {
    int n;
    cout << "How many cars do you want to create? ";
    cin >> n;

    Car cars[n];  // Array estático de coches

    for (int i = 0; i < n; i++) {
        string brand, model;
        int horsepower, year;

        cout << "Enter the details of car " << i + 1 << ":" << endl;
        cout << "Brand: ";
        cin >> brand;
        cout << "Model: ";
        cin >> model;
        cout << "Horsepower: ";
        cin >> horsepower;
        cout << "Year: ";
        cin >> year;
        cout << "\n";

        cars[i] = Car(brand, model, horsepower, year);  // Asignación en el array
    }

    cout << "List of created cars:\n";
    for (int i = 0; i < n; i++) {
        cout << "Car " << i + 1 << ": ";
        cars[i].display();
    }

    return 0;
}
