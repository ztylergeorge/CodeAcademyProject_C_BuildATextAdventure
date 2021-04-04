#include <iostream>

int main() {

    //give initial prompt and set initial variables
    std::string name;
    int district;
    bool valid = false; 

    std::cout << "Welcome to the Hunger Games of 2021! What is your name?\n";
    std::cin >> name;

    while (!valid) {
        std::cout << "Well, " << name << ", what district are you from? 1, 2,...12?\n";
        std::cin >> district;

        if (district >= 1 && district <= 12) {
            valid = true;
        }
        else {
            std::cout << district << " is an incorrect district.\n";
        }
    }

    std::cout << "Welcome " << name << " of District " << district << "!\nMay the odds be ever in your favor.\n";
    std::cout << "============================\n";
    std::cout << "The Hunger Games start in 5...4...3...2...1...\n";

    //initialize alive variable, answer variable, and valid variable
    bool dead = false;
    std::string answer;
    valid = false;


    while (true) {
        
        //ask first question
        std::cout << "There are great resources on the inside of the Cornucopia. Tools and food galore!" << 
                        "There are some tools and food on the outside of it, but not as many and not as resourceful. You decide to: \n";
        std::cout << "   A: Grab resources inside of the Cornucopia\n   B: Grab resources outside of the Cornucopia\n";

        while (!valid) {
            std::cin >> answer;

            if (answer == "A" || answer == "B") {
                valid = true;
            }
            else {
                std::cout << "You entered an incorrect key. Please try again.\n";
            }
        }

        if (answer == "A") {
            std::cout << "You were killed in the bloodbath of the Cornucopia.\n";
            dead = true;
            break;
        }
        else if (answer == "B") {
            std::cout << "You successfully grabbed resources.\n";
        }

        valid = false;

        //ask second question
        std::cout << "============================\n";
        std::cout << "You are running in the woods and stumble upon another tribute. You decide to: \n";
        std::cout << "   A: Attempt to kill them\n   B: Ally with them\n";
        while (!valid) {
            std::cin >> answer;

            if (answer == "A" || answer == "B") {
                valid = true;
            }
            else {
                std::cout << "You entered an incorrect key. Please try again.\n";
            }
        }

        if (answer == "A") {
            std::cout << "You were killed in the fight with the tribute.\n";
            dead = true;
            break;
        }

        else if (answer == "B") {
            std::cout << "You successfully make an ally.\n"; 
        }

        valid = false;

        //ask third question
        std::cout << "============================\n";
        std::cout << "You and your new ally set up camp for the night. You hear them grab food and tools from your bag. You decide to: \n";
        std::cout << "   A: Kill them\n   B: Ignore them\n";

        while (!valid) {
            std::cin >> answer;
            if (answer == "A" || answer == "B") {
                valid = true;
            }
            else {
                std::cout << "You entered an incorrect key. Please try again.\n";
            }
        }

        if (answer == "A") {
            std::cout << "The tribute kills you as you attempt to kill them.\n";
            dead = true;
            break;
        }
        else if (answer == "B") {
            std::cout << "The ally stops going through your bag and goes back to sleep.\n"; 
        }
        
        valid = false;

        //ask fourth question
        std::cout << "============================\n";
        std::cout << "You wake up to the smell of smoke. The forest is on fire! You start running, but your new ally trips and falls! You decide to: \n";
        std::cout << "   A: Leave them\n   B: Get them\n";
        while (!valid) {
            std::cin >> answer;
            if (answer == "A" || answer == "B") {
                valid = true;
            }
            else {
                std::cout << "You entered an incorrect key. Please try again.\n";
            }
        }

        if (answer == "A") {
            std::cout << "You end up tripping and falling as well. The fire consumes you.\n";
            dead = true;
            break;
        }
        else if (answer == "B") {
            std::cout << "You grab your ally successfully.\n"; 
        }

        valid = false;

        //ask fifth question
        std::cout << "============================\n";
        std::cout << "You and your ally make it out of the fire. You have minor injuries, but your ally is in bad condition. There is only 1 first aid kit left. You decide to: \n";
        std::cout << "   A: Use it on your ally\n   B: Hold onto it for a later time\n";
        while (!valid) {
            std::cin >> answer;
            if (answer == "A" || answer == "B") {
                valid = true;
            }
            else {
                std::cout << "You entered an incorrect key. Please try again.\n";
            }
        }

        if (answer == "B") {
            std::cout << "The medicine that starts to expire inside of the kit is toxic. It poisons you and your ally.\n";
            dead = true;
            break;
        }
        else if (answer == "A") {
            std::cout << "You treat your ally and they make a full recovery.\n"; 
        }
        
        valid = false;

        //ask sixth question
        std::cout << "============================\n";
        std::cout << "You find out that a luxury prize in the center of the Cornucopia. You decide to: \n";
        std::cout << "   A: Get the prize\n   B: Not get the prize\n";
        while (!valid) {
            std::cin >> answer;
            if (answer == "A" || answer == "B") {
                valid = true;
            }
            else {
                std::cout << "You entered an incorrect key. Please try again.\n";
            }
        }

        if (answer == "B") {
            std::cout << "The area surrounding the Cornucopia starts to flood. You cannot swim.\n";
            dead = true;
            break;
        }
        else if (answer == "A") {
            std::cout << "You go to the Cornucopia.\n"; 
        }
        
        valid = false;

        //ask seventh question
        std::cout << "============================\n";
        std::cout << "You and your ally are the only ones at the center of the Cornucopia. There is only 1 prize." <<
                        "They start to attack you. You decide to: \n";
        std::cout << "   A: Attempt to calm them down\n   B: Attempt to kill them\n";
        while (!valid) {
            std::cin >> answer;
            if (answer == "A" || answer == "B") {
                valid = true;
            }
            else {
                std::cout << "You entered an incorrect key. Please try again.\n";
            }
        }

        if (answer == "A") {
            std::cout << "Calming them down makes it worse. They kill you.\n";
            dead = true;
            break;
        }
        else if (answer == "B") {
            std::cout << "You kill your ally.\n"; 
        }
        
        valid = false;

        //ask eigth question
        std::cout << "============================\n";
        std::cout << "You successfully kill your former ally. But it came at a cost: the other remaining tributues know where you are." <<
                        "You decide to: \n";
        std::cout << "   A: Hide deep in the cornucopia\n   B: Run away from the area\n";
        while (!valid) {
            std::cin >> answer;
            if (answer == "A" || answer == "B") {
                valid = true;
            }
            else {
                std::cout << "You entered an incorrect key. Please try again.\n";
            }
        }

        if (answer == "B") {
            std::cout << "You ran into another tribute. They kill you.\n";
            dead = true;
            break;
        }
        else if (answer == "A") {
            std::cout << "You successfully hid from the other tributes.\n"; 
        }
        
        valid = false;

        //ask ninth question
        std::cout << "============================\n";
        std::cout << "No one found you in the Corncucopia. You start to walk away, but then a group of muttations are released and are charging at you." <<
                        "You decide to: \n";
        std::cout << "   A: Attempt to climb the Cornucopia\n   B: Fight off the muttations\n";
        while (!valid) {
            std::cin >> answer;
            if (answer == "A" || answer == "B") {
                valid = true;
            }
            else {
                std::cout << "You entered an incorrect key. Please try again.\n";
            }
        }

        if (answer == "A") {
            std::cout << "The edge of the Cornucopia is smooth and cannot be climbed. You do not make it.\n";
            dead = true;
            break;
        }
        else if (answer == "B") {
            std::cout << "You successfully fend off the muttations.\n"; 
        }

        valid = false;
        
        //ask tenth question
        std::cout << "============================\n";
        std::cout << "You fight off of the muttations. The last remaining tribute is charging at you with a sword. Your weapons are away from you." <<
                        "You decide to: \n";
        std::cout << "   A: Run and jump out of the way when they lunge\n   B: Duck and roll into their legs\n";
        while (!valid) {
            std::cin >> answer;
            if (answer == "A" || answer == "B") {
                valid = true;
            }
            else {
                std::cout << "You entered an incorrect key. Please try again.\n";
            }
        }

        if (answer == "B") {
            std::cout << "The sword swings down and kills you.\n";
            dead = true;
            break;
        }
        else if (answer == "A") {
            std::cout << "They lunge right into a force field, killing them.\n"; 
        }
        

        break;

    }

    //output victory
    std::cout << "============================\n";
    if (!dead) {
        std::cout << "Congratulations " << name << " of District " << district << "!\nYou are the victor of The Hunger Games!\n";
    }














}