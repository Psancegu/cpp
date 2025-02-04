#include <iostream>
#include <string>

using namespace std;

struct book {
    string title;
    string author;
    int year;
    bool read;
};

book books[4] = {
    {"Nunca Terminar", "David Goggins", 2023, true},
    {"Recupera tu mente, reconquista tu vida", "Marian Rojas Estapé", 2024, false},
    {"Todo Arde", "Juan Gómez Jurado", 2022, true},
    {"Rey Blanco", "Juan Gómez Jurado", 2020, true}
};

void showAll() {
    for (const book b : books) {
        cout << b.title << ", " << b.author << ", " << b.year << ", " << (b.read ? "Read.": "Not Read.") << endl;
    }
}

void showRead(){
    for (const book b : books){
        if (b.read == true){
            cout << b.title << ", " << b.author << ", " << b.year << "." << endl;
        }
    }
}

void showUnread(){
    for (const book b : books){
        if (b.read == false){
            cout << b.title << ", " << b.author << ", " << b.year << "." << endl;
        }
    }
}


int main() {
    cout << "Enter A to display all books, R to display read books or U to display unread books:" << endl;
    char c;
    cin >> c;
    switch (c)
    {
    case 'A':
        showAll();
        break;
    case 'R':
        showRead();
        break;
    case 'U':
        showUnread();
        break;
    default:
        cout << "Invalid Character";
        break;
    }
}
