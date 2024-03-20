#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "PROBLEM 1\n";
    int x1=0;
    cin>>x1;
    if (x1<0){
        cout<<"Negative";
    } else{
        cout<<"Positive";
    };
   

    cout << "PROBLEM 2\n";

    int x2=0;
    int rem=0;
    cin>>x2;
    rem=x2%2;
    if (x2>0 && rem==0){
        cout<<"The number is positive and even";
    } else if(x2>0&&rem!=0){
        cout<<"The number is positive and odd";
    } else if(x2<0&&rem==0){
        cout <<"The number is negative and even";
    }
    else{
        cout<<"The number is negative and odd";
    };
    
    cout << "PROBLEM 3\n";
    double num1=0;
    double num2=0;
    double num3=0;
    cin>>num1>>num2>>num3;
    if (num1>num2&&num1>num3){
        cout<<num1<<" is the largest"<<endl;
    } else if(num2>num3){
        cout<<num2<<" is the largest"<<endl;
    } else{
        cout <<num3<<" is the largest"<<endl;
    };
    
    cout << "PROBLEM 4\n";

    int num41=0;
    int num42=0;
    cin>>num41>>num42;
    if (num41%num42==0){
        cout<<num41<<" is divisible by "<<num42<<endl;
    }else{
        cout<<num41<<" is not divisible by "<<num42<<endl;
    };
    
    cout << "PROBLEM 5\n";
    cout << "PROBLEM 6\n";
    cout << "PROBLEM 7\n";
    cout << "PROBLEM 8\n";
    cout << "PROBLEM 9\n";
    cout << "PROBLEM 10\n";
    cout << "PROBLEM 11\n";
    cout << "PROBLEM 12\n";
    cout << "PROBLEM 13\n";
    cout << "PROBLEM 14\n";
    cout << "PROBLEM 15\n";
    cout << "PROBLEM 16\n";
    cout << "PROBLEM 17\n";
    cout << "PROBLEM 18\n";
    cout << "PROBLEM 19\n";
    cout << "PROBLEM 20\n";
    cout << "PROBLEM 21\n";
    cout << "PROBLEM 22\n";
    return 0;
    
    
        




}
