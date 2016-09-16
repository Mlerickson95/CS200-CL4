#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool done = false;
	const int foodConsumed_PerPersonPerDay = 2;
	const int oxygenCreated_PerDay = 5;
	const int wasteCreated_PerPersonPerDay = 3;
	const int oxygenUsed_PerPersonPerDay = 2;
	int foodGrown_PerDay;
	int cleanup_PerPersonPerDay;
	int foodCount;
	int wasteCount;
	int oxygenCount;
	int peopleCount;
	int missionLength;
	string teamName;
	
	cout << "----------------------\n MARS COLONY MAIN MENU\n 1. Set Mission Parameters\n 2. Run Simulation\n 3. Quit\n ----------------------" << endl;
	cout << "Choice >>" << endl;
	int choice;
	cin >> choice;

	if (choice == 1)
	{
		cout << "Input Parameters." << endl;
		cout << "A. Food grown - per day ............. ";
		cin >> foodGrown_PerDay;
		cout << "B. Cleanup - per person - per day.... ";
		cin >> cleanup_PerPersonPerDay;
		cout << "C. Starting units of food............ ";
		cin >> foodCount;
		cout << "D. Mission length in days............ ";
		cin >> missionLength;
		cout << "E. People on mission................. ";
		cin >> peopleCount;
		cout << "F. Team name......................... ";
		cin >> teamName;
	}
	else if ( choice == 2)
	{
		cout << "Run Simulation" << endl;
	}
	else if (choice == 3)
	{
		done = true;
	}


	return 0;
}
