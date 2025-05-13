#include<iostream>
#include<cstring>
using namespace std;
class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r){
        title = s;
        rating = r;
    }
    virtual void display()=0; //do-nothing function --> pure virtual function
};
class CWHVedio : public CWH{
    float vedioLength;
    public:
    CWHVedio(string s,float r,float vl) : CWH(s,r){
        vedioLength = vl;
    }
    void display(){
        cout<<"This is an amazing vedio with title :: "<<title<<endl;
        cout<<"This vedio has rating :: "<<rating<<endl;
        cout<<"This vedio length is :: "<<vedioLength<<" minutes"<<endl;
    }
};
class CWHText : public CWH{
    int words;
    public:
    CWHText(string s,float r,int wc) : CWH(s,r){
        words = wc;
    }
      void display(){
        cout<<"This is an amazing text tutorial with title :: "<<title<<endl;
        cout<<"This text tutorial has rating :: "<<rating<<endl;
        cout<<"Number of word in this :: "<<words<<endl;
    }
};
int main(){
    string title;
    float rating,vlen;
    int word;
    //for codewithharry vedio
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVedio djvedio(title,rating,vlen);
    // djvedio.display();
    //for codewithharry text
    title = "Django Text";
    word = 433;
    rating = 4.19;
    CWHText djText(title,rating,word);
    CWHText *djTextpointer = &djText;
    // djTextpointer->display();

     title = "C++ tutorial";
    vlen = 7.86;
    rating = 4.90;
    CWHVedio cppvedio(title,rating,vlen);

    title = "C++ Text";
    word = 699;
    rating = 4.20;
    CWHText cppText(title,rating,word);
    
    CWH* tuts[4];
    tuts[0] = &djvedio;
    tuts[1] = &djText; 
    tuts[2] = &cppvedio;
    tuts[3] = &cppText; 
     
    cout<<endl;
    tuts[0]->display();
    cout<<endl;
    tuts[1]->display();
    cout<<endl;
    tuts[2]->display();
    cout<<endl;
    tuts[3]->display();
    cout<<endl;
    return 0;
}
 