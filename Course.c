#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Course
{
private:
    vector<Course> courses;
    string course_name;
    string course_code;
    int course_hours;
    vector<string> prerequisites;
    Professor professor;
    vector<Student> students;

public:
    Course()
    {
        course_name = "";
        course_code = "";
        course_hours = 0;
    }

    Course(string c_name, string c_code, int c_hours, const vector<string> &c_prerequisites,
           const Professor &c_professor, const vector<Student> &c_students)
    {
        course_name = c_name;
        course_code = c_code;
        course_hours = c_hours;
        prerequisites = c_prerequisites;
        professor = c_professor;
        students = c_students;
    }

    void set_course_name(string c_name)
    {
        course_name = c_name;
    }

    void set_course_code(string c_code)
    {
        course_code = c_code;
    }

    void set_course_hours(int c_hours)
    {
        course_hours = c_hours;
    }

    void set_prerequisites(const vector<string> &c_prerequisites)
    {
        prerequisites = c_prerequisites;
    }

    void set_professor(const Professor &c_professor)
    {
        professor = c_professor;
    }

    void set_students(const vector<Student> &c_students)
    {
        students = c_students;
    }

    string get_course_name() const
    {
        return course_name;
    }

    string get_course_code() const
    {
        return course_code;
    }

    int get_course_hours() const
    {
        return course_hours;
    }

    const vector<string> &get_prerequisites() const
    {
        return prerequisites;
    }

    const Professor &get_professor() const
    {
        return professor;
    }

    const vector<Student> &get_students() const
    {
        return students;
    }
    void addCourseToVector(const string &course_name, const string &course_code, int course_hours, vector<string> &c_prerequisites,
                           const Professor &c_professor, const vector<Student> &c_students)
    {
        courses.push_back(Course(course_name, course_code, course_hours, prerequisites, professor, students));
    }

    bool UpdateCourse(const string &course_name, const string &course_code, int course_hours)
    {

        for (Course courses : course_name)
        {
            if (courses.getCourse_code() == course_code)
            {
                courses.setCourse_hours(course_hours);
                return 0;
            }
            return true;
        }
        void removeCourse(vector<Course> & course_name, const string &course_code)
        {
            course_name.erase(remove_if(course_name.begin(), course_name.end(),
                                        [&course_code](const Course &courses)
                                        {
                                            return courses.getCourse_code() == course_code;
                                        }),
                              course_name.end());
        }
    };

    class Uni
    {
    private:
        vector<Course> courses;

        string name;
        int age;
        static Uni *instancePtr;
        Uni() {}

    public:
        Uni(const Uni &obj) = delete;
        static Uni *getInstance()
        {
            if (instancePtr == NULL)
            {
                instancePtr = new Uni();
                return instancePtr;
            }
            else
            {
                return instancePtr;
            }
        }

        void setName(string name)
        {
            this->name = name;
        }
        void setAge(int age)
        {
            this->age = age;
        }

        string getName()
        {
            return name;
        }

        int getAge()
        {
            return age;
        }

        void print()
        {
            cout << "Name: " << name << ", age: " << age << endl;
        }
    };

    int main()
{
    // Create a sample professor and student
    Professor sampleProfessor("John Doe", "Computer Science");
    Student sampleStudent1("Alice Smith", "12345");
    Student sampleStudent2("Bob Johnson", "67890");

    // Create a course instance
    vector<Student> studentList = {sampleStudent1, sampleStudent2};
    vector<string> prerequisites = {"Intro to Programming"};
    Course introToCS("Introduction to Computer Science", "CS101", 3, prerequisites, sampleProfessor, studentList);

    // Add the course to the vector of courses
    vector<Course> courseList;
    courseList.push_back(introToCS);

    // Update course hours
    for (Course &course : courseList)
    {
        if (course.get_course_code() == "CS101")
        {
            course.set_course_hours(4);
        }
    }

    // Print course information
    for (const Course &course : courseList)
    {
        cout << "Course Name: " << course.get_course_name() << endl;
        cout << "Course Code: " << course.get_course_code() << endl;
        cout << "Course Hours: " << course.get_course_hours() << endl;
        cout << "Prerequisites: ";
        for (const string &prereq : course.get_prerequisites())
        {
            cout << prereq << " ";
        }
        cout << endl;

        const Professor &professor = course.get_professor();
        cout << "Professor: " << professor.get_name() << " - " << professor.get_department() << endl;

        cout << "Students: ";
        for (const Student &student : course.get_students())
        {
            cout << student.get_name() << " ";
        }
        cout << endl;
    }

    // Create a Uni instance and set its attributes
    Uni *university = Uni::getInstance();
    university->setName("My University");
    university->setAge(50);

    // Print university information
    university->print();

    return 0;
}

