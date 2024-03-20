#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "PROBLEM 1\n";
    int intNumber = 23;
    float floatNumber = 3.14;
    double doubleNumber = 45.1234;
    bool boolean = true;
    char charName = 'A';
    cout << "Value of Integer is " << intNumber << "."<<" Size is " << sizeof(intNumber) << endl;
    cout << "Value of Float is " << floatNumber << "."<<" Size is " << sizeof(floatNumber) << endl;
    cout << "Value of Double is " << doubleNumber << "."<<" Size is " << sizeof(doubleNumber) << endl;
    cout << "Value of Char is " << charName << "."<<" Size is " << sizeof(charName) << endl;
    cout << "Value of Bool is " << boolean << "."<<" Size is " << sizeof(boolean) << endl;


    cout << "PROBLEM 2\n";
    string name = "Adxamjon Xamidullayev\n";
    string ID = "230223\n";
    string songname = "Ed Sheeran - Perfect\n";
    string moviename = "Interstellar\n";


    cout << name;
    cout << ID;
    cout << songname;
    cout << moviename;


    cout << "PROBLEM 3\n" ;


    cout << "\r\"I\'m standing\" on the edge of some crazy cliff." << endl;
    cout << "\rWhat I have to do, I have to catch everybody\\" << endl;
    cout << "\tif they start to over the cliff-I mean\\" << endl;
    cout << "\t\\if they\'re running and they don\'t look " << endl;
    cout << "\t where they\'re going I have to come out" << endl;
    cout << "\t from somewhere and  \tcatch them. " << endl;


    cout << "PROBLEM 4\n";
    int a = 189;
    char b = 'B';
    double Float = (a/3.0);
    int Decimal = b;
    float Floatsum = (a+b)/5;
    char  Character = b + a/10 -1;
    cout << Float <<" "<< Decimal <<" "<< Floatsum <<" " << Character << endl;

    cout << "PROBLEM 5\n";
    int x = 12;
    int y = 38;
    cout << "Sum="<< x+y << endl;
    cout << "Product="<< x*y << endl;


    cout << "PROBLEM 8\n";
    double diameter = 6.9;
    cout << "Area: " << 4 * 3.14 * (6.9 / 2) * ( 6.9/ 2) << endl;

    cout << "PROBLEM 9\n";
    double v0 = 0;
    double v1 = 0;
    double t = 0;
    double acc  = 0;
    cin >> v0 >> v1>> t;
    acc = (v1-v0)/t;
    cout << acc<<endl;


    cout << "PROBLEM 10\n";
    float dis,eff,price;
    cin>> dis>>eff>>price;
    dis=900.5;
    eff=25.5;
    price=3.55;
    cout<<"The cost of driving is $"<<(dis/eff)*price<<endl;

    cout << "PROBLEM 11\n";
    double w = 1.13e3;
    double q = 411e-4;
    cout << w << " "<< q << endl;



    cout << "PROBLEM 13\n";
    double s = 0;
    cin >> s;
    cout << " The area of the hexagon is "<< (3*1.73)/2*(s*s) <<endl;


    cout << "PROBLEM 14\n";
    int num=0;
    cin>>num;
    num++;
    num=num*3;
    num=num-14;
    num=num/4;
    num--;
    num=num%9;
    cout<<num<<endl;



    cout << "PROBLEM 15\n";
    char myChar = 'A';

    // Add the necessary offsets to each character to get "HELLO!"
    myChar += 7; // 'H'
    std::cout << myChar;

    myChar -= 3; // 'E'
    std::cout << myChar;

    myChar += 7; // 'L'
    std::cout << myChar;

    // 'L'
    std::cout << myChar;

    myChar += 3; // 'O'
    std::cout << myChar;

    std::cout << "!\n";

    cout<<"Problem 16\n";
    float x1=17;
    float y1=1;
    float res=0;
    res=(x1+(x1++))/(((x1++)/(y1++)/(y1++)/(y1++))*(y1++));
    cout<<res<<endl;


    cout <<"Problem 17"<<endl;
    double number1=0;
    double number2=0;
    cin>>number1>>number2;
    if (number1==number2){
        cout <<1<<endl;
    } else {
        cout << 0<< endl;
    };

    cout <<"Problem 18"<<endl;
    double var1=0;
    double var2=0;
    cin>>var1>>var2;
    if ((var1<140)&&(var1<var2)){
        cout<<1<<endl;
    } else{
        cout<<0<<endl;
    };






    return 0;




}

