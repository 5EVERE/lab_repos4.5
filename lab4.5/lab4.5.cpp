#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));

		for (int i = 0; i < 10; i++)
		{


			cout << "R = "; cin >> R;


			x = 2. * R * rand() / RAND_MAX - R;
			y = 2. * R * rand() / RAND_MAX - R;

			if (((x * x) + (y * y) <= R * R && y >= 0) ||
				(y <= 0 && y <= x && y >= -R))

				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;

			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}
