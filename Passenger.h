
/*
NAMES:
    -SYED ASAD HASHMI
    -MUHAMMAD LARAIB IRFAN
    -SAMEER ABRAR KHAN
ROLLNOS:
    -CS161085
    -CS161071
    -CS161113
IDEA BY:
    -MUHAMMAD LARAIB IRFAN
    -SYED ASAD HASMI
    -SAMEER ABRAR KHAN
WRITTEN BY:
    -SYED ASAD HASHMI 
	-MUHAMMAD LARAIB IRFAN 
	-SAMEER ABRAR KHAN 
SIGNETURES:
      - S A H(syed asad hashmi)
      - M L I(muhammad laraib irfan)
      - S A K(sameer abrar khan)
AIR LINE NAME: S L A (-S=sameer
                      -L=laraib
                      -A=asad
                     )
ID:manesh
PASSCODE:SLA786
*/

#ifndef PASSENGER_H
#define PASSENGER_H
#include <iostream>
#include"flight.h"
using namespace std;

class Passenger : public flight
{
	string name;
	string address;
	string phone;
	
	public:
		Passenger();
		void main_menu();		//to dispay the main menu
		void add();			//to book a ticket
		void display(); 	//to display record
		void delete_rec(int *a);		//to delete the record
		void help();
};
#endif
