#include<iostream>
using namespace std;

    // pass by reference
    void incMoney(int *moneyPtr){
      //  money=2*money;
       // cout<<<<moneyPtr<<endl;
        //cout<<(*moneyPtr)=2*moneyPtr;

    }
    int main(){
        int Money=10;
        incMoney(money);
        cout<<"Main :"<<money<<endl;
        
    //int x=10;
    //int &y=x;
    //cout<<x<<endl;
    //cout<<y<<endl;
// PASS BY REFERENCE
void incMoney(int *moneyPtr){
        myMoney=2*myMoney;
        cout<<"My Money"<<money<<endl;
        return 0;

}
    }