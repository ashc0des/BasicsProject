// Calculate distance per tank of gas

#include <iostream>

using namespace std;

int main()
{
	//setting up variables
	int gallonsPerTank = 20;
	double milesTown, milesHighway, distanceTown, distanceHighway;
	milesTown = 23.5;
	milesHighway = 28.9;

	//calculating total distance
	distanceTown = gallonsPerTank * milesTown;
	distanceHighway = gallonsPerTank * milesHighway;

	//printing values to console
	cout << "The total distance the car can travel in town is " << distanceTown << " miles." << endl;
	cout << "The total distance the car can travel on the highway is " << distanceHighway << " miles.";
	return 0;
}