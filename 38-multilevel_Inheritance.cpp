#include<iostream>
using namespace std;

class student{
    protected:
        int roll_number;
    public:
        void set_rollNumber(int);
        void get_rollNumber();
};

void student :: set_rollNumber(int v1){
    roll_number=v1;
}

void student :: get_rollNumber(){
    cout<<"The roll number is: "<<roll_number<<endl;
}

class exam : public student{
    protected:
        float math;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks();
};

void exam :: set_marks(float v2,float v3){
    math = v2;
    physics = v3;
}

void exam :: get_marks(){
    cout<<"Marks obtained in maths: "<<math<<" and physics: "<<physics<<endl;
}

class result : public exam{
    protected:
        float percentage;
    public:
        void display(){

            cout<<"Percentage obtained by the student is: "<<(math+physics)/2<<endl;
        }
};

int main(){
    result dipak;
    dipak.set_rollNumber(10);
    dipak.set_marks(40,60);
    dipak.get_rollNumber();
    dipak.get_marks();
    dipak.display();
return 0;
}