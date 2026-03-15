

/*
Simple C++ program using OOP

Concepts used:
- Classes
- Constructors
- Friend Functions
- Encapsulation
*/


#include<iostream>
using namespace std;

class Student
{
    private:
        string name;
        int mark;

    public:
        // constructor
        Student(string n, int m)
        {
            name = n;
            mark = m;
        }
        // friend function
        friend void sum(Student ob1, Student ob2,Student ob3 );
        // checkMarks function
        void checkMarks(Student ob1, Student ob2,Student ob3)
        {
            if(ob1.mark > ob2.mark && ob1.mark > ob3.mark)
            {
                cout << ob1.name << " Congratulation your are the first\n";
            }
            else if(ob2.mark > ob1.mark && ob2.mark > ob3.mark)
            {
                cout << ob2.name << " Congratulation your are the first\n";

            }
             else if(ob3.mark > ob1.mark && ob3.mark > ob2.mark)
            {
                cout << ob3.name << " Congratulation your are the first\n";

            }
            else
            {
                cout << "all the marks are equal \n ";
            }
        }

};
void sum(Student ob1, Student ob2,Student ob3 )
{
    int sum = ob1.mark + ob2.mark +ob3.mark;
    cout << "the sum of the marks = " << sum << endl;
}

int main()
{
    Student ob1("Ahmed", 75);
    Student ob2("Ali", 90);
    Student ob3("Abdul", 95);

    sum(ob1 , ob2, ob3);
    ob1.checkMarks(ob1 , ob2, ob3);


    return 0;
}
