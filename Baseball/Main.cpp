#include <ctime>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;


void instructions();
void enter_hitter_OR_pitcher();
void new_players_or_game();
void greeting();
void randomize();
int random(int Max);
void play_as_hitter_OR_pitcher();

string random_name()
{
    randomize();
    int roll = random(6);

    switch (roll)
    {
    case 1:
        return "Bombers";

    case 2:
        return "Moonshots";

    case 3:
        return "Rally Caps";

    case 4:
        return "Strikeout Artists";

    case 5:
        return "Hall of Flamers";

    case 6:
        return "Curve Balls";
    }
}

class team
{
    string game_name = random_name();

public:

    char first_letter;
    char second_letter;
    string get_game_name()
    {
        return game_name;
    }

};



int main()
{
    greeting();

	new_players_or_game();

    team team_name;

    cout << "Enter the first letter of your FIRST name" << endl;
    cin >> team_name.first_letter;
    cout << "Enter the first letter of your SECOND name" << endl;
    cin >> team_name.second_letter;
    cout << " " << endl;
    cout << "Your team name is: " << team_name.first_letter << " " << team_name.second_letter << " " << team_name.get_game_name() << endl;

    play_as_hitter_OR_pitcher();

	

	

	return 0;
}
