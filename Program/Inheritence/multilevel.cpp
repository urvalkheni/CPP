#include<iostream>
using namespace std;
class Student{
    protected:
    int roll_num;
    public:
    void set_num(int);
    void get_num(void);
};
void Student :: set_num(int r){
    roll_num = r;
}
void Student :: get_num(){
    cout<<"The Roll Nomber of Student is :: "<<roll_num<<endl;
}
class Exam : public Student{
        protected :
        float maths,physics;
        public:
        void set_marks(float,float);
        void get_makrs();
};
void Exam :: set_marks(float m,float p){
    maths = m;
    physics = p;
}
void Exam :: get_makrs(){
    cout<<"The Marks obtain in Maths are :: "<<maths<<endl;
    cout<<"The Marks obtain in Physics are :: "<<physics<<endl;
}
class Result : public Exam{
    float percentage;
    public:
    void display();
};
void Result :: display(){
    cout<<"The percentage is :: "<<(maths+physics)/2.0<<"%"<<endl;
}
int main(){
    /*
    Here We make Student which have roll_num
    than we make Exam which have maths and physics
    than we make Result which have percentage
    Result Derived from ---> Exam
    Exam Derived from ---> Student

    so multilevel inheritance looks like
    Student ---> Exam ---> Result
    */
    Result Urval;
    Urval.set_num(55);
    Urval.get_num();
    Urval.set_marks(96,95);
    Urval.get_makrs();
    Urval.display();

    return 0;
}