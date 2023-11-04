#include <iostream>
#include <string>

using namespace std;

class BibliographicSource {
private:
    string title;
    string author;
    int year;
    string category;

public:
    // Constructor
    BibliographicSource(string t, string a, int y, string c) {
        title = t;
        author = a;
        year = y;
        category = c;
    }

    // Getters
    string getTitle() {
        return title;
    }

    string getAuthor() {
        return author;
    }

    int getYear() {
        return year;
    }

    string getCategory() {
        return category;
    }
};

int main() {
    // Create an instance of BibliographicSource
    BibliographicSource source("The Master and Margarita", "Michael Bulgakov", 1967, "Novel");

    // Print the details of the source
    cout << "Title: " << source.getTitle() << endl;
    cout << "Author: " << source.getAuthor() << endl;
    cout << "Year: " << source.getYear() << endl;
    cout << "Category: " << source.getCategory() << endl;

    return 0;
}
