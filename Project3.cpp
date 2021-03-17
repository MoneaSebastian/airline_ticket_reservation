#include <iostream>
#include <iomanip>
#include <string.h>
#include <string>
#include "airline.h"

using namespace std;

void passenger_menu(Passenger*obj,const string nam,const string dep,const string dest,const int planeno) //passenger menu
{
	system("CLS");
	cout << "\n\n\t              Welcome To " << nam << " Flight " << planeno << " From " << dep << " To " << dest ;
	cout << "\n\n\t                            MENU OPTIONS\n" << endl;
	int choice;
	Passenger*obj1 = new Passenger;
	do {
		cout << "\n";
		cout << "\t\t             Reserve a ticket      '1' \n";
		cout << "\n";
		cout << "\t\t             Cancel a reservation  '2' \n ";
		cout << " \n";
		cout << "\t\t             Search Passenger      '3' \n";
		cout << "\n";
		cout << "\t\t             Display passengers    '4' \n";
		cout << "\n";
		cout << "\t\t             Quit                  '5' \n ";
		cout << "\n";
		cout << "\n\t        Option  ";

		cin >> choice;

		switch (choice)	 
		{
		case 1: system("CLS"); obj1->make_reservation();
			break;
		case 2: system("CLS"); obj1->cancel_reservation();
			break;
		case 3: system("CLS"); obj1->search_passenger();
			break;
		case 4: system("CLS"); obj1->display_passengers();
			break;

		}	

		cin.get();
		if (cin.get() == '\n')
			system("CLS");
		cout << "\n\n\t              Welcome TO "<<nam<<" Flight "<<planeno<<" From "<<dep<<" To "<<dest;
		cout << "\n\n\t                            MENU OPTIONS\n" << endl;
	} while (choice != 5);
	
}	

void menu() //airline menu
{
	airline INTERNATIONAL;
	int choice;
	cout << "\n\n\t\t               WELCOME TO INTERNATIONAL FLY PROGRAM";
	cout << "\n\n\t\t                        MENU OPTIONS\n" << endl;
	do {
		cout << "\n";
		cout << "\t\t             Introduce flight data      '1' \n";
		cout << "\n";
		cout << "\t\t             Cancel a flight            '2' \n ";
		cout << " \n";
		cout << "\t\t             Display flights            '3' \n";
		cout << "\n";
		cout << "\t\t             Acces a flight             '4' \n";
		cout << "\n";
		cout << "\t\t             Quit                       '5' \n ";
		cout << "\n";
		cout << "\n\t        Option  ";

		cin >> choice;

		switch (choice)
		{
		case 1: system("CLS"); INTERNATIONAL.set_airline();;
			break;
		case 2: system("CLS"); INTERNATIONAL.cancel_airline();
			break;
		case 3: system("CLS"); INTERNATIONAL.display_airlines();
			break;
		case 4: system("CLS"); INTERNATIONAL.acces_airline();
			break;
		}

		cin.get();
		if (cin.get() == '\n')
			system("CLS");
		cout << "\n\n\t\t               WELCOME TO INTERNATIONAL FLY PROGRAM";
		cout << "\n\n\t\t                        MENU OPTIONS\n" << endl;

	} while (choice != 5);

}

int main() //main function
{
	system("CLS");	


	menu();

	return 0;


}