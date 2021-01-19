#include <iostream>
#include <fstream>

using namespace std;

void confirm_and_write_p(string first_name, string last_name, string position, string handedness, int control, int ip, int value_points,
	int pop_up, int strike_out, int ground_ball_out, int fly_ball_out, int walk, int single, int d0uble, int home_run)
{
	ofstream pitcher_stats;
	pitcher_stats.open("pitcher stats file.txt", ios::app);
	//void open(const char* player_stats, ios_base::openmode mode = ios_base::out);

	pitcher_stats << first_name << last_name << position << handedness << control << ip << value_points
		<< pop_up << strike_out << ground_ball_out << fly_ball_out << walk << single << d0uble << home_run << endl;

	pitcher_stats.close();

	cout << "Player information saved" << endl;
	cout << "Press enter to continue... ";
	cin.get();
	system("CLS");
}

int confirm_question_p()
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

int please_review_p(string first_name, string last_name, string position, string handedness, int control, int ip, int value_points,
	int pop_up, int strike_out, int ground_ball_out, int fly_ball_out, int walk, int single, int d0uble, int home_run)
{
	cout << "Please review player information" << endl;
	cout << " " << endl;
	cout << "First name: " << first_name << endl;
	cout << "Last name: " << last_name << endl;
	cout << "Position: " << position << endl;
	cout << "Handedness: " << handedness << endl;
	cout << "On base: " << control << endl;
	cout << "IP: " << ip << endl;
	cout << "Pt: " << value_points << endl;
	cout << "FIRST Out(PU) number: " << pop_up << endl;
	cout << "FIRST Out(SO) number: " << strike_out << endl;
	cout << "FIRST Out(GB) number: " << ground_ball_out << endl;
	cout << "FIRST Walk number: " << walk << endl;
	cout << "First Single number: " << single << endl;
	cout << "FIRST Double number: " << d0uble << endl;
	cout << "FIRST Homer number: " << home_run << endl;

	return confirm_question_p();
}

void additional_players_p()
{
AskQuestion:
	int d;
	void user_import_player_data_p();

	cout << "Do you have additional player cards to enter?" << endl;
	cout << " " << endl;
	cout << "Enter (1) for yes" << endl;
	cout << "Enter (2) for no" << endl;
	cin >> d;

	switch (d)
	{
	case 1:
		user_import_player_data_p();

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

void user_import_player_data_p() // asks user for stat information on MLB Showdown card
{
	//void confirm_and_write();

	string first_name, last_name, position, handedness;
	//int a, b;
	int control, ip, value_points;
	int pop_up, strike_out, ground_ball_out, fly_ball_out, walk, single, d0uble, home_run;

	system("CLS");

	cout << "Please type the players first name ";
	cin >> first_name;

	cout << "Please type the players last name ";
	cin >> last_name;

	cout << "Please type the first letter of " << first_name << " " << last_name << "'s position ";
	cin >> position;

	cout << "Please type the first letter of" << first_name << " " << last_name << "'s handedness (LHP or RHP) ";
	cin >> handedness;

	cout << "Please enter " << first_name << " " << last_name << "'s control number ";
	cin >> control;

	cout << "Please enter " << first_name << " " << last_name << "'s IP (number only) ";
	cin >> ip;

	cout << "Please enter " << first_name << " " << last_name << "'s points (pt.) ";
	cin >> value_points;

	cout << "Please enter " << first_name << " " << last_name << "'s FIRST Out(PU) number (Do not enter second number), Enter 0 for a -- value ";
	cin >> pop_up;

	cout << "Please enter " << first_name << " " << last_name << "'s FIRST Out(SO) number (Do not enter second number) Enter 0 for a -- value ";
	cin >> strike_out;

	cout << "Please enter " << first_name << " " << last_name << "'s FIRST Out(GB) number (Do not enter second number) Enter 0 for a -- value ";
	cin >> ground_ball_out;

	cout << "Please enter " << first_name << " " << last_name << "'s FIRST Out(FB) number (Do not enter second number) Enter 0 for a -- value ";
	cin >> fly_ball_out;

	cout << "Please enter " << first_name << " " << last_name << "'s First Walk number (Do not enter second number) Enter 0 for a -- value ";
	cin >> walk;

	cout << "Please enter " << first_name << " " << last_name << "'s FIRST Single number (Do not enter second number) Enter 0 for a -- value ";
	cin >> single;

	cout << "Please enter " << first_name << " " << last_name << "'s FIRST Double number (Do not enter second number) Enter 0 for a -- value ";
	cin >> d0uble;

	cout << "Please enter " << first_name << " " << last_name << "'s FIRST Homer number (Do not enter second number) Enter 0 for a -- value ";
	cin >> home_run;

	system("CLS");

AskQuestion:
	int b = please_review_p(first_name, last_name, position, handedness, control, ip, value_points, pop_up, strike_out, ground_ball_out, fly_ball_out, walk, single, d0uble, home_run);

	switch (b)
	{
	case 1:
		confirm_and_write_p(first_name, last_name, position, handedness, control, ip, value_points, pop_up, strike_out, ground_ball_out, fly_ball_out, walk, single, d0uble, home_run);
		additional_players_p();
		break;
	case 2:
		user_import_player_data_p();
		break;
	default:
		system("CLS");
		cout << "Invalid option" << endl;
		cout << " " << endl;
		goto AskQuestion;
		break;
	}
}