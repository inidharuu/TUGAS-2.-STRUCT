#include <iostream>
#include <string>
using namespace std;

struct studentType
{
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

studentType array[20];
int n;

void ReadData()
{
    cout << "Enter the number of students : ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the first name of student " << i + 1 << ": ";
        cin >> array[i].studentFName;
        cout << "Enter the last name of student " << i + 1 << ": ";
        cin >> array[i].studentLName;
        cout << "Enter the test score of student " << i + 1 << ": ";
        cin >> array[i].testScore;
        cout << endl;
    }
}

void AssignGrade()
{
    for (int i = 0; i < n; i++)
    {
        if (array[i].testScore >= 90)
        {
            array[i].grade = 'A';
            cout << array[i].studentFName << "'s" << " grade is : " << array[i].grade<< endl;
        }
        else if (array[i].testScore >= 83)
        {
            array[i].grade = 'B';
            cout << array[i].studentFName << "'s" << " grade is : " << array[i].grade<< endl;
        }
        else if (array[i].testScore >= 70)
        {
            array[i].grade = 'C';
            cout << array[i].studentFName << "'s" << " grade is : " << array[i].grade<< endl;
        }
        else if (array[i].testScore >= 60)
        {
            array[i].grade = 'D';
            cout << array[i].studentFName << "'s" << " grade is : " << array[i].grade<< endl;
        }
        else
        {
            array[i].grade = 'E';
            cout << array[i].studentFName << "'s" << " grade is : " << array[i].grade<< endl;
        }
    }
    cout << endl;
}

int highestGrade()
{
    int highest = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i].testScore > highest)
        {
            highest = array[i].testScore;
        }
    }
    return highest;
}

void printName(studentType student)
{
    cout << "The highest grade is = " << endl;
    cout << "Name : " << student.studentLName << ", " << student.studentFName << endl;
}

void printScore()
{
    cout << "Score : " << highestGrade() << endl;
}

int main(int argc, char const *argv[])
{
    ReadData();
    AssignGrade();
    printName(array[0]);
    printScore();
    return 0;
}
