#pragma once
#include <iostream>
#include <iomanip>
#include <string.h>
#include <string>
#include "Passenger.h"

using namespace std;
struct planeNode;
class airline {
public:
	airline();
	void set_airline();
	void cancel_airline();
	void display_airlines();
	void acces_airline();


private:
	string name, departure, destination;
	int plane_number;
	Passenger* passenger_list;

	planeNode* head, * temp, * crt;

};

struct planeNode
{
	airline* data;
	planeNode* next;

};