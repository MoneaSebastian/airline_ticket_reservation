#include <iostream>
#include <iomanip>
#include <string.h>
#include <string>
#include "airline.h"
using namespace std;

void passenger_menu(Passenger* t, string, string, string, int);

airline::airline()
{
	head = NULL;
}

void airline::acces_airline()
{
	int f_number;
	cout << "Enter the plane number you want to acces ";
	cin >> f_number;


	planeNode* cur = head;
	while (cur != NULL)
	{
		if (cur->data->plane_number == f_number)
		{
			passenger_menu(cur->data->passenger_list, cur->data->name, cur->data->departure, cur->data->destination, cur->data->plane_number);
			return;
		}
		cur = cur->next;
	}
	cout << " Sorry!!! NOT FOUND \n\n";

}

void airline::set_airline()
{
	planeNode* temp = new planeNode;

	planeNode* crt = new planeNode;

	airline* info = new airline;

	cout << "\n\nEnter name of the plane ";
	cin >> info->name;
	cout << "\n";

	cout << "Enter departure place of plane ";
	cin >> info->departure;
	cout << "\n";

	cout << "Enter destination place of plane ";
	cin >> info->destination;
	cout << "\n";

	cout << "Enter plane number ";
	cin >> info->plane_number;
	cout << "\n";

	temp->data = info;
	temp->next = NULL;



	if (head == NULL)
		head = temp;
	else
	{
		crt = head;
		while (crt->next != NULL)
		{
			crt = crt->next;
		}
		crt->next = temp;
	}

}

void airline::display_airlines()
{
	{
		planeNode* temp = new planeNode;
		temp = head;
		if (temp == NULL)
			cout << " No airlines available." << endl;
		else
		{
			int cnt = 1;
			cout << "\tNumber \t    Name\t    Departure\t    Destination\t      Plane no";
			cout << "\n";
			while (temp != NULL)
			{
				cout << "\t" << cnt << setw(15);
				cout << temp->data->name << setw(21);
				cout << temp->data->departure << setw(16);
				cout << temp->data->destination << setw(15);
				cout << temp->data->plane_number;
				cout << "\n";
				temp = temp->next;
				cnt++;
			}
			cout << "\n\n";

		}
	}

}

void airline::cancel_airline()
{
	int flight_number;
	cout << "Enter the number of the airline you want to delete: ";
	cin >> flight_number;

	planeNode* cur = head;
	if (cur != NULL)
	{

		if (head->data->plane_number == flight_number)
		{
			planeNode* del = head;
			head = head->next;
			delete del;
			return;
		}
		else
		{
			planeNode* pre, * cur;
			pre = head;
			cur = head->next;
			while (cur != NULL)
			{
				if (cur->data->plane_number == flight_number)
					break;
				pre = cur;
				cur = cur->next;
			}
			if (cur != NULL)
				pre->next = cur->next;

		}

	}
	else
	{
		cout << "!!! *** Nothing to delete or invalid entry *** !!! \n" << endl;
	}

}