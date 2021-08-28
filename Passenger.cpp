
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
#include <fstream>
#include"Passenger.h"
#include"flight.h"
using namespace std;

Passenger :: Passenger()
{
	name="";
	address="";
	phone="";
}
void Passenger ::display()
{
   string id;
	string password;
	cout<<"Enter ID :";
	for (int i=0;i<6;i++)
	{
		id += getch();
  		cout<<"*";
	}
	cout<<endl<<"Enter Password !:";
	for (int i=0;i<6;i++)
	{
		password+= getch();
		cout<<"*";
	}
	if((password=="SLA786" && id=="manesh") )
	{
					
		int f,flag,i=1;
		string x;
		cout<<endl<<"Enter flight code: ";
		cin>>f;
		if(f==1021)
		{
			cout<<"\t"<<"Name"<<"\t"<<"Address"<<"\t\t"<<"Phone Number"<<endl;
			ifstream fin("1021.txt");
			while (getline(fin,x)) 
			{
	        	cout<<i<<".\t" << x << endl ;
	        	i++;
	    	}
		
		}
		else if(f==777)
		{
		cout<<"\t"<<"Name"<<"\t"<<"Address"<<"\t\t"<<"Phone Number"<<endl;
		ifstream fin("777.txt");
			while (getline(fin,x)) 
			{
	        	cout<<i<<"."<<"\t"<< x << endl ;
	        	i++;
	    	}
		
		}
		else if(f==6667)
		{
		cout<<"\t"<<"Name"<<"\t"<<"Address"<<"\t\t"<<"Phone Number"<<endl;
			ifstream fin("6667.txt");
			while (getline(fin,x)) 
			{
	        	cout<< i <<"."<<"\t"<< x << endl ;
	    		i++;
			}
		
		}
		else
		{
			flag=0;
		}
	
		if(flag==0)
		{
			cout<<endl<<" Sorry no flight found....!!";
		}
		if(i==1)
   		{
    		cout<<endl<<"No Data found";
		}
					
		cout<<endl<<" Do you want to delete any record?? (Y/N)";
		char ch;
	cin>>ch;
		if(ch=='Y')
		{
			delete_rec(&f);
		}

	
	cout<<endl<<endl<<" Press any key to continue....!!";
		getch();
	}
	else
	{
	cout<<std::endl<<"Enter valid ID and Password";
		getch();
		system("cls");
	}
}

void Passenger ::delete_rec(int *a)
{
	string line;
	int lineNumber=0, deleteline,flag=0;
ifstream fin;
  ofstream temp;
	temp.open("temp.txt");
	if(*a==1021)
	{
	    fin.open("1021.txt");
	}
	else if(*a==6667)
	{
	    fin.open("6667.txt");
		
	}
	else if(*a==777)
	{
	    fin.open("777.txt");	
	}

   cout << "Enter the line number you want to remove : ";
   cin >> deleteline;
    while (getline(fin,line))
    {
    	lineNumber++;
        if (lineNumber != deleteline)
        {
            temp << line << endl;
            flag++;
        }

    }
    temp.close();
    fin.close();
    
    if(*a==1021)
	{
	    remove("1021.txt");
	    rename("temp.txt","1021.txt");
	}
	else if(*a==6667)
	{
	    remove("6667.txt");
	    rename("temp.txt","6667.txt");
		
	}
	else if(*a==777)
	{
	    remove("777.txt");
	    rename("temp.txt","777.txt");
	}
    cout <<endl<<endl<<endl;
}
void Passenger ::main_menu()
{
	int choice;
	while(choice!=6)
	{
		cout<< endl<<"\t"<<"\t"<<"\t"<<"\t"<<""<<"*************";
		cout<< endl<<"\t"<<"\t"<<"\t"<<"\t"<<"* MAIN MENU *";
		cout<< endl<<"\t"<<"\t"<<"\t"<<"\t"<<"*************";
		cout<< endl<<endl<<endl<<"\t"<<"\t"<<"\t"<<"1.View Flights";
		cout<< endl<<"\t"<<"\t"<<"\t"<<"2.Book A Ticket";
		cout<< endl<<"\t"<<"\t"<<"\t"<<"3.Flight Data (protected)";
		cout<< endl<<"\t"<<"\t"<<"\t"<<"4.Exit";
		cout<< endl<<"\t"<<"\t"<<"\t"<<"5.Help!";
		cout<< endl<<endl<<"\t"<<"\t"<<"\t"<<"Enter Your Choice: ";
		cin>>choice;

		switch(choice)
		{
			case 1:	view();
				break;
			case 2: add();
				break;
			case 3: 
				display();	
				break;

			case 4: 
				exit(0);
			case 5:
				help();
				break;
			default:
				{
					cout<<endl<<endl<<"\t"<<"\t"<<"\t"<<"Wrong choice.....!!!";
					cout<<endl<<"\t"<<"\t"<<"\t"<<"Press any key to continue....!!";
					getch();
					system("cls");
				}
		}
	}
}

void Passenger::add()
{
	int f;
cout<<endl<<"Enter Passenger Details";
	cout<<endl<<" ----------------------";
	cout<<endl<<endl<<" Flight code: ";
	cin>>f;
	flightCode=f;
	if(flightCode==1021)
	{
		ofstream fout("1021.txt",ios::app);
	cout<<" Name: ";
	cin>>name;
		cout<<" Address: ";
		cin>>address;
		cout<<" Phone No: ";
	cin>>phone;
		fout<<name<<"\t"<<""<<address<<"\t\t"<<phone<<std::endl;
		cout<<std::endl<<" Ticket is booked...!!!";	
	}
	else if(flightCode==777)
	{
		ofstream fout("777.txt",ios::app);
		cout<<" Name: ";
		cin>>name;
		cout<<" Address: ";
		cin>>address;
		cout<<" Phone No: ";
		cin>>phone;
		fout<<name<<"\t"<<address<<"\t\t"<<phone<<endl;
		cout<<endl<<" Ticket is booked...!!!";	
	}
	else if(flightCode==6667)
	{
	ofstream fout("6667.txt",std::ios::app);
	cout<<" Name: ";
	//	std::getline (std::cin,name);
		cin>>name;
		cout<<" Address: ";
		cin>>address;
		cout<<" Phone No: ";
		cin>>phone;
		fout<<name<<"\t"<<address<<"\t\t"<<phone<<endl;
		cout<<endl<<" Ticket is booked...!!!";
		cout<<endl;
		cout<<"Thank you for booking a ticket"<<endl;
		cout<<"Have a safe flight :)"<<endl;	
	}
	else
	{
	cout<<"Enter Valid flight code"<<endl;
	}

	cout<<endl<<" Press any key to continue.....!!";
	getch();
}
void Passenger::help(){
	cout<<"If you wanted to view the flight timmings press(1) "<<endl;
	cout<<"If you wanted to book a trip press (2) "<<endl;
	cout<<"If you wanted to view the constumer profile then press (3)"<<endl;
	cout<<"If you wanted to QUIT then press (4)"<<endl;
	cout<<"If you wanted further information then call to the given numbers"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"SYED ASAD HASHMI: 03153133787"<<endl;
	cout<<"MUHAMMAD LARAIB IRFAN: 03122688145"<<endl;
	cout<<"SAMEER ABRAR"<<endl;
	cout<<endl;
	cout<<endl;
	
}



