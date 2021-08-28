
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
#include <iostream>
#include <conio.h>
#include <fstream>
#include<stdlib.h>
#include "flight.h"
#include "Passenger.h"

int main()
{
	cout<<endl<<"\t"<<"\t"<<"\t"<<"*****************************";
	cout<<endl<<"\t"<<"\t"<<"\t"<<"*  WELLCOME TO SLA AIRLINE  *";
    cout<<endl<<"\t"<<"\t"<<"\t"<<"*****************************";
    cout<<endl;
    cout<<endl;
	cout<<endl<<"\t"<<"\t"<<"\t"<<"****************************";
	cout<<endl<<"\t"<<"\t"<<"\t"<<"* AIRLINE TICKETING SYSTEM *";
    cout<<endl<<"\t"<<"\t"<<"\t"<<"****************************";
    cout<<endl;
    cout<<endl;
    cout<<"                       PLEASE PRESS ENTER TO CONTINUE!!!"                  <<endl;
	Passenger p;
	getch();
	p.main_menu();

}

