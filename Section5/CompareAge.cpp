#include <iostream>
#include <string>
#include <string_view>

std::string getName(int personNumber) {
    std::cout << "Enter the name of person #" << personNumber << ": ";
    std::string name;
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge(std::string_view name) {
    std::cout << "Enter the age of " << name << ": ";
    int age;
    std::cin >> age;
    return age;
}

void printComparison(std::string_view person1, 
int person1Age, 
std::string_view person2,
int person2Age) {
    std::cout << ((person1Age > person2Age) ? person1 : person2)
    << " (age " << ((person1Age > person2Age) ? person1Age : person2Age)
    << ") is older than "
    << ((person1Age > person2Age) ? person2 : person1)
    << " (age " << ((person1Age > person2Age) ? person2Age : person1Age)
    << ").\n";
}

int main() {
    std::string name1;
    name1 = getName(1);
    int name1Age;
    name1Age = getAge(name1);

    std::string name2;
    name2 = getName(2);
    int name2Age;
    name2Age = getAge(name2);

    printComparison(name1, name1Age, name2, name2Age);

    return 0;
}