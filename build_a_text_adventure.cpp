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

    //initialize alive variable and respond variable
    bool alive = true;
    std::string answer;

    while (alive) {

        //ask first question
        std::cout << "The Hunger Games start in 5...4...3...2...1...\n";
        std::cout << "There are great resources on the inside of the Cornucopia. Tools and food galore!" << 
                        "There are some tools and food on the outside of it, but not as many and not as resourceful. You decide to: \n";
        std::cout << "   A: Grab resources inside of the Cornucopia\n   B: Grab resources outside of the Cornucopia\n";
        std:: cin >> answer;

        if (answer == "B") {
            std::cout << "You successfully grabbed resources.\n";
        }
        else if (answer == "A") {
            std::cout << "You were killed in the bloodbath of the Cornucopia.\n";
            alive = false;
            break;
        }
        else {
            std::cout << "You entered an incorrect key.\n";
        }

        //ask second question
        std::cout << "============================\n";
        std::cout << "You are running in the woods and stumble upon another tribute. You decide to: \n";
        std::cout << "   A: Attempt to kill them\n   B: Ally with them\n";
        std:: cin >> answer;

        if (answer == "B") {
            std::cout << "You successfully make an ally.\n";
        }
        else if (answer == "A") {
            std::cout << "You were killed in the fight with the tribute.\n";
            alive = false;
        }
        else {
            std::cout << "You entered an incorrect key.\n";
        }

        //ask third question
        std::cout << "============================\n";
        std::cout << "You and your new ally set up camp for the night. You hear them grab food and tools from your bag. You decide to: \n";
        std::cout << "   A: Kill them\n   B: Ignore them\n";

        //ask fourth question
        std::cout << "============================\n";
        std::cout << "You wake up to the smell of smoke. The forest is on fire! You start running, but your new ally trips and falls! You decide to: \n";
        std::cout << "   A: Leave them\n   B: Get them\n";

        //ask fifth question
        std::cout << "============================\n";
        std::cout << "You and your ally make it out of the fire. You have minor injuries, but your ally is in bad condition. There is only 1 first aid kit left. You decide to: \n";
        std::cout << "   A: Use it on your ally\n   B: Hold onto it for a later time\n";

        //ask sixth question
        std::cout << "============================\n";
        std::cout << "You find out that a luxury prize in the center of the Cornucopia. You decide to: \n";
        std::cout << "   A: Get the prize\n   B: Not get the prize\n";

        //ask seventh question
        std::cout << "============================\n";
        std::cout << "You and your ally are the only ones at the center of the Cornucopia. There is only 1 prize." <<
                        "They start to attack you. You decide to: \n";
        std::cout << "   A: Attempt to calm them down\n   B: Attempt to kill them\n";

        //ask eigth question
        std::cout << "============================\n";
        std::cout << "You successfully kill your former ally. But it came at a cost: the other remaining tributues know where you are." <<
                        "You decide to: \n";
        std::cout << "   A: Hide deep in the cornucopia\n   B: Run away from the area\n";

        //ask ninth question
        std::cout << "============================\n";
        std::cout << "No one found you in the Corncucopia. You start to walk away, but then a group of muttations are released and are charging at you." <<
                        "You decide to: \n";
        std::cout << "   A: Attempt to climb the Cornucopia\n   B: Fight off the muttations\n";
        
        //ask tenth question
        std::cout << "============================\n";
        std::cout << "You fight off of the muttations. The last remaining tribute is charging at you with a sword. Your weapons are away from you." <<
                        "You decide to: \n";
        std::cout << "   A: Run and jump out of the way when they lodge\n   B: Duck and roll into their legs\n";

    }

    //output victory
    std::cout << "============================\n";
    if (alive) {
        std::cout << "Congratulations " << name << " of District " << district << "!\nYou are the victor of The Hunger Games!\n";
    }














}