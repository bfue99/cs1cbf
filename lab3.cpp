//
// Created by admin on 9/22/26.
//
#include <iostream>
#include <string>

using namespace std;

void printStanding(string name, int year) {
    if (year == 1)
        cout << name << " is a Freshman" << endl;
    else if (year == 2)
        cout << name << " is a Sophomore" << endl;
    else if (year == 3)
        cout << name << " is a Junior" << endl;
    else if (year == 4)
        cout << name << " is a Senior" << endl;
    else
    {
        cout << "Invalid year." << endl;
    }
}

int main()
{
    string name;
    int year;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your year: ";
    cin >> year;
    printStanding(name, year);
}