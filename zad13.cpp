#include <iostream>
#include <string>

using namespace std;

class Contact {
private:
    string lastName;
    string firstName;
    string middleName;
    string phoneNumber;

public:
    Contact(string lastName, string firstName, string middleName, string phoneNumber) {
        this->lastName = lastName;
        this->firstName = firstName;
        this->middleName = middleName;
        this->phoneNumber = phoneNumber;
    }

    string getLastName() {
        return lastName;
    }

    string getFirstName() {
        return firstName;
    }

    string getMiddleName() {
        return middleName;
    }

    string getPhoneNumber() {
        return phoneNumber;
    }
};

int main() {
    Contact contact("Andreev", "Andrey", "Andreevich", "+1234567890");

    cout << "Contact Details:" << endl;
    cout << "Last Name: " << contact.getLastName() << endl;
    cout << "First Name: " << contact.getFirstName() << endl;
    cout << "Middle Name: " << contact.getMiddleName() << endl;
    cout << "Phone Number: " << contact.getPhoneNumber() << endl;

    return 0;
}
