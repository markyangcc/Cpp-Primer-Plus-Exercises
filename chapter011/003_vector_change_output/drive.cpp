#include "vect.cpp"

#include <cstdlib>
#include <ctime>
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

	unsigned long N, highest, lowest, sum;

	cout << "Enter target distance (q to quit): ";
	while (cin >> target)
	{

		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;

		cout << "Enter number of N: ";
		if (!(cin >> N))
			break;

		sum = 0;
		for (unsigned long i = 0; i < N; i++)
		{
			while (result.magval() < target)
			{
				direction = rand() % 360;
				step.set(dstep, direction, 'p');
				result = result + step;
				steps++;
			}

			if (i == 0)
				highest = lowest = steps;

			if (steps > highest)
				highest = steps;
			else if (steps < lowest)
				lowest = steps;

			sum += steps;
			steps = 0;
			result.set(0.0, 0.0);
		}

		cout << endl
			 << "After " << N << " trials:" << endl;
		cout << "Highest: "
			 << highest << endl;
		cout << "Lowest: "
			 << lowest << endl;
		cout << "Average: "
			 << sum / N << endl;

		cout << "Enter target distance (q to quit): ";
	}
	cout << "Bye!\n";

	return 0;
}