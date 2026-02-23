#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    int count;
    cout << "Enter number of students: ";
    cin >> count;
    while (count <= 0)
    {
        cout << "Please enter a valid positive number: ";
        cin >> count;
    }
  
    Student* students = new Student[count];
    for (int i = 0; i < count; i++)
    {
        int roll;
        string name;
        float gpa;
        cout << "\nEnter details for Student " << i + 1 << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Roll Number: ";
        cin >> roll;
        cout << "GPA (0 - 4): ";
        cin >> gpa;
        students[i].setName(name);
        students[i].setRollNumber(roll);
        students[i].setGPA(gpa);
    }
    cout << "\n\n Student Records \n";
    for (int i = 0; i < count; i++)
    {
        cout << "\nName: " << students[i].getName()
            << " | Roll: " << students[i].getRollNumber()
            << " | GPA: " << students[i].getGPA();
    }
    delete[] students;

    return 0;
}