#include <iostream>
#include <random>
#include <string>
#include <array>
using namespace std;

struct {
	int playerMoney = 100;
	string playerName;
	string purchacedProperties[10] = {""};
	int swordsmen = 10;
	int archers = 10;
		
} player;

struct {
	float price;
	string description;
	
} mayanMansion;

struct {
	bool isGame = true;
} gameSettings;


void random(int lowNumber, int highNumber) {
    random_device rd;   
    mt19937 gen(rd());
    uniform_int_distribution <> dist(lowNumber,highNumber);
	cout << dist(gen) << " ";
	
}

void game() {
	
	string instructions = ", what do you want to do? You can \n \t 1. Buy properties\n\t 2. Sell properties\n\t 3. See stats";       
	
	cout << "What is you name?" << "\n";
	cin >> player.playerName;
	while (gameSettings.isGame == true) {

		string choice;
		
		cout << player.playerName << instructions << "\n";
		cin >> choice;
		if (choice == "0") {
			gameSettings.isGame = false;
		 } else if (choice == "1" or "1." or "Buy properties" or "buy properties") {
		   //buyProperties();
		 }
	}
}

int main() {
	game();
	return 0;
}