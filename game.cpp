#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
  srand(time(NULL));
  char player, answer;
  char cpu_s[] = { 'R', 'P', 'S' };
  bool done = false, problem = false;
  do
  {
    if (done)
      system("cls");

    int r = rand() % 3;
    cout<<"Welcome to Rock, paper, scissors game!!\n";
    cout<<"Enter R for rock , P for paper and S for scissor (case sensitive)"<<endl;
    cout<<"Input: ";
    cin >> player;

    cout<<cpu_s[r]<<" is chosen from computer's side"<<endl;

    if (cpu_s[r] == player)
      cout<<"Tie!!";
    else if (r == 1 && player == 'R')
         cout<<"You lose... (R < P)";
    else if (r == 2 && player == 'R')
      cout<<"Congrats, you win!! (R > S)";
    else if (r == 1 && player == 'S')
      cout<<"Congrats, you win!! (S > P)";
    else if (r == 0 && player == 'S')
      cout<<"You lose... (S < R)";
    else if (r == 0 && player == 'P')
      cout<<"Congrats, you win!! (P > R)";
    else if (r == 2 && player == 'P')
      cout<<"Congrats, you win!! (S > P)";
    else {
      cout<<"Not a valid value...";
      answer = 'Y';
      problem = true;
    }
    if (!problem) {
      cout<<"\nPlay again? ";
      cin >> answer;
      problem = true;
    }
    done = true;
    cout<<"\n";
    system("pause");
    problem = false;
  } while (answer=='Y');
}