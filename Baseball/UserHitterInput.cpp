#include <iostream>
#include <fstream>

using namespace std;

void confirm_and_write_h(string first_name, string last_name, string position, string handedness, int on_base, int speed, int defense, int value_points,
	int strike_out, int ground_ball_out, int fly_ball_out, int walk, int single, int single_plus, int d0uble, int triple, int home_run)
{
	ofstream hitter_stats;
	hitter_stats.open("hitter stats file.txt", ios::app);
	//void open(const char* player_stats, ios_base::openmode mode = ios_base::out);

	hitter_stats << first_name << last_name << position << handedness << on_base << speed << defense << value_points
		<< strike_out << ground_ball_out << fly_ball_out << walk << single << single_plus << d0uble << triple << home_run << endl;

	hitter_stats.close();

	cout << "Player information saved" << endl;
	cout << "Press enter to continue... ";
	cin.get();
	system("CLS");
}

int confirm_question_h()
{
	int a;

	cout << " " << endl;
	cout << "Is the information correct?" << endl;
	cout << " " << endl;
	cout << "Enter (1) for yes" << endl;
	cout << "Enter (2) to re-enter player information" << endl;
	cin >> a;
	
	return a;
}

int please_review_h(string first_name, string last_name, string position, string handedness, int on_base, int speed, int defense, int value_points,
	int strike_out, int ground_ball_out, int fly_ball_out, int walk, int single, int single_plus, int d0uble, int triple, int home_run)
{
	cout << "Please review player information" << endl;
	cout << " " << endl;
	cout << "First name: " << first_name << endl;
	cout << "Last name: " << last_name << endl;
	cout << "Position: " << position << endl;
	cout << "Handedness: " << handedness << endl;
	cout << "On base: " << on_base << endl;
	cout << "Speed: " << speed << endl;
	cout << "Defense: " << defense << endl;
	cout << "Pt: " << value_points << endl;
	cout << "FIRST Out(SO) number: " << strike_out << endl;
	cout << "FIRST Out(GB) number: " << ground_ball_out << endl;
	cout << "FIRST Out(FB) number: " << fly_ball_out << endl;
	cout << "FIRST Walk number: " << walk << endl;
	cout << "First Single number: " << single << endl;
	cout << "FIRST Single+ number: " << single_plus << endl;
	cout << "FIRST Double number: " << d0uble << endl;
	cout << "FIRST Triple number: " << triple << endl;
	cout << "FIRST Homer number: " << home_run << endl;

	return confirm_question_h();
}

void additional_players_h()
{
AskQuestion:
	int d;
	void user_import_player_data_h();

	cout << "Do you have additional player cards to enter?" << endl;
	cout << " " << endl;
	cout << "Enter (1) for yes" << endl;
	cout << "Enter (2) for no" << endl;
	cin >> d;

	switch (d)
	{
	case 1:
		user_import_player_data_h();

	case 2:
		system("CLS");
		cout << "No new player cards to enter, lets play ball!" << endl;
		cout << "Press enter to continue...";
		cin.get();

	default:
		cout << "Invalad option" << endl;
		goto AskQuestion;
	}
}

void user_import_player_data_h() // asks user for stat information on MLB Showdown card
{
	//void confirm_and_write();

	string first_name, last_name, position, handedness;
	//int a, b;
	int on_base, speed, defense, value_points;
	int strike_out, ground_ball_out, fly_ball_out, walk, single, single_plus, d0uble, triple, home_run;

	system("CLS");

	cout << "Please type the players first name ";
	cin >> first_name;

	cout << "Please type the players last name ";
	cin >> last_name;

	cout << "Please type the first letter of " << first_name << " " << last_name << "'s position ";
	cin >> position;

	cout << "Please type the first letter of" << first_name << " " << last_name << "'s handedness (L or R) ";
	cin >> handedness;

	cout << "Please enter " << first_name << " " << last_name << "'s on-base number ";
	cin >> on_base;

	cout << "Please enter " << first_name << " " << last_name << "'s speed (number only) located to the right of their position (C/1B/2B/3B/SS/OF/LF/RF) DO NOT INCLUDE + SIGN ";
	cin >> speed;

	cout << "Please enter " << first_name << " " << last_name << "'s defnese number (number only) ";
	cin >> defense;

	cout << "Please enter " << first_name << " " << last_name << "'s points (pt.) ";
	cin >> value_points;

	cout << "Please enter " << first_name << " " << last_name << "'s FIRST Out(SO) number (Do not enter second number), Enter 0 for a -- value ";
	cin >> strike_out;

	cout << "Please enter " << first_name << " " << last_name << "'s FIRST Out(GB) number (Do not enter second number) Enter 0 for a -- value ";
	cin >> ground_ball_out;

	cout << "Please enter " << first_name << " " << last_name << "'s FIRST Out(FB) number (Do not enter second number) Enter 0 for a -- value ";
	cin >> fly_ball_out;

	cout << "Please enter " << first_name << " " << last_name << "'s FIRST Walk number (Do not enter second number) Enter 0 for a -- value ";
	cin >> walk;

	cout << "Please enter " << first_name << " " << last_name << "'s First Single number (Do not enter second number) Enter 0 for a -- value ";
	cin >> single;

	cout << "Please enter " << first_name << " " << last_name << "'s FIRST Single+ number (Do not enter second number) Enter 0 for a -- value ";
	cin >> single_plus;

	cout << "Please enter " << first_name << " " << last_name << "'s FIRST Double number (Do not enter second number) Enter 0 for a -- value ";
	cin >> d0uble;

	cout << "Please enter " << first_name << " " << last_name << "'s FIRST Triple number (Do not enter second number) Enter 0 for a -- value ";
	cin >> triple;

	cout << "Please enter " << first_name << " " << last_name << "'s FIRST Homer number (Do not enter second number) Enter 0 for a -- value ";
	cin >> home_run;

	system("CLS");

	AskQuestion:
	int b = please_review_h(first_name, last_name, position, handedness, on_base, speed, defense, value_points, strike_out, ground_ball_out, fly_ball_out, walk, single, single_plus, d0uble, triple, home_run);

	switch (b)
	{
	case 1:
		confirm_and_write_h(first_name, last_name, position, handedness, on_base, speed, defense, value_points, strike_out, ground_ball_out, fly_ball_out, walk, single, single_plus, d0uble, triple, home_run);
		additional_players_h();
		break;
	case 2:
		user_import_player_data_h();
		break;
	default:
		system("CLS");
		cout << "Invalid option" << endl;
		cout << " " << endl;
		goto AskQuestion;
		break;
	}	
}







/*
	void confirm_player_info(string first_name, string last_name, string position, string handedness, int on_base, int speed, int defense, int value_points,
		int strike_out, int ground_ball_out, int fly_ball_out, int walk, int single, int single_plus, int d0uble, int triple, int home_run)
	{
		int a;

		cout << "Please review player information" << endl;
		cout << " " << endl;

		cout << "First name: " << first_name << endl;
		cout << "Last name: " << last_name << endl;
		cout << "Position: " << position << endl;
		cout << "Handedness: " << handedness << endl;
		cout << "On base: " << on_base << endl;
		cout << "Speed: " << speed << endl;
		cout << "Defense: " << defense << endl;
		cout << "Pt: " << value_points << endl;
		cout << "FIRST Out(SO) number: " << strike_out << endl;
		cout << "FIRST Out(GB) number: " << ground_ball_out << endl;
		cout << "FIRST Out(FB) number: " << fly_ball_out << endl;
		cout << "FIRST Walk number: " << walk << endl;
		cout << "First Single number: " << single << endl;
		cout << "FIRST Single+ number: " << single_plus << endl;
		cout << "FIRST Double number: " << d0uble << endl;
		cout << "FIRST Triple number: " << triple << endl;
		cout << "FIRST Homer number: " << home_run << endl;
		cout << " " << endl;

		cout << "Is the information correct?" << endl;
		cout << " " << endl;

		cout << "Enter (1) for yes" << endl;
		cout << "Enter (2) to re-enter player information" << endl;
		cin >> a;
		system("CLS");

		switch (a)
		{
		case 1:
			ofstream player_stats;
			player_stats.open("player stats file.txt", ios::app);
			//void open(const char* player_stats, ios_base::openmode mode = ios_base::out);

			player_stats << first_name << last_name << position << handedness << on_base << speed << defense << value_points
				<< strike_out << ground_ball_out << fly_ball_out << walk << single << single_plus << d0uble << triple << home_run << endl;

			player_stats.close();

			cout << "Player information saved" << endl;
			cout << "Press enter to continue... ";
			cin.get();
			system("CLS");

		case 2:
			cout << "Re-enter player information" << endl;
			cout << " " << endl;
			user_import_player_data();
			cin.get();
			system("CLS");

		default:
			cout << "Invalid option" << endl;
			cout << "Re-enter player information" << endl;
			cout << " " << endl;
			user_import_player_data();
			cin.get();
			system("CLS");
		}
	}


		if (a == 1)
		{
			ofstream player_stats;
			player_stats.open("player stats file.txt" , ios::app);
			//void open(const char* player_stats, ios_base::openmode mode = ios_base::out);

			player_stats << first_name << last_name << position << handedness << on_base << speed << defense << value_points
				<< strike_out << ground_ball_out << fly_ball_out << walk << single << single_plus << d0uble << triple << home_run << endl;

			player_stats.close();

			cout << "Player information saved" << endl;
			cout << "Press enter to continue... ";
			cin.get();
			system("CLS");
		}

		else
		{
			cout << "No more players to enter, lets begin" << endl;
			cout << "Press enter to continue...";
			cin.get();
			system("CLS");
		}
}
*/