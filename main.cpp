#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;

    cout << "Student name: ";
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;
}