#include <ctime>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

void user_import_player_data_h();
void user_import_player_data_p();
void enter_hitter_OR_pitcher();
void instructions();
void pitcher_results();
void hitter_results();

void randomize() // die roll part 1
{
	srand((unsigned)time(NULL));
}

int random(int Max) // die roll part 2
{
	return (rand() % Max) + 1;
}

void greeting()
{
	cout << "Wellcome to the Retro Baseball Simulator" << endl;
	cout << "This simulator is meant to be used with the MLB Showdown collectors card game that was released in 2001" << endl;
	cout << "Press ENTER to continue..." << endl;
	cin.get();
	system("CLS");
}

void new_players_or_game()
{
	int a;

AskQuestion:
	cout << "Do you have new player cards to enter?" << endl;
	cout << " " << endl;
	cout << "Enter (1) for yes" << endl;
	cout << "Enter (2) for no" << endl;
	cin >> a;

	switch (a)
	{
	case 1:
		system("CLS");
		enter_hitter_OR_pitcher();
		break;

	case 2:
		system("CLS");
		cout << "No new player cards to enter, lets play ball!" << endl;
		cout << " " << endl;
		cin.get();
		break;

	default:
		cout << "Invalad option" << endl;
		goto AskQuestion;
	}
}

void enter_hitter_OR_pitcher()
{
AskQuestion:
	int a;
	cout << "Do you have a hitter or a pitcher player card to enter?" << endl;
	cout << "Enter (1) for hitter" << endl;
	cout << "Enter (2) for pitcher" << endl;
	cin >> a;

	switch (a)
	{
	case 1:
		system("CLS");
		instructions();
		system("CLS");
		user_import_player_data_h();
		break;

	case 2:
		system("CLS");
		instructions();
		system("CLS");
		user_import_player_data_p();
		break;

	default:
		goto AskQuestion;
	}
}

void instructions()
{
	cout << "You will now begin to enter your player's stats from your MLB Showdown card" << endl;
	cout << "Press enter to proceed...";
	cin.get();
	system("CLS");
}

void play_as_hitter_OR_pitcher()
{
	AskQuestion:
	int a;

	cout << "Would you like to play as a hitter or pictcher?" << endl;
	cout << " " << endl;
	cout << "Press (1) for hitter" << endl;
	cout << "Press (2) for pitcher" << endl;
	cin >> a;

	if (a == 1)
	{
		hitter_results();
	}

	else if (a == 2)
	{
		pitcher_results();
	}

	else
	{
		cout << "Invalid response" << endl;
		goto AskQuestion;
	}
}

void pitch_or_hit_again()
{
AskQuestion:
	int a;

	cout << "Would you like to hit again, or pitch?" << endl;
	cout << " " << endl;
	cout << "Press (1) to hit" << endl;
	cout << "Press (2) to pitch" << endl;
	cout << "Press (3) to exit game" << endl;
	cin >> a;

	switch (a)
	{
	case 1:
		hitter_results(); 
		break;

	case 2:
		pitcher_results();
		break;

	case 3:
		break;

	default:
		cout << "Invalad response" << endl;
		system("CLS");
		goto AskQuestion;
	}
}

void hit_or_pitch_again()
{
AskQuestion:
	int a;

	cout << "Would you like to pitch again, or hit?" << endl;
	cout << " " << endl;
	cout << "Press (1) to pitch" << endl;
	cout << "Press (2) to hit" << endl;
	cout << "Press (3) to exit game" << endl;
	cin >> a;

	switch (a)
	{
	case 1:
		pitcher_results();
		break;

	case 2:
		hitter_results();
		break;

	case 3:
		break;

	default:
		cout << "Invalad response" << endl;
		system("CLS");
		goto AskQuestion;
	}
}