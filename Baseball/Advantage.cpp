#include <fstream>
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

void pitcher_results();
void hitter_results();
void randomize();
int random(int Max);

int pitcher()
{
	string first_name_p, last_name_p, position_p, handedness_p;
	int control_p, ip_p, value_points_p;
	int pop_up_p, strike_out_p, ground_ball_out_p, fly_ball_out_p, walk_p, single_p, d0uble_p, home_run_p;

	ifstream pitcher_stats_file("pitcher stats file.txt");
	if (!pitcher_stats_file.is_open())
	{
		cout << "File failed to open" << endl;
	}



	if (pitcher_stats_file.is_open())
	{
		while (pitcher_stats_file.good())
		{
			pitcher_stats_file >> first_name_p;
			pitcher_stats_file >> last_name_p;
			pitcher_stats_file >> position_p;
			pitcher_stats_file >> handedness_p;
			pitcher_stats_file >> control_p;
			pitcher_stats_file >> ip_p;
			pitcher_stats_file >> value_points_p;
			pitcher_stats_file >> pop_up_p;
			pitcher_stats_file >> strike_out_p;
			pitcher_stats_file >> ground_ball_out_p;
			pitcher_stats_file >> fly_ball_out_p;
			pitcher_stats_file >> walk_p;
			pitcher_stats_file >> single_p;
			pitcher_stats_file >> d0uble_p;
			pitcher_stats_file >> home_run_p;
		}
	}

	return control_p;
}

int hitter()
{
	ifstream hitter_stats_file("hitter stats file.txt");
	if (!hitter_stats_file.is_open())
	{
		cout << "File failed to open" << endl;
	}

	string first_name_h, last_name_h, position_h, handedness_h;
	int on_base_h, speed_h, defense_h, value_points_h;
	int strike_out_h, ground_ball_out_h, fly_ball_out_h, walk_h, single_h, single_plus_h, d0uble_h, triple_h, home_run_h;

	if (hitter_stats_file.is_open())
	{
		while (hitter_stats_file.good())
		{
			hitter_stats_file >> first_name_h;
			hitter_stats_file >> last_name_h;
			hitter_stats_file >> position_h;
			hitter_stats_file >> handedness_h;
			hitter_stats_file >> on_base_h;
			hitter_stats_file >> speed_h;
			hitter_stats_file >> defense_h;
			hitter_stats_file >> value_points_h;
			hitter_stats_file >> strike_out_h;
			hitter_stats_file >> ground_ball_out_h;
			hitter_stats_file >> fly_ball_out_h;
			hitter_stats_file >> walk_h;
			hitter_stats_file >> single_h;
			hitter_stats_file >> single_plus_h;
			hitter_stats_file >> d0uble_h;
			hitter_stats_file >> triple_h;
			hitter_stats_file >> home_run_h;
		}
	}

	return on_base_h;
}

int pitcher_advantage()
{
	randomize();
	int roll = random(20);

	int p = pitcher() + roll;
	int h = hitter();

	if (p >= h)
	{
		cout << "Pitcher rolls a " << roll << "." << endl;
		cout << "Pitcher rolls the advantage, odds will be based on pitcher stats" << endl;
		return 1;
	}

	else
	{
		cout << "Pitcher rolls a " << roll << "." << endl;
		cout << "Hitter gets the advantage, odds will be based on hitter stats" << endl;
		return 0;
	}
}

void instructions_advantage()
{
	cout << "Press Enter to roll the die to see who has the advantage" << endl;
	cout << " " << endl;

	pitcher_advantage();

	if (pitcher_advantage() == 1)
	{
		pitcher_results();
	}

	if (pitcher_advantage() == 0)
	{
		hitter_results();
	}
}

//, first_name, last_name, position, handedness, on_base, speed, defense, value_points, strike_out, ground_ball_out, fly_ball_out, walk, single, single_plus, d0uble, triple, home_run

//string first_name, string last_name, string position, string handedness, int on_base, int speed, int defense, int value_points, int strike_out, int ground_ball_out, int fly_ball_out, int walk, int single, int single_plus, int d0uble, int triple, int home_run