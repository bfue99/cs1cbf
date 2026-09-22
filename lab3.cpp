//
// Created by admin on 9/22/26.
//

Student::void printStanding(string name, int year) {
    if (year == 1)
        cout << name << " is a Freshman" << endl;
    else if (year == 2)
        cout << name << " is a Sophmore" << endl;
    else if (year == 3)
        cout << name << " is a Junior" << endl;
    else if (year == 4)
        cout << name << " is a Senior" << endl;
}