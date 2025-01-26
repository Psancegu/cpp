# Introduction to the language

To print something
```cpp
int main(){
    std::cout << price;
}
```

## Variables and basic data types

- Igual que a java tenim: int, float, double, char, bool.
    - Size of int: 4 bytes
    - Size of char: 1 byte
    - Size of float: 4 bytes
    - Size of double: 8 bytes

- void functionName(); Funció que no retorna res igual que a java.

### String

```c++
int main(){
    std::string name = "Pol ";
    std::string surnames = "Sances Guirao ";

    std::cout << "Hello " << name << surnames; 
}
```

## Constants

Programa que calcula la circumferencia
```c++

int main(){
    const double PI = 3.14159;
    double radiud = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << "cm";
}
```
Al igual que java tenim una keyword "const" en aquest cas, que fa que no es pugui modificar la convenció de "variable naming" és posar les variables en majúscules.


## Namespaces

Els namespaces ajuden en un programa gran a difrenciar dues variables que es diuen igual, ser diferents sempre que s'utilitzi el namespace adeqüat.

Exemple:
```c++
namespace first{
    int x = 1;
}

namespaces second{
    int x = 2;
}

int main() {
    int x = 0;

    std::cout << first::x;

    return 0;
}

// Si utilitzo first davant de x m'agafa el valor de 1 si es el second el 2 i si no el valor decalrat a la funció main.

Si vull utilitzar aquest namespace sense posar la keyword davant. Puc posar dins del mètode main "using namespace first;" al prinicpi del mètode. Però segueix funcionat la keyword.

Si utilitzo using namespace std; m'estalvio el std però hi ha més probabilitat de conflicte de nom de variable.





