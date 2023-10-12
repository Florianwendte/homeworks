#include <iostream>
#include <string>

int main() {
    using std::string_literals::operator""s;
    using std::cout;
    using std::cin;
    using std::string;

    const std::string hello = "Hello"s;
    const std::string hello_more_information = "Please, type your last name: ";

    cout << "Type your name:" << std::endl;
    string name{}; //Init empty
    std::cin >> name; //Read name
    std::cout << hello + ", "s + name + "! "s + hello_more_information << std::endl;
    std::string last_name{}; //Init empty
    std::cin >> last_name;
    std::cout << "Name length is: " << name.size() << std::endl;
    std::cout << "Last name length is: " << last_name.size() << std::endl;
    return 0;
}