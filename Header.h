/*
    name: Eshna Nawaz (014)
          Mahnoor Ayaz (032)
*/

#include <string>
using namespace std;

class Student
{
private:
    int rollNumber;
    string name;
    float gpa;

public:
    Student();
    void setRollNumber(int r);
    void setName(string n);
    void setGPA(float g);
    int getRollNumber() const;
    string getName() const;
    float getGPA() const;
};
Student::Student()
{
    rollNumber = 1;
    name = "Unknown";
    gpa = 0.0f;
}
void Student::setRollNumber(int r)
{
    if (r > 0)
        rollNumber = r;
    else
    {
        cout << "Invalid Roll Number! Default set to 1.\n";
        rollNumber = 1;
    }
}
void Student::setName(string n)
{
    if (!n.empty())
        name = n;
    else
    {
        cout << "Invalid Name! Default set to 'Unknown'.\n";
        name = "Unknown";
    }
}
void Student::setGPA(float g)
{
    if (g >= 0.0f && g <= 4.0f)
        gpa = g;
    else
    {
        cout << "Invalid GPA! Default set to 0.0.\n";
        gpa = 0.0f;
    }
}
int Student::getRollNumber() const
{
    return rollNumber;
}
string Student::getName() const
{
    return name;
}
float Student::getGPA() const
{
    return gpa;
}


