#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        voi d initCounter(void){ counter =0;}
        void getPrice(void);
        void displayPrice(void);
     
};
void shop ::getPrice(void){
    cout<<"Enter Id of your item "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Id of your item"<<endl;
    cin>>itemId[counter];
    counter ++;

}
void shop :: displayPrice(void){
    for(int i = 0; i<counter;i++)
    {
        cout<<"The price of item with Id"<<itemId[i]<<"is"<<itemPrice[i]<<endl;

    }
}
int main()
{
    shop dukaan ;
    dukaan.initcounter();
    dukaan.setPrice(); 

    
    
    return 0;
}