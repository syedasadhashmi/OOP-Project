
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
#include<iostream>
#include<string>
#include <conio.h>
#include"flight.h"
using namespace std;


flight :: flight()
{
	flightCode=0;

}

void flight ::view()
{
	cout<<"CODE"<<"\t"<<"ROUTE"<<"\t"<<"\t"<<"\t"<<"TIMINGS";
	cout<<endl<<"1021"<<"\t"<<"KARACHI to ISLAMABAD"<<"\t"<<"06:30";
	cout<<endl<<"777"<<"\t"<<"KARACHI to LAHORE"<<"\t"<<"09:00";
	cout<<endl<<"6667"<<"\t"<<"KARACHI to MULTAN"<<"\t"<<"12:00"<<endl<<endl;
    cout<<endl<<"PRESS ENTER TO CONTINUE"<<endl;
	getch();
}

