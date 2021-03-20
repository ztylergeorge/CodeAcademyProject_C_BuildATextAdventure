#include <iostream>

int main() {

    //give initial prompt
    std::string name;
    int district;
    std::cout << "Welcome to the Hunger Games of 2021! What is your name?\n";
    std::cin >> name;
    std::cout << "Well, " << name << ", what district are you from? 1, 2,...12?\n";
    std::cin >> district;
    std::cout << "Welcome " << name << " of District " << district << "!\nMay the odds be ever in your favor.\n";
    std::cout << "============================\n";

    //ask first question
    std::cout << "The Hunger Games start in 5...4...3...2...1...\n";
    std::cout << "There are great resources on the inside of the Cornucopia. Tools and food galore!" << 
                    "There are some tools and food on the outside of it, but not as many and not as resourceful. You decide to: \n";
    std::cout << "   A: Grab resources inside of the Cornucopia\n   B: Grab resources outside of the Cornucopia\n";

    //ask second question
    std::cout << "You are running in the woods and stumble upon another tribute. You decide to: \n";
    std::cout << "   A: Attempt to kill them\n   B: Ally with them\n";

    //ask third question
    std::cout << "You and your new ally set up camp for the night. You hear them grab food and tools from your bag. You decide to: \n";
    std::cout << "   A: Kill them\n   B: Ignore them\n";









}