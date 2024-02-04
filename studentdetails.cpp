//task 2
//using structures

#include <iostream>
#include <cmath>

using namespace std;

struct student {
    string regno;
    string name;
    int Age;
    string registered[5];
    string course;
    string course_id;
    int unitmarks[5];
};

void getData(student &s) {
    cout << "Reg no: ";
    cin >> s.regno;
    cout << "Student name: ";
    cin >> s.name;
    cout << "Student age: ";
    cin >> s.Age;
    cout << "Course: ";
    cin >> s.course;
    cout << "Course id: ";
    cin >> s.course_id;
    cout << "Number of courses: ";
    int num_Course;
    cin >> num_Course;
    for (int i = 0; i < num_Course; i++) {
        cout << "Enter unit " << i + 1 << " name: ";
        cin >> s.registered[i]; 
        cout << "Enter mark " << i + 1 << ": ";
        cin >> s.unitmarks[i];
    }
}

float calculateAverage(student &s) {
    int sum = 0;
    float count = 0;
    for (int i = 0; i < 5; i++) {
        if (!s.registered[i].empty()) {
            sum += s.unitmarks[i];
            count++;
        }
    }
    if (count > 0) {
        return static_cast<float>(sum) / count;
    } else {
        return 0.0; 
    }
}

string computeGrade(float avg) {
    if (avg >= 70.0) {
        return "A";
    } else if (avg >= 60.0) {
        return "B";
    } else if (avg >= 50.0) {
        return "C";
    } else if (avg >= 40.0) {
        return "D";
    } else {
        return "E";
    }
}

int main() {
    student students[40];

    for (int i = 0; i < 40; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        getData(students[i]);
    }

    for (int i = 0; i < 40; i++) {
        cout << "Details for student " << i + 1 << ":\n";
        cout << "Reg no: " << students[i].regno << "\n";
        cout << "Student name: " << students[i].name << "\n";
        cout << "Student age: " << students[i].Age << "\n";
        cout << "Course: " << students[i].course << "\n";
        cout << "Course id: " << students[i].course_id << "\n";

        cout << "Adding marks for student " << i + 1 << ":\n";
        getData(students[i]);


        float avg = calculateAverage(students[i]);
        string grade = computeGrade(avg);

        cout << "Average marks: " << avg << "\n";
        cout << "Grade: " << grade << "\n";
    }

    return 0;
}