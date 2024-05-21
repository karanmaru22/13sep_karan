#include <iostream>
#include <string>
using namespace std;

class LectureDetails {
public:
    string lecturerName;
    string subjectName;
    string courseName;
    int numLectures;

    void assignDetails(string lecturer, string subject, string course, int lectures) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numLectures = lectures;
    }

    void displayDetails() {
        cout << "Lecturer: " << lecturerName << endl;
        cout << "Subject: " << subjectName << endl;
        cout << "Course: " << courseName << endl;
        cout << "Number of Lectures: " << numLectures << endl;
        cout << endl;
    }
};

int main() {
    LectureDetails lecture[5];

    lecture[0].assignDetails("Dr. Smith", "Computer Science", "Introduction to Programming", 10);
    lecture[1].assignDetails("Prof. Johnson", "Mathematics", "Calculus", 12);
    lecture[2].assignDetails("Dr. Lee", "Physics", "Mechanics", 8);
    lecture[3].assignDetails("Prof. Brown", "History", "World History", 15);
    lecture[4].assignDetails("Dr. White", "Biology", "Cell Biology", 9);

    for (int i = 0; i < 5; ++i) {
        lecture[i].displayDetails();
    }

    return 0;
}