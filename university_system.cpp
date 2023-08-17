 #include <iostream>
#include<vector>

using namespace std;

class Person{
private:
    string name;
    string gender;
    int age;
    int id;


public:
        // Default constructor
    Person() {
        name = "";
        gender = "";
        age = 0;
        id = 0;
    }

    // Parameterized constructor
    Person(string Name, string Gender, int Age, int ID) {
        name = Name;
        gender = Gender;
        age = Age;
        id = ID;
    }

    setName(string Name){
        name=Name;
    }
    setGender(string Gender){
        gender=Gender;
    }
    setID(int ID){
        id=ID;
    }
    setAge(int Age){
        age=Age;
    }
string getName(){
    return name;
    }
string getGender(){
    return gender;
    }
int getAge(){
    return age;
    }
int getID(){
    return id;
    }

};

class Professor {
private:
    string name;
    string department;
    double salary;
    string degree;

public:
    // Default constructor
    Professor() {
        name = "";
        department = "";
        salary = 0.0;
        degree = "";
    }

    // Parameterized constructor
    Professor(string Name, string Department, double Salary, string Degree) {
        name = Name;
        department = Department;
        salary = Salary;
        degree = Degree;
    }

    void setName(string Name) {
        name = Name;
    }

    void setDepartment(string Department) {
        department = Department;
    }

    void setSalary(double Salary) {
        salary = Salary;
    }

    void setDegree(string Degree) {
        degree = Degree;
    }

    string getName() {
        return name;
    }

    string getDepartment() {
        return department;
    }

    double getSalary() {
        return salary;
    }

    string getDegree() {
        return degree;
    }
};





int main() {
    // Using the default constructor
    Person defaultPerson;
    cout << "Default Person's Name: " << defaultPerson.getName() << endl;
    cout << "Default Person's Gender: " << defaultPerson.getGender() << endl;
    cout << "Default Person's Age: " << defaultPerson.getAge() << endl;
    cout << "Default Person's ID: " << defaultPerson.getID() << endl;

    // Using the parameterized constructor
    Person person1("Ahmed", "Female", 25, 12356789);
    cout << "Person 1's Name: " << person1.getName() << endl;
    cout << "Person 1's Gender: " << person1.getGender() << endl;
    cout << "Person 1's Age: " << person1.getAge() << endl;
    cout << "Person 1's ID: " << person1.getID() << endl;
    // Using the default constructor
    Professor defaultProfessor;
    cout << "Default Professor's Name: " << defaultProfessor.getName() << endl;
    cout << "Default Professor's Department: " << defaultProfessor.getDepartment() << endl;
    cout << "Default Professor's Salary: " << defaultProfessor.getSalary() << endl;
    cout << "Default Professor's Degree: " << defaultProfessor.getDegree() << endl;

    // Using the parameterized constructor
    Professor professor1("Dr.Mohamed", "Computer Science", 80000.0, "Ph.D.");
    cout << "Professor 1's Name: " << professor1.getName() << endl;
    cout << "Professor 1's Department: " << professor1.getDepartment() << endl;
    cout << "Professor 1's Salary: " << professor1.getSalary() << endl;
    cout << "Professor 1's Degree: " << professor1.getDegree() << endl;

    return 0;
    return 0;
}
