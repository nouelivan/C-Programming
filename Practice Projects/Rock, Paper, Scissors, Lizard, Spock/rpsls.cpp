// This program is an updated version of the game Rock, Paper, Scissors. This new version was made  famous by the show The Big Bang Theory, and goes by Rock, Paper, Scissors, Lizard, Spock!

#include <iostream>
#include <stdlib.h>

int main() {

// Variable creation.
srand (time(NULL));
 
int computer = rand() % 5 + 1;
 
int user = 0;

// Game visuals
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

// User input
std::cout << "\nWhat's your choice wise one? ";
std::cin >> user;

// Checks for valid user input.
while (user < 1 || user > 5) {
  std::cout << "\nWhoops! Please enter a number between 1 and 5: ";
  std::cin >> user;
}

// Compare computer and user values.
if (computer == user) {
  std::cout << "\nDraw!\n";
}
else if ((computer == 1 && user == 2) || (computer == 1 && user == 5)) {
  std::cout << "\nYou win! Woo-hoo!\n";
}
else if ((computer == 2 && user == 3) || (computer == 2 && user == 4)) {
  std::cout << "\nYou win! Nice!\n";
}
else if ((computer == 3 && user == 1) || (computer == 3 && user == 5)) {
  std::cout << "\nYou win! Cool!\n";
}
else if ((computer == 4 && user == 3) || (computer == 4 && user == 1)) {
  std::cout << "\nYou win! Awesome!\n";
}
else if ((computer == 5 && user == 2) || (computer == 5 && user == 4)) {
  std::cout << "\nYou win! Super!\n";
}
else {
  std::cout << "\nYou lose! Better luck next time!\n";
}


}
