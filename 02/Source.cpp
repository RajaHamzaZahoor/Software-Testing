#include<iostream>
#include<Windows.h>
using namespace std;
int checkYourCategory(int age, float income, float totalWealth) {
	if ((age < 70 && income < 3500 && totalWealth < 250000) || (age < 70 && income >= 3500 && totalWealth < 250000))
	{
		return 1;
	}
	else if (age < 70 && income < 3500 && totalWealth >= 250000) {
		return 2;
	}
	else if (age < 70 && income >= 3500 && totalWealth >= 250000) {
		return 3;
	}
	else if (age >= 70 && income >= 3500 && totalWealth >= 250000)
	{
		return 2;
	}
	else {
		return 1;
	}
}
int accountAliveFor(int category, float amount) {
	if (category == 1 && amount < 4000) {
		return 50;
	}
	else if (category == 1 && amount >= 4000) {
		return 30;
	}
	else if (category == 2 && amount < 4000) {
		return 30;
	}
	else if (category == 2 && amount >= 4000) {
		return 20;
	}
	else if (category == 3 && amount < 4000) {
		return 20;
	}
	else
	{
		return 15;
	}
}
int withdrawLimit(int category, float amount) {
	if (category == 1)
		return 1;
	else if (category == 2 && amount < 4000) {
		return 1;
	}
	else if (category == 2 && amount >= 4000) {
		return 5;
	}
	else if (category == 3 && amount < 4000) {
		return 2;
	}
	else
	{
		return 24;
	}
}

void main()
{
	int age = 0, category = 0, ch;
	float amount = 0.0, income = 0.0, totalWealth = 0.0;
	char exit;
	do
	{
		system("cls");
		cout << "Press 1 to Check Your Category\nPress 2 to check Remaining days of your Account\nPress 3 to Check Time limit for Withdraw\n Choose # : ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "Enter Your Age : "; cin >> age;
			if (age >= 55 && age <= 85)
			{
				cout << "Enter Your Income : "; cin >> income;
				if (income >= 0 && income <= 7000) {
					cout << "Enter Your Total Wealth : "; cin >> totalWealth;
					if (totalWealth >= 0 && totalWealth <= 500000) {
						cout << "Your category is : " << checkYourCategory(age, income, totalWealth) << endl;
					}
					else
						cout << "You are not valid for this Program" << endl;
				}
				else
					cout << "You are not valid for this Program" << endl;

			}
			else
			{
				cout << "You are not valid for this Program" << endl;
			}
			break;
		case 2:
			cout << "Enter Your category : "; cin >> category;
			if (category > 0 && category <= 3) {
				cout << "How much Amount you have Account : "; cin >> amount;
				if (amount >= 0 && amount <= 12000) {
					cout << "Your Account is Alive for : " << accountAliveFor(category, amount) <<" days"<< endl;
				}
				else
				{
					cout << "Your entered Amount is invalid for this type of account OR Your Account is suspended" << endl;
				}
			}
			else
				cout << "Invalid category is entered" << endl;
			break;
		case 3:
			cout << "Enter Your category : "; cin >> category;
			if (category > 0 && category <= 3) {
				cout << "How much Amount you Withdrawn last : "; cin >> amount;
				if (amount >= 0 && amount <= 12000) {
					cout << "Your can Withdraw amount after : " << withdrawLimit(category, amount) << " hour(s)" << endl;
				}
				else
				{
					cout << "Your entered Amount is invalid for this type of account OR Your Account is suspended" << endl;
				}
			}
			else
				cout << "Invalid category is entered" << endl;
			break;
		default:
			cout << "Invalid Option" << endl;
			
			//system("_sleep(1000)");
		}
		Sleep(2000);
		cout << "Press t to terminate program : "; cin >> exit;
	} while (exit != 't' && exit != 'T');

}