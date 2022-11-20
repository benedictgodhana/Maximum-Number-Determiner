#include <iostream>
 
using namespace std;
 
int main(){
 
   int num1, num2;
 
    //Reading two numbers from user
    cout<<"Enter First number: ";
    cin>>num1;
    cout<<"Enter Second number: ";
    cin>>num2;
 
    //Condition to check maximum number
    switch(num1 > num2)
    {
        case 0: cout<<"The Maximum number is:"<<num2<<endl;
            break;
 
         case 1: cout<<"The Maximum number is:"<<num1<<endl;
            break;
    }
 
    return 0;
 
}