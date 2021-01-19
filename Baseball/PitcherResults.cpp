#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

void hit_or_pitch_again();

int random(int Max);
void randomize();

void pitcher_results()
{
	randomize();

	int roll = random(20);

	string first_name_p, last_name_p, position_p, handedness_p;
	int control_p, ip_p, value_points_p;
	int pop_up_p, strike_out_p, ground_ball_out_p, fly_ball_out_p, walk_p, single_p, d0uble_p, home_run_p;

	ifstream pitcher_stats_file("pitcher stats file.txt");
	if (!pitcher_stats_file.is_open())
	{
		cout << "File failed to open" << endl;
	}

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
	

	if (roll >= pop_up_p && roll < strike_out_p) // pop up out
	{
		cout << first_name_p << " " << last_name_p << " gives up a pop up out to third base" << endl;
		hit_or_pitch_again();
	}
	else if (roll >= strike_out_p && roll < ground_ball_out_p) // strike out
	{
		cout << first_name_p << " " << last_name_p << " strikes out the batter" << endl;
		hit_or_pitch_again();
	}
	else if (roll >= ground_ball_out_p && roll < fly_ball_out_p) // ground ball out
	{
		cout << first_name_p << " " << last_name_p << " induces a ground ball out!" << endl;
		hit_or_pitch_again();
	}
	else if (roll >= fly_ball_out_p && roll < walk_p) // fly ball out
	{
		cout << first_name_p << " " << last_name_p << " gives up a fly ball out to center." << endl;
		hit_or_pitch_again();
	}
	else if (roll >= walk_p && roll < single_p) // walk
	{
		cout << first_name_p << " " << last_name_p << " walks the batter." << endl;
		hit_or_pitch_again();
	}
	else if (roll >= single_p && roll < d0uble_p) // single
	{
		cout << first_name_p << " " << last_name_p << " gives up a softly hit a single up the middle." << endl;
		hit_or_pitch_again();
	}
	else if (roll >= d0uble_p && roll < home_run_p) // double
	{
		cout << first_name_p << " " << last_name_p << " gives up a hard hit double down the line!" << endl;
		hit_or_pitch_again();
	}	
	else //(roll >= home_run_p) humerun
	{
		cout << first_name_p << " " << last_name_p << " served up a homerun to deep left!!!" << endl;
		hit_or_pitch_again();
	}


}

int pitcherOutTracker()
{

}