#include <iostream>
#include <string>

using namespace std;

class Ticket {
private:
    string movieTitle;
    string startTime;
    int row;
    int seat;
    double price;

public:
    // Constructor
    Ticket(string t, string st, int r, int s, double p) {
        movieTitle = t;
        startTime = st;
        row = r;
        seat = s;
        price = p;
    }

    // Getters
    string getMovieTitle() {
        return movieTitle;
    }

    string getStartTime() {
        return startTime;
    }

    int getRow() {
        return row;
    }

    int getSeat() {
        return seat;
    }

    double getPrice() {
        return price;
    }
};

int main() {
    // Create an instance of Ticket
    Ticket ticket("Scarface", "18:30", 4, 9, 13.50);

    // Print the details of the ticket
    cout << "Movie Title: " << ticket.getMovieTitle() << endl;
    cout << "Start Time: " << ticket.getStartTime() << endl;
    cout << "Row: " << ticket.getRow() << endl;
    cout << "Seat: " << ticket.getSeat() << endl;
    cout << "Price: $" << ticket.getPrice() << endl;

    return 0;
}
