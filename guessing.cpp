#include <iostream>

using namespace std;
int main()
{
  srand(time(NULL)); //random seed based off time

  
  char playagain = 'y'; //initializes variable that tracks whether the player wants to play again
  int playerguess = 0; //initializes variable to store the player's guess 
  while (playagain == 'y') //allows players keep playing by entering 'y' after a game
  {
    
    int randomnumber = rand() % 101;//picks random number from 0-100, based off method from https://stackoverflow.com/questions/1202687/how-do-i-get-a-specific-range-of-numbers-from-rand
    int playertries = 0; //number of times the player has tried is set to 0 before each game
    bool playercorrect = false; //variable that keeps track of whether player has guessed correctly
    while(playercorrect == false) //allows the player to keep guessing until they get the correct answer
      {
	cout << '\n' << "Guess an integer between 0 and 100" << '\n';
	cin >> playerguess; //takes in the player's guess
	playertries++; //adds 1 to number of tries each time the player guesses
	if(playerguess == randomnumber) //if statement compares the player's guess to the number the computer picked
	  {
	    cout << '\n' << playerguess << " is correct!" << endl; //tells the player that they guessed correctly
	    cout << '\n' << "you took " << playertries << " tries" << endl; //prints out number of tries
	    playercorrect = true;
	    //if the player's guess is correct, the while loop will break and the game will end
	  }
	else if(playerguess < randomnumber) //two statements that give feedback, telling player if their guess was too high or low
	  {
	    cout << playerguess << " is too low" << endl;
	  }
	else
	  {
	    cout << playerguess << " is too high" << endl;
	  }
      }
    cout << "would you like to play again? Please answer y(yes) or n(no) " << '\n' << endl; //asks the character if they want to play again
    cin >> playagain;
    //player can continue playing by entering 'y' or quit the game by entering 'n' or any other character
  }
  return 0;
}
