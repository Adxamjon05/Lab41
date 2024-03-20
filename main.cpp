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

    int year5=0;
    cin>>year5;
    if (year5%4==0){
        if (year5%100==0 && year5%400==0){
            cout<<year5<<" is a leap year"<<endl;
        }else{
            cout<<year5<<" is not a leap year"<<endl;
        };
    }else{
        cout<<year5<<" is not a leap year"<<endl;
    };
    
    cout << "PROBLEM 6\n";

    


    
    cout << "PROBLEM 7\n";

    double side1=0;
    double side2=0;
    double side3=0;
    cin>>side1>>side2>>side3;
    if (side1<side2+side3 && (side1>side2-side3 && side1>side3-side2)){
        cout<<"The triangle is valid"<<endl;
    }else{
        cout<<"The triangle is not valid"<<endl;
    };

    
    cout << "PROBLEM 8\n";

    char char8='A';
    cin>>char8;
    if (int(char8)>64 && int(char8)<91){
        cout<<"Uppercase alphabet"<<endl;
    } else if (int(char8)>96 && int(char8)<123){
        cout<<"Lowercase alphabet"<<endl;
    } else{
        cout<<"It is not an alphabet"<<endl;
    };

    cout << "PROBLEM 9\n";

    double speed9=0;
    cin>>speed9;
    if (speed9<20){
        cout<<"too slow"<<endl;
    }else if (speed9>80){
        cout<<"too fast"<<endl;
    } else{
        cout<<"just right"<<endl;
    };
    
    cout << "PROBLEM 10\n";

    double x10=0;
    double y10=0;
    cin>>x10>>y10;
    if (sqrt(pow(x10,2)+pow(y10,2))<=10){
        cout<<"Point ("<<x10<<","<<y10<<") is in circle"<<endl;
    } else{
        cout<<"Point ("<<x10<<","<<y10<<") is not in circle"<<endl;
    };
    
    cout << "PROBLEM 11\n";

    double weight1=0;
    double price1=0;
    double weight2=0;
    double price2=0;
    cout<<"Enter the weight and price for package 1:";
    cin>>weight1>>price1;
    cout<<"Enter the weight and price for package 2:";
    cin>>weight2>>price2;
    if (price1/weight1<price2/weight2){
        cout<<"Package 1 has a better price"<<endl;
    }else if (price1/weight1>price2/weight2){
        cout<<"Package 2 has a better price"<<endl;
    }else{
        cout<<"Two packages have the same price"<<endl;
    };

    
    cout << "PROBLEM 12\n";

    cout<<"Enter a three-digit integer:";
    int number12=0;
    cin>>number12;
    int a=0;
    a=number12%10*100+(number12%100-number12%10)+int(number12/100);
    if (number12==a){
        cout<<number12<<" is a palindrome"<<endl;
    }else{
        cout<<number12<<" is not a palindrome"<<endl;
    };
    
    cout << "PROBLEM 13\n";

    char command13='A';
    cin>>command13;
    switch(command13){
        case 'g':
            cout<<"Go!"<<endl;
            break;
        case 'y':
            cout<<"Get ready!"<<endl;
            break;
        case 'r':
            cout<<"Stop"<<endl;
            break;
        default:
            cout<<"Wrong command"<<endl;

    };
    
    cout << "PROBLEM 14\n";

    int today=0;
    int future=0;
    string todday="Monday";
    string futday="Monday";
    cout<<"Enter today's day:";
    cin>>today;
    cout<<"Enter the number of days elapsed since today:";
    cin>>future;
    future=today+future;
    switch(today%7){
        case 1:
            todday="Monday";
            break;
        case 2:
            todday="Tuesday";
            break;
        case 3:
            todday="Wednesday";
            break;
        case 4:
            todday="Thursday";
            break;
        case 5:
            todday="Friday";
            break;
        case 6:
            todday = "Saturday";
            break;
        case 0:
            todday="Sunday";
            break;


    };
    switch(future%7){
        case 1:
            futday="Monday";
            break;
        case 2:
            futday="Tuesday";
            break;
        case 3:
            futday="Wednesday";
            break;
        case 4:
            futday="Thursday";
            break;
        case 5:
            futday="Friday";
            break;
        case 6:
            futday = "Saturday";
            break;
        case 0:
            futday="Sunday";
            break;


    };
    cout<<"Today is "<<todday<<" and the future day is "<<futday<<endl;
    
    cout << "PROBLEM 15\n";

    int grade15=0;
    cin>>grade15;
    switch (grade15){
        case 0 ... 59:
            cout<<"F"<<endl;
            break;
        case 60 ... 69:
            cout<<"D"<<endl;
            break;
        case 70 ... 79:
            cout<<"C"<<endl;
            break;
        case 80 ... 89:
            cout<<"B"<<endl;
            break;
        case 90 ... 100:
            cout<<"A"<<endl;
            break;
    };
    
    cout << "PROBLEM 16\n";

    int number16=0;
    cin>>number16;

    switch(number16){
        case 0:
            cout<<"It is zero"<<endl;
            break;
        default:
            if (number16>0){
                cout<<"Positive"<<endl;
            }else{
                cout<<"Negative"<<endl;
            };


    };
    
    cout << "PROBLEM 17\n";

    char language='o';
    cin>>language;
    switch (language){
        case 'u':
            cout<<"Assalomu alaykum"<<endl;
            break;
        case 'e':
            cout<<"Hello"<<endl;
            break;
        case 'r':
            cout<<"Здравствуйте"<<endl;
            break;
        case 'g':
            cout<<"Hallo"<<endl;
            break;
        default:
            cout<<"I do not know this language:("<<endl;

    };
    
    cout << "PROBLEM 18\n";

    int w=0;
    cin>>w;

    switch(w){
        case 0 ... 1:
            cout<<"3500"<<endl;
            break;
        case 2 ... 3:
            cout<<"5500"<<endl;
            break;
        case 4 ... 10:
            cout<<"8500"<<endl;
            break;
        case 11 ... 20:
            cout<<"10500"<<endl;
            break;
        default:
            if (w<=0){
                cout<<"Invalid input"<<endl;
            }else{
                cout<<"The package cannot be shipped"<<endl;
            };
    };

    if (w>0 && w<=1){
        cout<<"3500"<<endl;
    }else if (w>1 && w<=3){
        cout<<"5500"<<endl;
    } else if(w>3 && w<=10){
        cout<<"8500"<<endl;
    }else if(w>10 && w<=20){
        cout<<"10500"<<endl;
    }else if (w<0){
        cout<<"Invalid input"<<endl;
    }else{
        cout<<"The package cannot be shipped"<<endl;
    };

    
    cout << "PROBLEM 19\n";

    int digit=0;
    cin>>digit;
    switch(digit){
        case 0:
            cout<<"Zero"<<endl;
            break;
        case 1:
            cout<<"One"<<endl;
            break;
        case 2:
            cout<<"Two"<<endl;
            break;
        case 3:
            cout<<"Three"<<endl;
            break;
        case 4:
            cout<<"Four"<<endl;
            break;
        case 5:
            cout<<"Five"<<endl;
            break;
        case 6:
            cout<<"Six"<<endl;
            break;
        case 7:
            cout<<"Seven"<<endl;
            break;
        case 8:
            cout<<"Eight"<<endl;
            break;
        case 9:
            cout<<"Nine"<<endl;
            break;
        default:
            cout<<"It is not a digit"<<endl;
    };
    
    cout << "PROBLEM 20\n";

    int month=0;
    cin>>month;
    switch(month%12){
        case 1:
            cout<<"In January there is:\n -Defenders of the Motherland Day, 14 January"<<endl;
            break;
        case 3:
            cout<<"In March there is: \n-International Women's Day, 8 March \n-Navruz, 21 March"<<endl;
            break;
        case 5:
            cout<<"In May there is: \n-Memorial Day, 9 May"<<endl;
            break;
        case 9:
            cout<<"In September there is: \n-Independence Day, 1 September"<<endl;
            break;
        case 10:
            cout<<"In October there is: \n-Teachers' Day, 1 October"<<endl;
            break;
        case 11:
            cout<<"In February, April, June, July, August, November there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change."<<endl;
            break;
        case 0:
            cout<<"In December there is: \n-Constitution Day, 8 December"<<endl;
            break;
        default:
            cout<<"In February, April, June, July, August, November there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change."<<endl;
            break;
    };

    
    cout << "PROBLEM 21\n";

    int number21=rand();
    int res = number21%2;
    int prompt=0;
    cin>>prompt;
    if (prompt==res){
        cout<<"You are correct!!!"<<endl;
    } else{
        cout<<"You are incorrect!!!"<<endl;
    };

    
    cout << "PROBLEM 22\n";

    srand(time(nullptr));

    // Arrays to hold the ranks and suits
    std::string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    std::string suits[] = {"Clubs", "Diamonds", "Hearts", "Spades"};

    // Generate a random rank and suit
    int rankIndex = getRandomNumber(0, 12); // 0-12 for ranks
    int suitIndex = getRandomNumber(0, 3);  // 0-3 for suits

    // Display the picked card
    std::cout << "The picked card is: " << ranks[rankIndex] << " of " << suits[suitIndex] << std::endl;

    
    return 0;
    
    
        




}
