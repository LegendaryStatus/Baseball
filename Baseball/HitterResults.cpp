#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

void play_as_hitter_OR_pitcher();
void pitch_or_hit_again();

int random(int Max);
void randomize();

using namespace std;

void hitter_results()
{
	int roll = random(20);
	int second_roll = random(20);

	string first_name_h, last_name_h, position_h, handedness_h;
	int on_base_h, speed_h, defense_h, value_points_h;
	int strike_out_h, ground_ball_out_h, fly_ball_out_h, walk_h, single_h, single_plus_h, d0uble_h, triple_h, home_run_h;

	ifstream hitter_stats_file("hitter stats file.txt");
	if (!hitter_stats_file.is_open())
	{
		cout << "File failed to open" << endl;
	}

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

	if (roll >= strike_out_h && roll < ground_ball_out_h) // strike out
	{
		cout << first_name_h << " " << last_name_h << " strikes out swinging" << endl;
		pitch_or_hit_again();

	}
	else if (roll >= ground_ball_out_h && roll < fly_ball_out_h) // ground ball out
	{
		cout << first_name_h << " " << last_name_h << " hits a weak ground ball for an out!" << endl;
		pitch_or_hit_again();

	}
	else if (roll >= fly_ball_out_h && roll < walk_h) // fly ball out
	{
		cout << first_name_h << " " << last_name_h << " hits a fly ball out!" << endl;
		pitch_or_hit_again();

	}
	else if (roll >= walk_h && roll < single_h) // walk
	{
		cout << first_name_h << " " << last_name_h << " draws a walk." << endl;
		pitch_or_hit_again();

	}
	else if (roll >= single_h && roll < single_plus_h) // single
	{
		cout << first_name_h << " " << last_name_h << " softly hits a single." << endl;
		pitch_or_hit_again();

	}
	else if (roll >= single_plus_h && roll < d0uble_h) // single plus
	{
		int a;

		cout << first_name_h << " " << last_name_h << " smashes a ball down the third base line" << endl; // user prompt to stay at first or try for a double
		cout << " " << endl;
		cout << "Enter (1) to stay at safe at first" << endl;
		cout << "Enter (2) to try and stretch the hit for a double" << endl;
		cin >> a;

		if (a == 2)
		{
			second_roll;

			if (second_roll >= 13) // double attempt successfull, safe at second
			{
				cout << first_name_h << " " << last_name_h << " SAFE at second!" << endl;
				pitch_or_hit_again();

			}

			else //(second_roll <= 12) double attempt NOT successfull, OUT at second
			{
				cout << first_name_h << " " << last_name_h << " OUT at second!" << endl;
				pitch_or_hit_again();

			}
		}

		else //(a == 1)
		{
			cout << first_name_h << " " << last_name_h << " stays at first" << endl;
			pitch_or_hit_again();


		}

	}
	else if (roll >= d0uble_h && roll < triple_h) // double
	{
		cout << first_name_h << " " << last_name_h << " scortched a double down the line!" << endl;
		pitch_or_hit_again();

	}
	else if (roll >= triple_h && roll < home_run_h) // triple
	{
		cout << first_name_h << " " << last_name_h << " blasts a triple of the center field wall!" << endl;
		pitch_or_hit_again();

	}
	else //(roll >= home_run_h) // humerun
	{
		cout << first_name_h << " " << last_name_h << " SMASHED a homerun!!!" << endl;
		pitch_or_hit_again();

	}
}










/*
void brad_ausmus_a(int roll)
{
	const string name = "Brad Ausmus";

	switch (roll)
	{
	case 1:
		cout << name << " hits a weak ground ball for an out!" << endl; break;
	case 2:
		cout << name << " hits a weak ground ball for an out!" << endl; break;
	case 3:
		cout << name << " hits a fly ball out!" << endl; break;
	case 4:
		cout << name << " draws a walk." << endl; break;
	case 5:
		cout << name << " draws a walk." << endl; break;
	case 6:
		cout << name << " draws a walk." << endl; break;
	case 7:
		cout << name << " draws a walk." << endl; break;
	case 8:
		cout << name << " draws a walk." << endl; break;
	case 9:
		cout << name << " draws a walk." << endl; break;
	case 10:
		cout << name << " draws a walk." << endl; break;
	case 11:
		cout << name << " softly hits a single." << endl; break;
	case 12:
		cout << name << " softly hits a single." << endl; break;
	case 13:
		cout << name << " softly hits a single." << endl; break;
	case 14:
		cout << name << " softly hits a single." << endl; break;
	case 15:
		cout << name << " softly hits a single." << endl; break;
	case 16:
		cout << name << " softly hits a single." << endl; break;
	case 17:
		single_plus(); break;
	case 18:
		cout << name << " Scortched a double down the line!" << endl; break;
	case 19:
		cout << name << " Scortched a double down the line!" << endl; break;
	case 20:
		cout << name << " SMASHED a homerun!!!" << endl; break;
	}
}
*/