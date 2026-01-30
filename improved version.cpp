 #include <iostream>
using namespace std;

class Student
{
private:
    int s1, s2, s3;

public:
    void readMarks()
    {
        cout << "Enter marks for 3 subjects: ";
        cin >> s1 >> s2 >> s3;
    }

    float average()
    {
        return (s1 + s2 + s3) / 3.0;
    }

    float percentage()
    {
        return (s1 + s2 + s3) / 300.0 * 100;
    }
};

int main()
{
    Student s1, s2, s3;

    cout << "\nStudent 1" << endl;
    s1.readMarks();

    cout << "\nStudent 2" << endl;
    s2.readMarks();

    cout << "\nStudent 3" << endl;
    s3.readMarks();

    cout << "\nStudent 1 Result";
    cout << "\nAverage = " << s1.average();
    cout << "\nPercentage = " << s1.percentage() << "%";

    cout << "\n\nStudent 2 Result";
    cout << "\nAverage = " << s2.average();
    cout << "\nPercentage = " << s2.percentage() << "%";

    cout << "\n\nStudent 3 Result";
    cout << "\nAverage = " << s3.average();
    cout << "\nPercentage = " << s3.percentage() << "%";

    return 0;
}




