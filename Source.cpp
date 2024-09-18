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

	cout << "A total of " << purchasedDrink << " customers purchase at least 1 energy drink per week." << endl;
	cout << "Out of these customers, " << likeCitrus << " of them like citrus flavored energy drinks.";

	return 0;
}
