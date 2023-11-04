#include <iostream>
#include <string>

using namespace std;

class Film {
private:
    string title;
    string genre;
    double budget;
    int releaseDay;
    int releaseMonth;
    int releaseYear;

public:
    Film(string title, string genre, double budget, int releaseDay, int releaseMonth, int releaseYear) {
        this->title = title;
        this->genre = genre;
        this->budget = budget;
        this->releaseDay = releaseDay;
        this->releaseMonth = releaseMonth;
        this->releaseYear = releaseYear;
    }

    string getTitle() {
        return title;
    }

    string getGenre() {
        return genre;
    }

    double getBudget() {
        return budget;
    }

    int getReleaseDay() {
        return releaseDay;
    }

    int getReleaseMonth() {
        return releaseMonth;
    }

    int getReleaseYear() {
        return releaseYear;
    }
};

int main() {
    Film film("Scarface", "Drama", 370000000, 9, 10, 1983);

    cout << "Film Details:" << endl;
    cout << "Title: " << film.getTitle() << endl;
    cout << "Genre: " << film.getGenre() << endl;
    cout << "Budget: $" << film.getBudget() << endl;
    cout << "Release Date: " << film.getReleaseDay() << "/" << film.getReleaseMonth() << "/" << film.getReleaseYear() << endl;

    return 0;
}
