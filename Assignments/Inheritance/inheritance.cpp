#include<iostream>
using namespace std;
// Base class
class Student{
    public:
    string name;
    int age;
    Student(string n, int a)
    {
        name = n;
        age = a;
    }
    void Studentdisplay(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
// First derived class
class UniversityStudent : public Student{
    private:
    string yearofStudy;
    string course;
    string studentNumber;

    public:
    UniversityStudent (string n, int a, string y, string c, string s) : Student(n, a){
        yearofStudy = y;
        course = c;
        studentNumber = s;
    }
    void Unidisplay(){
        cout<<"Year of Study: "<<yearofStudy<<endl;
        cout<<"Course: "<<course<<endl;
        cout<<"Student Number: "<<studentNumber<<endl<<endl;
    }
};
// Second derived class
class HighschoolStudent : public Student{
    private:
    string currentclass;
    string indexNumber;

    public:
    HighschoolStudent (string n, int a, string c, string i) : Student(n, a){
        currentclass = c;
        indexNumber = i;
    }
    void Shcdisplay(){
        cout<<"Current Class: "<<currentclass<<endl;
        cout<<"Index Number: "<<indexNumber<<endl<<endl;
    }
};

int main(){
    UniversityStudent Ustd1("Abiyo", 21, "Year 2", "Electrical Engineering", "25/U/0820");
    Ustd1.Studentdisplay();
    Ustd1.Unidisplay();

    HighschoolStudent Hstd1("Bruce", 19, "Form 6", "U1085/502");
    Hstd1.Studentdisplay();
    Hstd1.Shcdisplay();
    
    return 0;
}