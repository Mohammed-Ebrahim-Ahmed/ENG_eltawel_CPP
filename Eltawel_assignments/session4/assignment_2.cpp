#include <iostream>

class Student {
    public:
        Student(std::string n, char d, int R, int deg): name{n},Degree{d},RollNum{R},mark{deg}{}
        char CalGrade()
        {
            if(mark >85)
            {
                Degree = 'A';
            }
            else if(mark > 75)
            {
                Degree = 'B';
            }
            else if(mark > 60)
            {
                Degree = 'C';
            }
            else if(mark > 50)
            {
                Degree = 'D';
            }
            else
            {
                Degree = 'F';
            }

            return Degree;
        }

        void Display()
        {
            std::cout<<name<<" "<<Degree<<" "<<RollNum<<" "<<mark<<std::endl;
        }

    private:
        std::string name;
        char Degree;
        int RollNum;
        int mark;
};

int main()
{   
    Student s1{"mohammed",'A',77, 29};
    char deg = s1.CalGrade();
    s1.Display();
    return 0;
}