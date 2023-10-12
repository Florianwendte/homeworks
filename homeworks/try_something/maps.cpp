#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    using std::string_literals::operator""s;
    const std::map<int, double> const_map = {{42, 42.42}, {23, 23.23}};
    std::map<int, double> mutable_map = {{42, 42.42}, {23, 23.23}};

    //Work with a constant map
    cout << "Map size is " << const_map.size() << endl;
    cout << "Map is empty: " << const_map.empty() << endl;
    cout << const_map.at(42) << endl;

    //Work with a mutable map
    cout << "Map size is: " << mutable_map.size() << endl;
    mutable_map[4242] = 1234; //creates a new key-value pair
    cout << "New map size is: " << mutable_map.size() << endl;
    mutable_map.at(4242) = 10;
    cout << mutable_map.at(4242) << endl;
    mutable_map.erase(4242);
    cout << "Newest map size is: " << mutable_map.size() << endl;

    // Calculate mean of four grades
    std::map<unsigned int, double> grades_map{}; //Initially empty, fill in with grades.
    unsigned int grade{};
    cout << "Type your first grade: " << endl;
    cin >> grade;
    grades_map[0] = grade;
    cout << "Type your second grade. " << endl;
    cin >> grade;
    grades_map[1] = grade;

    //Entries of the grad map
    cout << grades_map.at(0) << endl;
    cout << grades_map.at(1) << endl;

    //Calculation of the mean
    int sum{};
    sum = grades_map.at(0) + grades_map.at(1);
    cout << "Sum is: " << sum << endl;

    //Trying some merging
    std::map<string, int> map1{{"A", 1}, {"B", 2}, {"C", 3}};
    std::map<string, int> map2{{"D", 4}, {"B", 2}, {"C", 4}};

    std::unordered_map<string, int> unordered_map1{{"A", 1}, {"B", 2}, {"C", 3}};
    std::unordered_map<string, int> unordered_map2{{"A", 4}, {"B", 2}, {"C", 4}};

    unordered_map1.merge(unordered_map2);

    cout << map1.at("A") << map1.at("B") << map1.at("D") << endl;
    cout << unordered_map1.at("A") << unordered_map1.at("B") << unordered_map1.at("C") << endl;

    


    return 0;
}