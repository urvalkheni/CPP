#include<iostream>
using namespace std;
class Student{
    protected :
    int id;
    public:
    void setId(int a){
        id = a;
    }
    void printId(){
        cout<<"The Id is :: "<<id<<endl;
    }
};
class Test : virtual public Student{
    protected :
    float maths,physics;
    public :
    void setMarks(float m1,float p1){
        maths = m1;
        physics = p1;
    }
    void printMarks(){
        cout<<"Your Result is :: "<<endl;
        cout<<"The Marks of Maths is :: "<<maths<<endl;
        cout<<"The Makrs of Physics is :: "<<physics<<endl;
    }
};
class Sports : virtual public Student{
    protected:
    float score;
    public:
    void setScore(float s){
        score = s;
    }
    void printScore(){
        cout<<"The Score in sports is :: "<<score<<endl;
    }
};
class Result : public Test,public Sports{
    private :
    float total;
    public:
        void display(){
            total = maths + physics + score;
            printId();
            printMarks();
            printScore();
            cout<<"Your total score is :: "<<(total/3.0)<<endl;
        }
};
int main(){
    Result Urval;
    Urval.setId(55);
    Urval.setMarks(95,98);
    Urval.setScore(85);
    Urval.display();
    return 0;
}