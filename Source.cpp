// Calculate percentages based on energy drink consumers

#include <iostream>
using namespace std;

int main()
{
	//setting up variables
	int purchasedDrink, likeCitrus, CUSTOMERS_SURVEYED;
	CUSTOMERS_SURVEYED = 16500;
	double purchasedDrinkPercent, likeCitrusPercent;
	purchasedDrinkPercent = 0.15;
	likeCitrusPercent = 0.58;

	//calculating with percentages
	purchasedDrink = CUSTOMERS_SURVEYED * purchasedDrinkPercent;
	likeCitrus = purchasedDrink * likeCitrusPercent;

	cout << purchasedDrink << endl;
	cout << likeCitrus;

	return 0;
}