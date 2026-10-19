//Implementation of polymorphism
#include<iostream>
using namespace std;
//base class
class Employee{
    public:
    double salary;

    Employee (double s){
        salary = s;
    }

    virtual void calculateBonus(){
        cout<<"Employee bonus salary."<<endl;
    }
};
//first derived class
class PermanentEmployee : public Employee{
    public:
    PermanentEmployee(double s) : Employee(s){}

    void calculateBonus() override{
        cout<<"Permanent Employee bonus salary: "<<salary * 0.1<<endl;
    }
};
//second derived class
class ContractEmployee : public Employee{
    public:
    ContractEmployee(double s) : Employee(s){}

    void calculateBonus() override{
        cout<<"Contract Employee bonus salary: "<<salary * 0.05<<endl;
    }
};

int main(){
    PermanentEmployee emp1(5000);
    ContractEmployee emp2(3000);
    //base class pointers pointing to derived class objects
    Employee* ptr1;
    Employee* ptr2;
    //assigning the addresses of derived class objects to base class pointers
    ptr1 = &emp1;
    ptr2 = &emp2;
    //calling the overridden functions using base class pointers
    ptr1->calculateBonus();
    ptr2->calculateBonus();

    return 0;
}