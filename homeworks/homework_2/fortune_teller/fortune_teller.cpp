// Programming the furtune_teller
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <array>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::map;
    using std::string;
    using std::vector;
    using std::array;
    using std::string_literals::operator""s;

    // Desired Variables for the final sentence (to be determined).
    string name = {};
    string adjective = {};
    string noun = {};
    string ending = {};

    // User entries
    string fortune_teller_name{};              // User enters his name
    string fortune_teller_adjective{};         // User enters first adjective
    string fortune_teller_birth{};             // User enters time of the year he/she were born
    string fortune_teller_another_adjective{}; // user enters second adjevtice

    cout << "Welcome to the fortune teller program!" << std::endl;
    cout << "Please enter your name: " << std::endl;
    std::cin >> fortune_teller_name;
    cout << "Plese enter the time of year when you were born: " << std::endl;
    cout << "(Pick from 'spring', 'summer', 'autumn', 'winter')" << std::endl;
    cin >> fortune_teller_birth;
    cout << "Please enter an adjective: " << endl;
    cin >> fortune_teller_adjective;
    cout << "Please enter another adjective" << endl;
    cin >> fortune_teller_another_adjective;

    // Determining the length of the name and variable name
    name = fortune_teller_name;
    const int length_fortune_teller_name = fortune_teller_name.size();

    // Determining the variable adjective
    const vector<string> adjective_vector = {fortune_teller_adjective, fortune_teller_another_adjective}; // vector stores adjectives from user
    const int index_adjective = length_fortune_teller_name % adjective_vector.size();                     // Determining which index of adjective vector to use

    adjective = adjective_vector.at(index_adjective); // Adjective for final sentence.

    // Determining the variable noun
    //Map indicates correspondance of birth to the noun
    const map<string, string> map_for_noun = {{"spring", "STL guru"},
                                              {"summer", "C++ expert"},
                                              {"autumn", "coding beast"},
                                              {"winter", "software desgin hero"}};
    
    noun = map_for_noun.at(fortune_teller_birth); // Noun for final sentence.

    // Determining the variable ending

    const array<string, 3UL> array_for_ending = {"eats UB for breakfast", "finds error quicker than the compiler", "is not afraid of C++ error messages"}; //Array indicates possible endings.
    
    const int index_ending = length_fortune_teller_name % array_for_ending.size(); //Determining which index to choose

    ending = array_for_ending.at(index_ending);

    //Create final sentence
    cout << name + ", the "s +  adjective + " " + noun + " that "s + ending;
    return 0;
}
