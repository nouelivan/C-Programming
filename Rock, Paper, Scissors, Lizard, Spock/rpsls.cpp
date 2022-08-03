// This program is an updated version of the game Rock, Paper, Scissors. This new version was made  famous by the show The Big Bang Theory, and goes by Rock, Paper, Scissors, Lizard, Spock!

#include <iostream>
#include <stdlib.h>

int main() {

srand (time(NULL));
 
int computer = rand() % 5 + 1;
 
int user = 0;

std::cout << 
"==============================\n";
std::cout << "Rock, Paper, Scissors, Lizard, Spock!\n";
std::cout << 
"==============================\n";

std::cout << "1) ✊\n";
std::cout << "2) 🖐\n";
std::cout << "3) ✂️\n";
std::cout << "4) 🦎\n";
std::cout << "5) 🖖\n";

std::cout << "shoot!\n";
std::cout << "What's your choice wise one? ";
std::cin >> user;

if (computer == user) {
  std::cout << "Draw!\n";
}
else if ((computer == 1 && user == 2) || (computer == 1 && user == 5)) {
  std::cout << "You win! Woo-hoo!\n";
}
else if ((computer == 2 && user == 3) || (computer == 2 && user == 4)) {
  std::cout << "You win! Nice!\n";
}
else if ((computer == 3 && user == 1) || (computer == 3 && user == 5)) {
  std::cout << "You win! Cool!\n";
}
else if ((computer == 4 && user == 3) || (computer == 4 && user == 1)) {
  std::cout << "You win! Awesome!\n";
}
else if ((computer == 5 && user == 2) || (computer == 5 && user == 4)) {
  std::cout << "You win! Super!\n";
}
else {
  std::cout << "You lose! Better luck next time!\n";
}


}
