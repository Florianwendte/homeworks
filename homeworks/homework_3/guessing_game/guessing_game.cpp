#include <iostream>
#include <random>
#include <string>

int main() {
  using std::string_literals::operator""s;

  std::cout << "Welcome to the GUESSING GAME!"
            << std::endl; // Welcome message to the user
  std::cout << "I will generate a number and you will guess it!" << std::endl;
  std::cout << "Please provide the smallest number: " << std::endl;
  int smallest_number{}; // Smallest number initially empty
  std::cin >>
      smallest_number; // Userinput for smallest number stores in the variable
  std::cout << "Please provide the biggest number: " << std::endl;
  int biggest_number{}; // Biggest number initially empty
  std::cin >> biggest_number;

  // Generating a random number between smallest_number and biggest_number
  std::random_device random_device;
  std::mt19937 random_engine{random_device()};
  std::uniform_int_distribution<> distribution{smallest_number, biggest_number};

  int random_number =
      distribution(random_engine); // This is the generated random number

  std::cout << "I've generated a number. Try to guess it!" << std::endl;
  int guessed_number{}; // guessed number initially empty
  std::cin >> guessed_number;

  int counter = 1; // Set a counter to measure how often the user guesses.
  while (guessed_number != random_number) {
    if (guessed_number < random_number) {
      std::cout << "Your number is too small. Try again!" << std::endl;
      std::cin >> guessed_number;
      counter++; // increase counter by one for each guess
    } else {
      std::cout << "Your number is too big. Try again!" << std::endl;
      std::cin >> guessed_number;
      counter++; // increase counter by one for each guess
    }
  }

  std::cout << "You've done it! You guessed the number " << random_number
            << " in " << counter << " guesses!" << std::endl;

  // Telling user that the random number is generated.
  return 0;
}