//Lab 10.2
#include<stdio.h>
#include<string.h>
struct player{
	int player_id;
	char name [50];
	int age;
	char favorite_game[50];
};
int main(){
	//create Player_1
	struct player Player_1={1,"Mark",25,"Football");
	//create Player_2
	struct player Player_2;
	//copy data from Player_1 to Player_2
	Player_2.player_id = Player_1.player_id;
	strcpy(Player_2.name, Player_1.name);
	Player_2.age = Player_1.age;
	strcpy(Player_2.favorite_game, Player_1.favorite_game);
	//display the details of player_2
	printf("Player ID:%d\n",Player_2.player_id);
	printf("Name: %s\n",Player_2.name);
	printf("Age:%d\n", Player_2.age);
	printf("Favourite Game:%s\n",Player_2.favorite_game);
	return 0;
	};
}