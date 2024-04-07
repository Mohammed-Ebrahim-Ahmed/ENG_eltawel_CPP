#include<iostream>

class Person {
    public:
        std::string getName()
        {
            return name;
        }

    private:
        std::string name;
};

class Student: public Person {
    public:
        Student() = default;
        Student(int s) : studentID(s){}
        int getStudentID()
        {
            return studentID;
        }
    private:
        int studentID;
};

class Teacher: public Person {
    public:
        Teacher() = default;
        Teacher(int t) : teacherID{t}{}
        int getTeacherID()
        {
            return teacherID;
        }
    private:
        int teacherID;
};

class TeachingAssistant : public Student, public Teacher{
    public:
        TeachingAssistant(std::string c) : course{c}{} 
        std::string getCourse()
        {
            return course;
        }
    private:
        std::string course;
};