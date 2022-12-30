#include <iostream>
#include <random>
#include <string>
#include <array>
using namespace std;

struct player {
	int playerMoney = 10000;
	string playerName;
	string purchacedProperties[10] = {""};
	int swordsmen = 10;
	int archers = 10;
	int playerIncome = 5000;
} player;

struct {
  string name;
	float price;
	string description;
  string owner;
  string prompt;
	int income;
} mayanMansions, coloradoCabins, columbianCastles;

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

  mayanMansions.name = "Mayan Mansions";
  mayanMansions.price = 100,000;
	mayanMansions.description = "Deep in the ancient Mayan sivilization, there is a mansion that people love to stay at!";
	mayanMansions.owner = "none";
	mayanMansions.prompt = "Mayan Mansions __ $100,000";
	mayanMansions.income = 20000;
	
	string instructions = "What do you want to do? You can \n \t 1. Buy properties\n\t 2. Sell properties\n\t 3. See stats \n\t 5. Collect income \n\t (to end the game enter \"0\")";       
	
	cout << "What is you name?" << "\n";
	cin >> player.playerName;
	while (gameSettings.isGame == true) {
		
		cout << "\033[2J\033[0;0H";

		// winning message
		if (player.playerMoney > 1000000)
		{
			cout << player.playerName << "You have won!!!";
			break;
		} 

		// input variable
		int choice;

		// output options
		cout << player.playerName << "\nYou have\n\t$" << player.playerMoney << "\n\n" << instructions << "\n" ;
		
		// get user input
		cin >> choice;
		
		if (choice == 0) {
			cout << "\033[2J\033[0;0H";
			gameSettings.isGame = false;
		} // end the game
			
		else if (choice == 1) 
		{
		  //buyProperties();
		} // buy properties
			
		else if (choice == 5) 
		{
		  player.playerMoney += player.playerIncome;
			cout << player.playerMoney;
		}
	//break;
	}
}

int main() {
	game();
	return 0;
}