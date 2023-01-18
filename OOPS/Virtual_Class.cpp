// Virtual Base class Code
#include <iostream>
using namespace std;
class students
{
private:
    int roll_no;

public:
    void set_no(int a)
    {
        roll_no = a;
    }
    void print_no()
    {
        cout << "your roll number is " << roll_no << endl;
    }
};

// Test class
class test : virtual public students
{
protected:
    float maths, physics, computer;

public:
    void set_marks(float m1, float m2, float m3)
    {
        maths = m1;
        physics = m2;
        computer = m3;
    }

    void get_marks(void)
    {
        cout << "Marks obtained are\n"
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl
             << "Computer: " << computer << endl;
    }
};

// sports class
class sports : virtual public students
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void get_score(void)
    {
        cout<<"Sports Score: "<<score;
    }
};
//deriving the virtual class from (test) & (sports)
class result : public test, public sports
{
    float Total;
    public:
        void display(void)
        {
            Total = maths + physics + computer;
        
            print_no();
            get_marks();
            get_score();
            cout<<"\nTotal score is: "<<Total<<endl;
       

        }
};
int main()
{
    result print;
    print.set_no(4203);
    print.set_marks(70.5, 75.8, 95.99 );
    print.set_score(7.5);
    print.display();

    return 0;
}