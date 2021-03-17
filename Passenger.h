#pragma once
#include <iostream>
#include <iomanip>
#include <string.h>
#include <string>

using namespace std;
struct passengerNode;

class Passenger {
public:
	Passenger();
	void make_reservation();
	void cancel_reservation();
	void search_passenger();
	void display_passengers();

private:

	string fname;
	string lname;
	int reserve_num;

	passengerNode* head, * temp, * crt;


};

struct passengerNode
{
	Passenger* data;
	passengerNode* next;

};