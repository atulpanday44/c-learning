#include<iostream>
using namespace std;
int main()
{
    //cout<<"this is control tutorial 9";
   int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
   /* if(age<18){
        cout<<"you can not come to my party"<<endl;
    }
    else if(age<18){
    cout <<"you cannot come to my party"<<endl;
    }
    else if(age==18){
        cout<<"you are a kid and u will get a kid pass"<<endl;
    }
    
    else if(age<1){
        cout<<"you are not yet born"<<endl;
    }
    else{
        cout<<"you can come to my party"<<endl;
    }*/
    // switch case statement
    

  switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 22:
        cout<<"you are 22"<<endl;
        break;
    case 2:
        cout<<"you are 2"<<endl;
        break;

    default:
        cout<<"No special cases";
        break;
    }
    
 return 0;
}