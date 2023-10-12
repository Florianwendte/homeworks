# include <iostream>
# include <string>
# include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    const vector<int> numbers = {1, 2, 3};
    vector<string> jedi = {"Yoda", "Anakin"};
    jedi.reserve(jedi.size() + 1UL); // optional
    jedi.push_back("Obi-Wan");
    cout << "Some Jedi: " << jedi.front() << endl;
    cout << "Last number: " << numbers.back() << endl;
    return 0;
}