// This is a text adventure that will provide you with three lives to reach the portal to planet Earthax.

#include <iostream>
#include <string.h>

// First arc of story.
int first_arc(int lives) {
  int lives_left = lives;
  int choice;
  int i;
  
  std::cout << "\nThere are bandits walking through the halls and creeping closer to your apartment. You can either hide and hope they ignore your place, or you can run for it, but guarantee being spotted and chased.\n";

// Checks for lives left.
  for (i = lives_left; i > 0;) {

    std::cout << "\nChoose 1 to stay in the apartment or 2 to make a run for it: ";
    std::cin >> choice;
    std::cout << "============================================\n";

  // Conditional logic to handle user choice.
    if (choice == 2) {
      std::cout << "\nYou've made a run for it a and escaped outside! You see several cars and a motorcycle, which do you take?\n";
      std::cout << "\n1) 🏍\n";
      std::cout << "\n2) 🚗\n";
      std::cin >> choice;
      std::cout << "============================================\n"; 
      if (choice == 2) {
        std::cout << "\nNice! You've also got a chip embedded into your brain and used the powers provided to hack into the car and make your escape out of the city.\n";
        break;
    } else {
        std::cout << "\nYou successfully hacked the motorcycle using the chip embedded into your brain and sped off. But, due to the openness of the motorcycle, you were struck before getting too far and died.\n";
        std::cout << "============================================\n";
        i -= 1;
    }
  }  else if ((choice < 1) || (choice > 2)) {
      std::cout << "You've entered an invalid choice, try again!";
      std::cout << "============================================\n";
    } else {
      std::cout << "The bandits entered your apartment and found you! You fought hard, but unfortunately they overpowered you and threw you off the balcony to your death.";
      std::cout << "============================================\n";
      i -= 1;
  }
  }
  return i;
}

// Second arc of story.
int second_arc(int lives) {
  // Variables
  int lives_left = lives;
  int choice;
  int i;

  // Checks for lives left and tests choices.
  for (i = lives_left; i > 0;){
    std::cout << "============================================\n";
    std::cout << "\nYou've made it out of the city and onto the highway. There are many ways to get to Wellington and some are more dangerous than others. You can either take Exit 33 onto the Turpike or continue on I-95.\n";
    std::cout << "Enter 1 to take the Turnpike or 2 to continue on I-95: ";
    std::cin >> choice;
    std::cout << "============================================\n";
  
    if (choice == 1) {
      std::cout << "\nYou take Exit 33 and see an abundance of abandoned cars scattered everywhere. Driving through will be challenging, but you decide to go with your gut and proceed straight.\n";
      std::cout << "\n As you continue to drive the hours pass and you notice that since your departure from home, five hours have flown by. This leaves you with just over four hours to change your destiny.\n";
      std::cout << "\nAfraid, and no longer in your heart, you begin to panic. Knowing that the road has been free of any imminent danger aside from the mess of cars all around slowing you down, you contemplate whether to take the exit back onto I-95 where you remember a wide and empty highway, or continue the course on the Turpike.\n";
  
    std::cout << "\nEnter 1 to continue on the Turpike or 2 to take the exit onto I-95: ";
    std::cin >> choice;
    std::cout << "============================================\n";
      if (choice == 1) {
        std::cout << "\nYou skip the exit and almost immediately see a pile of flaming cars keeping you from proceeding. As you analyze the situation a speckle of light hits your left eye and you quickly change the gear into reverse and smash the gas! The bullet just barely avoids your right ear.\n";
        std::cout << "\nThe trasmission is jammed and you're stuck in reverse. You aren't been chased, but you'll need to find another vehicle.\n";
        std::cout << "\nDo you dash towards the nearest car or continue to reverse further away from the enemy?\n";
        std::cout << "\nPress 1 to make a dash for it or 2 to continue reversing: ";
        std::cin >> choice;
        if (choice == 1) {
          std::cout << "\nYou jump from the moving car and ferociously run towards another nearest to you. Once in, you hack into it and get on 95.\n";
          std::cout << "============================================\n";
          break;
      } else if ((choice < 1) || (choice > 2)) {
      std::cout << "You've entered an invalid choice, try again!";
      std::cout << "============================================\n";
      } else {
          std::cout << "\nYou lose control of the car, spin out, and slide towards another vehicle hitting your driver door with great strength and leaving you stuck and unable to move your left leg.\n";
          std::cout << "\nThe bandits reach you and put you out of your misery.\n";
          std::cout << "============================================\n";
          i -= 1;
      }
    } else {
      std::cout << "\nYou get on 95 and the road is clear as day.";
      std::cout << "============================================\n";
        break;
    }
    } else if ((choice < 1) || (choice > 2)) {
      std::cout << "You've entered an invalid choice, try again!";
      std::cout << "============================================\n";
    } else {
      std::cout << "\nYou continue the path straight where the ride is smooth and bandit free!";
      std::cout << "============================================\n";
      break;

  }
}

  return i;

  } 


// Third arc of story.
int third_arc(int lives) {
  int lives_left = lives;
  int choice;
  int i;

  std::cout << "\nIt's almost over and you've made it to the mall. You leap out of your seat and hurriedly run to the entrace, but notice two ways in. One is through the Macy's department store and the other is through one of the main mall entrances.\n";
  std::cout << "============================================\n";
  
   
   // Checks for lives left and tests choices.
  for (i = lives_left; i > 0;) {
    std::cout << "\nEnter 1 to take the Macy's entrance or 2 to take the main entrance: ";
    std::cin >> choice;
    if (choice == 1) {
      std::cout << "============================================\n";
      std::cout << "\nYou enter the Macy's, through the perfume area, and the escalator, straight ahead and eventually to the portal where you escape to safety!\n";
      i = -1;
    } else if ((choice < 1) || (choice > 2)) {
      std::cout << "You've entered an invalid choice, try again!";
      std::cout << "============================================\n";
    } else {
      std::cout << "\nYou enter through the main entrace and stumble upon bandits who grab and kill you.\n";
      i -= 1;
    }

  }
  return i;
}


int main() {

// Variables
  std::string user = "";
  int lives = 3;
  int lives_left;

// Ask for users names.
  std::cout << "Enter your name to begin: ";
  std::cin >> user;

// Beginning of scenario.
  std::cout << "\nHello " << user << ". There isn't much time, but you're currently in your apartment in Miami, Florida. Earth is now inhabited by chipped humans that can control both they're exterior and inner characteristics, as well as external objects and beyond.\n";
  std::cout << "\nIn less than 10 hours Earth will seize to exist, and the only way off this doomed planet is by reaching the escape portal in Wellington, Florida at the center of the Wellington Green Mall on the first floor adjacent to the giant turtle in the kids play area.\n";
  std::cout << "===========================================\n";

lives = first_arc(lives);
if (lives == 0) {
  std::cout << "\nGame Over!\n";
} else {
  lives = second_arc(lives);
  if (lives > 0) {
    lives = third_arc(lives);
    if (lives == -1) {
      std::cout << "\nYou Win!\n";
    } else {
      std::cout << "\nGame Over!\n";
    }
    } else {
    std::cout << "\nGame Over!\n";
  }
  }
}
