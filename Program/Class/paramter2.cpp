#include<iostream>
#include<cmath>
using namespace std;
class Point{
    int x,y;
    public:
        Point(int a,int b){
            x = a;
            y = b;
        }
        void displayPoint(void){
            cout<<"Your point is :: "<<"("<<x<<","<<y<<")"<<endl;
        }
        friend void distance(Point p,Point q);
};
void distance(Point p,Point q){
    int dx = p.x - q.x;
    int dy = p.y - q.y;
    cout<<"The Distance Between two point is :: "<<sqrt((dx*dx) + (dy*dy))<<endl;
}
int main(){
    Point p1(2,2);
    p1.displayPoint();
    Point p2(1,1);
    p2.displayPoint();
    distance(p1,p2);

    return 0;
}