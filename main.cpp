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
		int day = 1;
		oxygenCount = 100;
		wasteCount = 0;
		bool missionSuccess = true;
		cout << "Running Simulation" << endl;
		
		while (day <= missionLength)
		{
			cout << "Day " << day << " of 10: " << endl;
			cout << "     " << foodGrown_PerDay << " units of food grown" << endl;
			cout << "     " << foodConsumed_PerPersonPerDay << " units of food consumed" << endl;
			cout << "     " << endl;
			cout << "     " << wasteCreated_PerPersonPerDay << " units of waste created" << endl;
			cout << "     " << cleanup_PerPersonPerDay << " units of waste cleaned up" << endl;
			cout << "     " << endl;
			cout << "     " << oxygenCreated_PerDay << " units of oxygen produced" << endl;
			cout << "     " << oxygenUsed_PerPersonPerDay << " units oxygen used" << endl;
			cout << "     " << endl;
			
			foodCount = foodGrown_PerDay - (foodConsumed_PerPersonPerDay * peopleCount);
			wasteCount = (wasteCreated_PerPersonPerDay * peopleCount) - (cleanup_PerPersonPerDay * peopleCount);
			oxygenCount = oxygenCreated_PerDay - (oxygenUsed_PerPersonPerDay * peopleCount);

			cout << "Status: " << foodCount << " food, " << wasteCount << " waste, " << oxygenCount << " oxygen. " << endl;
							cout << "----------------------" << endl;

				if (foodCount < 0)
				{
					cout << "Ran out of food" << endl;
					missionSuccess = false;
				}

				if (wasteCount > 20)
				{
					cout << "Too much waste" << endl;
					missionSuccess = false;
				}

				if (oxygenCount < 0)
				{
					cout << "Ran out of oxygen" << endl;
					missionSuccess = false;
				}
				day++;
			}
			if (missionSuccess == true)
			{
				cout << "MISSION SUCCESSFUL" << endl;
			}
			else
			{
				cout << "MISSION FAILED" << endl;
			}
	}
	else if (choice == 3)
	{
		done = true;
	}


	return 0;
}
