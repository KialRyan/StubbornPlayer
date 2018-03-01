#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int plays;
  int wins=0;

  cout<<"How many times would you like to repeat the game"<<endl;
  cin>> plays;

  for(int x=0;x<plays;x++)
  {
    game.newGame();
    game.guessDoorC();
    game.guessDoorC();
    
        if(game.isWinner()==true)
        {
        wins++;
        }
  }
  cout<<wins<<endl;
   return 0;
}
