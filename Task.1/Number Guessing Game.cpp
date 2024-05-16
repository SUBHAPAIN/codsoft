#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int user_num;
    system("cls");              /*CLEAR SCREEN*/
    srand(time(NULL));
    const int the_num =rand()%100+1;    //Randam no. print 1-100..
    Top:
    cout<<"\nGuess The Number(1-100):";         //input 
    cin>>user_num;

    if(user_num==the_num){                                                  // the no. is found then return
        cout<<"\nCongo..! The Guessed Number Is Correct: "<<the_num;
        return 0;
    }
    else if(user_num>the_num){                             //if guess no. is high
        cout<<"\nToo High..! Try Again.";
    }
    else                                                    // if guess no. is low
        cout<<"\nToo Low..! Try Again.";
    goto Top;                                               // infinite loop
}