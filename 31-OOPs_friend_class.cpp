#include<iostream>
using namespace std;

class complex; //forward declareation
class calculator{
    public:
        int add(int a,int b){
            return (a+b);
        }
        //here we dont declare function defination and also parameters . it defined later in this code.if we declare it here it throws an error
        int sumData(complex , complex ); 
        int sum2Data(complex , complex ); 
};

class complex{
    int a,b;
    public:
        void setData(int v1,int v2){
            a=v1;
            b=v2;
        }
        //here we declare the friend function individually
        friend int calculator :: sumData(complex o1,complex o2);
        friend int calculator :: sum2Data(complex o1,complex o2); 

        //aliter: Declaring the the entire class as friend.
        friend class calculator; //instead of declaring every function individually here we use friend class.
        
        void displayData(){
            cout<<"Tour number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
 
int calculator ::  sumData(complex o1,complex o2){
    return (o1.a+o2.a);
}
int calculator ::  sum2Data(complex o1,complex o2){
    return (o1.b+o2.b);
}
int main(){
    complex c1,c2;
    c1.setData(1,4);
    c2.setData(2,8);

    calculator cal;
    int res=cal.sumData(c1,c2);
    cout<<"The sum is "<<res<<endl;;
    int res2=cal.sum2Data(c1,c2);
    cout<<"The sum is "<<res2;
    
    return 0;
}