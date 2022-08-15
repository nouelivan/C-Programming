// This program is a twist on the classic Hangman game where you have six guesses to attempt to decode the codeword before a citizen of your town gets abducted by aliens!

#include <iostream>
#include "ufo_functions.hpp"

int main() {

greet();

std::string codeword = "codecademy";
std::string answer = "__________";
int misses = 0;
std::vector<char> incorrect;
bool guess = false;
char letter;

while (answer != codeword && misses < 7) {
  display_misses(misses);
  
  display_status(incorrect, answer);

  // The player makes a guess.
  std::cout << "\nPlease enter your guess: ";
  std::cin >> letter;

  // The letter guessed is checked againts the codeword.
  for (int i = 0; i < codeword.length(); i++) {
    if (letter == codeword[i]) {
      answer[i] = letter;
      guess = true;
    }
  }

  // Checks to see if the letter guessed was correct.
  if (guess) {
    std::cout << "\nCorrect!\n";
  } else {
    std::cout << "Incorrect! The tractor beam pulls the person in further.";
    incorrect.push_back(letter);
    misses++;
  }

  // Guess is assigned to false again.
  guess = false;

}

end_game(answer, codeword);

}
