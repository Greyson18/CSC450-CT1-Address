#include <iostream>
#include <string>
using namespace std;

int main() {
    // Initialize variables to store person's information
    string firstName;
    string lastName;
    string streetAddress;
    string city;
    int zipCode;

    //Allow user to add personal information when prompted.
    cout << "Enter First Name Here: ";
    cin >> firstName;
    cout << "Enter Last Name Here: ";
    cin >> lastName;
    cout << "Enter Street Address Here: ";
    cin.ignore(); // ignore any newline characters left in the input stream
        getline(cin, streetAddress);
    cout << "Enter City Here: ";
    cin >> city;
    cout << "Enter Zip Code Here: ";
    cin >> zipCode;

    // Print the person's information
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    //Return Statement
    return 0;
}
