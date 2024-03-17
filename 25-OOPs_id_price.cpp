#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initcounter(void){
            counter = 0;
        }
        void setPrice(void);
        void getPrice(void);
};

void shop :: setPrice(void){
    cout<<"Enter Id of your item no  "<<counter +1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of your item."<<endl;
    cin>>itemPrice[counter];
    counter ++;
}

void shop :: getPrice(void){
    for(int i=0; i<counter;i++){
        cout<<"The item of Id no."<<itemId[i]<<", price is "<<itemPrice[i]<<endl;
    }
}

int main(){
    shop bisu;
    bisu.initcounter();
    bisu.setPrice();
    bisu.setPrice();
    bisu.setPrice();
    bisu.getPrice();

    return 0;
}