 #include <iostream>
#include <string>
using namespace std;

class AcademicRecord {
protected:
    int rollno;
    float marks;

public:
    void readAcademic() {
        cout << "Enter Roll Number: ";
        cin >> rollno;
        cout << "Enter Academic Marks: ";
        cin >> marks;
    }
};

class SportRecord {
protected:
    string sportName;
    float sportScore;

public:
    void readSport() {
        cout << "Enter Sport Name: ";
        cin >> sportName;
        cout << "Enter Sport Score: ";
        cin >> sportScore;
    }
};

class Student : public AcademicRecord, public SportRecord {
public:
    void readDetails() {
        readAcademic();
        readSport();
    }

    void displayDetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Roll Number      : " << rollno << endl;
        cout << "Academic Marks   : " << marks << endl;
        cout << "Sport Name       : " << sportName << endl;
        cout << "Sports Score     : " << sportScore << endl;
    }

    void calculateOverallPerformance() {
        float overallScore = (marks + sportScore) / 2;
        cout << "Overall Performance Score: " << overallScore << endl;
    }
};

int main() {
    Student s;
    s.readDetails();
    s.displayDetails();
    s.calculateOverallPerformance();
    return 0;
}







