#include<iostream>
using namespace std;
// Base class
class Person{
    public:
    string name;
    int age;

    void displayPerson(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
// Derived class
class Student : public Person{
    private:
    string studentNumber;

    public:
    void setStudentNumber(string s){
        studentNumber = s;
    }
    void displayStudent(){
        cout<<"Student Number: "<<studentNumber<<endl;
    }
};
// Derived class from Student class
class EngineeringStudent : public Student{
    private:
    string course;

    public:
    void setEngineeringCourse(string c){
        course = c;
    }
    void displayEngineering(){
        cout<<"Course: "<<course<<endl;
    }
};

int main(){
    EngineeringStudent engStudent;
    engStudent.name = "Abiyo Bruce";
    engStudent.age = 21;
    engStudent.setStudentNumber("25/U/0820");
    engStudent.setEngineeringCourse("Bsc. Electrical Engineering");

    engStudent.displayPerson();
    engStudent.displayStudent();
    engStudent.displayEngineering();

    return 0;
}