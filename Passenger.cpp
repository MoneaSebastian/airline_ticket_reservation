#include <iostream>
#include <iomanip>
#include <string.h>
#include <string>
#include "Passenger.h"

using namespace std;

int reservation = 9999;

Passenger::Passenger()
{
	head = NULL;
}

void Passenger::make_reservation()
{
	passengerNode* temp = new passengerNode;
	Passenger* info = new Passenger;

	cout << "\n\nEnter First Name of person: ";
	cin >> info->fname;
	cout << "\n";

	cout << "Enter Last Name of person: ";
	cin >> info->lname;
	cout << "\n";




	reservation++;
	info->reserve_num = reservation;
	cout << "YOUR RESERVATION NUMBER IS :: " << reservation << "\n\n";

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

void Passenger::cancel_reservation()
{
	int num;
	cout << "Enter your reservation Number here to cancel: ";
	cin >> num;

	passengerNode* cur = head;
	if (cur != NULL)
	{

		if (head->data->reserve_num == num)
		{
			passengerNode* del = head;
			head = head->next;
			delete del;
			return;
		}
		else
		{
			passengerNode* pre, * cur;
			pre = head;
			cur = head->next;
			while (cur != NULL)
			{
				if (cur->data->reserve_num == num)
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

void Passenger::search_passenger()
{
	string name_searched;
	cout << "Please enter your first name here: ";
	cin >> name_searched;

	passengerNode* cur = head;
	while (cur != NULL)
	{
		if (cur->data->fname == name_searched)
		{
			cout << "First Name : " << cur->data->fname << endl;
			cout << "Last Name : " << cur->data->lname << endl;
			cout << "Reservation No. " << cur->data->reserve_num << endl;
			return;
		}
		cur = cur->next;
	}
	cout << " Sorry!!! NOT FOUND \n\n";
}

void Passenger::display_passengers()
{
	temp = head;
	if (temp == NULL)
		cout << " No passagers on this flight." << endl;
	else
	{
		int cnt = 1;
		cout << "\tNumber\t First Name\t Last Name\t Reservation No\t";
		cout << "\n";
		while (temp != NULL)
		{
			cout << "\t" << cnt << setw(15);
			cout << temp->data->fname << setw(15);
			cout << temp->data->lname << setw(15);
			cout << temp->data->reserve_num;
			cout << "\n";
			temp = temp->next;
			cnt++;
		}
		cout << "\n\n";

	}
}
