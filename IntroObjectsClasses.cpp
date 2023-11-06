#include <iostream>

using namespace std;

class User{
	public:
	string userName;
	string type;
	int hp;
	int mp;
	int level;	
	int exp;
	
};

int main(){
	
	//accessing object User or creating an object
	User playerOne;
	playerOne.userName = "Player 1";
	playerOne.type = "Tank";
	playerOne.hp = 100;
	playerOne.mp = 25;
	playerOne.exp = 10;
	
	User playerTwo;
	playerTwo.userName = "Player 2";
	playerTwo.type = "Support";
	playerTwo.hp = 100;
	playerTwo.mp = 10;
	playerTwo.exp = 50;
	
	//printing a property of an Object
	cout<<playerOne.userName;
	
	return 0;
}
