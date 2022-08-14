// This application allows for the creation of new dating profiles.

#include <iostream>
#include "profile.hpp"

int main() {

Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

sam.add_hobby("Reading and listening to the ocassional podcast.");
sam.add_hobby("Cooking and baking.");
sam.add_hobby("Traveling.");
sam.add_hobby("Investing");
sam.add_hobby("Trying out all sorts of new things.");
std::cout << sam.view_profile();
  

}
