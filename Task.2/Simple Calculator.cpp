#include<iostream>
using namespace std;
int add(int,int);
int sub(int,int);
int mult(int,int);
float divi(int,int);
int main()
{
    int Num1,Num2;
    char opr;
    
    cout<<"Input 1st Number:";
    if(!(cin>>Num1)){                           // Error by input a charachter
        cout<<"Error due to input a number";
        return 1;
    }
    cout<<"Input 2nd Number:";
    if(!(cin>>Num2)){                           // Error by input a charachter
        cout<<"Error due to input a number";
        return 1;
    }

    top:
    cout<<"Enter Operator(Like: + , - , * , /):";           // input operator
    cin>>opr;
    if(opr=='+')
    add(Num1,Num2);         // call for addition
    else if(opr=='-')
    sub(Num1,Num2);         // Call for subtraction
    else if(opr=='*')
    mult(Num1,Num2);        // call for multipication
    else if(opr=='/')
    divi(Num1,Num2);        // call for division
    else{  
        cout<<"\nWrong Oprator..\n";                        // input wrong operator
        goto top;
    }
    return 0;
}
int add(int a, int b)
{
    int x=a+b;
    cout<<"Addition\n( "<<a<<" + "<<b<<" ) = "<<x;        // print addition
    return 0;
}
int sub(int a, int b)
{
    int x=a-b;
    cout<<"Subtraction\n( "<<a<<" - "<<b<<" ) = "<<x;      // print subtraction
    return 0;
}
int mult(int a, int b)
{
    int x=a*b;
    cout<<"Multipication\n( "<<a<<" * "<<b<<" ) = "<<x;     // print multipication
    return 0;
}
float divi(int a, int b)
{
    top:
    float x;
    if(b==0){
    cout<<"Error!  Division by zero, Not posible.";         // if divider is zero during dividing
    cout<<"\nInput 1st Number:";
    cin>>a;
    cout<<"Input 2nd Number:";                              // re enter  numbers
    cin>>b;
    goto top;
    }
    else{
        x=(float)a/b;
    cout<<"Division\n( "<<a<<" / "<<b<<" ) = "<<x;        // print division
    }
    return 0;
}