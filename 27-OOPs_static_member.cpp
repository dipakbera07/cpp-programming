 #include<iostream>
using namespace std;

class employee{
    int id;
    static int count;  //here we use static member to continue the coundown within a same class but different. 
    public:
        void setId(void){
            cout<<"Employee Id of employee "<<count +1<<endl;
            cin>>id;
            count++;
        }
        void displayId(void){
            cout<<"The id of the employee is : "<<id<<endl;
        }
        static void getCount(void){       //here we create a static member function in cpp.which can only access static member.
            cout<<"The value of count is: "<<count<<endl;
        }
};

int employee :: count; //default value of static member is 0.

int main(){
    employee dipak,priyam,asamannya;
    dipak.setId();
    dipak.displayId();
    employee::getCount();

    priyam.setId();
    priyam.displayId();
    employee::getCount();

    asamannya.setId();
    asamannya.displayId();
    employee::getCount();
    return 0;
}