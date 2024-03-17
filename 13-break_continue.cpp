#include<iostream>
using namespace std;

//**************BREAK*******************
// int main(){
//     for (int i = 0; i < 10; i++)
//     {
//         cout<<i<<endl;
//         if (i==5)   
//         {
//             break; //here we use brreak statement to terminate the loop 
//         }
        
//     }
    
// return 0;
// }



//************************CONTINUE********************
int main(){
    for (int i = 0; i < 10; i++)
    {
        
        if (i==5)
        {
            continue; //here we use this continue statement to stope this perticular itaration
        }
        cout<<i<<endl;
        
    }
    
    return 0;
}