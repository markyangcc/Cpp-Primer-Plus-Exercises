#include "vect.cpp"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>

int main()
{
	using namespace std;
	using VECTOR::Vector;

	srand(time(0));

	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;

	ofstream f;
	f.open("output_log.txt");

	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;

		f << "Target Distance: " << target << ", Step Size: " << dstep << endl;

		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.set(dstep, direction, 'p');
			result = result + step;
			steps++;
			f << steps << ": " << result << endl;
		}

		result.polar_mode();
		f << "or" << endl
		  << result << endl;
		f << "Average outward distance per step = "
		  << result.magval() / steps << endl;
		steps = 0;
		result.set(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}
	f << "Bye!\n";

	return 0;
}