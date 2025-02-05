#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Book {
    string title;
    string author;
    int year;
    bool read;
};

Book books[100];
int bookCount = 0;


void readFile() {
    ifstream file("books.txt");

    if (!file) {
        cerr << "Error Opening File" << endl;
        return;
    }

    bookCount = 0;

    while (bookCount < 100) {
        Book b;
        char discard; 
        string readStr; 

        
        if (!getline(file, b.title, ',')) break; 
        if (!getline(file, b.author, ',')) break;
        file >> b.year >> discard;
        file >> readStr;
        file.ignore();

        b.read = (readStr == "true");

        books[bookCount++] = b;
    }

    file.close();
}



void showAll() {
    cout << "\n List of all books:\n";
    for (int i = 0; i < bookCount; ++i) {
        cout << books[i].title << ", " << books[i].author << ", " << books[i].year
             << ", " << (books[i].read ? "Read" : "Not Read") << endl;
    }
}


void showRead() {
    cout << "\n Read Books:\n";
    for (int i = 0; i < bookCount; ++i) {
        if (books[i].read) {
            cout << books[i].title << ", " << books[i].author << ", " << books[i].year << endl;
        }
    }
}


void showUnread() {
    cout << "\n Unread Books:\n";
    for (int i = 0; i < bookCount; ++i) {
        if (!books[i].read) {
            cout << books[i].title << ", " << books[i].author << ", " << books[i].year << endl;
        }
    }
}


int main() {
    readFile();
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
