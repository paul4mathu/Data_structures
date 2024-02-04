//task 3
// using classes

#include <iostream>
#include <string>

class Student {
private:
    std::string regno;
    std::string name;
    int age;
    std::string registered[5];
    std::string course;
    std::string course_id;
    int unitmarks[5];

public:
    void getData() {
        std::cout << "Reg no: ";
        std::cin >> regno;
        std::cout << "Student name: ";
        std::cin >> name;
        std::cout << "Student age: ";
        std::cin >> age;
        std::cout << "Course: ";
        std::cin >> course;
        std::cout << "Course id: ";
        std::cin >> course_id;
        std::cout << "Number of courses: ";
        int num_Course;
        std::cin >> num_Course;
        for (int i = 0; i < num_Course; i++) {
            std::cout << "Enter unit " << i + 1 << " name: ";
            std::cin >> registered[i];
            std::cout << "Enter mark " << i + 1 << ": ";
            std::cin >> unitmarks[i];
        }
    }

    float calculateAverage() {
        int sum = 0;
        float count = 0;
        for (int i = 0; i < 5; i++) {
            if (!registered[i].empty()) {
                sum += unitmarks[i];
                count++;
            }
        }
        if (count > 0) {
            return static_cast<float>(sum) / count;
        } else {
            return 0.0;  
        }
    }

    std::string computeGrade(float avg) {
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

    void displayDetails() {
        std::cout << "\nDetails for student:\n";
        std::cout << "Reg no: " << regno << "\n";
        std::cout << "Student name: " << name << "\n";
        std::cout << "Student age: " << age << "\n";
        std::cout << "Course: " << course << "\n";
        std::cout << "Course id: " << course_id << "\n";
    }

    void addMarks() {
        std::cout << "Adding marks:\n";
        getData();
    }
};

int main() {
    Student students[40];

    for (int i = 0; i < 40; i++) {
        std::cout << "Enter details for student " << i + 1 << ":\n";
        students[i].getData();
    }

    for (int i = 0; i < 40; i++) {
        students[i].displayDetails();
        students[i].addMarks();

        
        float avg = students[i].calculateAverage();
        std::string grade = students[i].computeGrade(avg);

        std::cout << "Average marks: " << avg << "\n";
        std::cout << "Grade: " << grade << "\n";
    }

    return 0;
}
