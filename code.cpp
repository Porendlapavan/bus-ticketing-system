#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<string>
using namespace std;
string str,pswd,loc;
int i,j,k,len=0,c1;
string na;
int age1;
int seat1;
char st;
struct login
{
	string n,pass;
};
struct bus
{
	string name;
	int age;
	int seat;
	char seat_type;
	char book_status;
};
struct bus b1[32];
struct bus b2[32];
struct bus b3[32];
struct bus b4[32];
struct bus b5[32];
struct login l[1];
void create_user()
{
	l[0].n="Sravya";
	l[0].pass="1234";
	
}
int booking()
{
	int z1;
	char ch5;
	printf("\n");
	cout<<"Enter name : ";
	cin>>na;
	cout<<"Enter age : ";
	cin>>age1;
	cout<<"Enter seat no : ";
	cin>>seat1;
	if( b1[seat1-1].book_status=='B'){
		cout<<"Seat already booked try with another seat";	
		booking();
	}
	if( b2[seat1-1].book_status=='B' ){
		cout<<"Seat already booked try with another seat";	
		booking();	
	}
	if( b3[seat1-1].book_status=='B' ){
		cout<<"Seat already booked try with another seat";	
		booking();	
	}
	if( b4[seat1-1].book_status=='B' ){
		cout<<"Seat already booked try with another seat";	
		booking();
	}
	if( b5[seat1-1].book_status=='B' ){
		cout<<"Seat already booked try with another seat";	
		booking();	
	}
	if((seat1%4==1)||(seat1%4==0))
		st='W';
	else
		st='A';
	//cout<<st;
	printf("\n");
	return seat1;
}
void hyd()
{
	int c2=1,seat2;
	int choice;
	char ch5;
	while(1){
	cout<<"Welcome to bus booking depo"<<endl;
	cout<<"This bus is enrouted from "<<loc<<" -> Hyderabad"<<endl;
	cout<<"\nEnter your choice : "<<endl;
	cout<<"1. Print Ticket \t 2. Book ticket \t 3. Go Back to Main Menu"<<endl;
	cin>>choice;
	if(choice==1)
	{
		cout<<"Enter your seat no : ";
		cin>>seat2;
		seat2--;
		int test=b1[seat2].seat+1;
		cout<<"Name : "<<b1[seat2].name<<endl;
		cout<<"Age : "<<b1[seat2].age<<endl;
		cout<<"Seat : "<<test<<endl;
		cout<<"Seat Type : "<<b1[seat2].seat_type<<endl;
		cout<<"Booking Status : "<<b1[seat2].book_status<<endl;
		printf("\n");
	}
	else if(choice==2){
		c2=1;
	for(int z1=0;z1<32;z1++)
	{
		if(z1%4==0)
		{
			printf("\n");
			do{
				cout<<"\t"<<c2;
				c2++;
			}while(c2%4!=1);
			printf("\n");	
		}
		ch5=b1[z1].book_status;
		cout<<"\t"<<ch5;
	}
	printf("\nEnter the number of tickets you want : ");
	int n;
	cin>>n;
	for(int i2=0;i2<n;i2++)
	{
		cout<<"Booking for passeger "<<(i2+1)<<" : \n"<<endl;
		seat2=booking();
		seat2--;
		b1[seat2].age=age1;
		b1[seat2].name=na;
		b1[seat2].seat=seat2;
		b1[seat2].seat_type=st;
		b1[seat2].book_status='B';
	}
	cout<<"The total amount is "<<(n*415)<<"."<<endl;	
	cout<<"Thank you for booking with us."<<endl;
	cout<<"GO to Print ticket in main menu. To get your ticket."<<endl;
	}
	else if(choice==3)
	{
		cout<<"\n Thank you \n"<<endl;
		break;
	}
	}
}
void vskp()
{
	int c2=1,seat2;
	int choice;
	char ch5;
	while(1){
	cout<<"Welcome to bus booking depo"<<endl;
	cout<<"This bus is enrouted from "<<loc<<" -> Vishakhapatnam"<<endl;
	cout<<"\nEnter your choice : "<<endl;
	cout<<"1. Print Ticket \t 2. Book ticket \t 3. Go Back to Main Menu"<<endl;
	cin>>choice;
	if(choice==1)
	{
		cout<<"Enter your seat no : ";
		cin>>seat2;
		seat2--;
		int test=b2[seat2].seat+1;
		cout<<"Name : "<<b2[seat2].name<<endl;
		cout<<"Age : "<<b2[seat2].age<<endl;
		cout<<"Seat : "<<test<<endl;
		cout<<"Seat Type : "<<b2[seat2].seat_type<<endl;
		cout<<"Booking Status : "<<b2[seat2].book_status<<endl;
		printf("\n");
	}
	else if(choice==2){
		c2=1;
	for(int z1=0;z1<32;z1++)
	{
		if(z1%4==0)
		{
			printf("\n");
			do{
				cout<<"\t"<<c2;
				c2++;
			}while(c2%4!=1);
			printf("\n");	
		}
		ch5=b2[z1].book_status;
		cout<<"\t"<<ch5;
	}
	printf("\nEnter the number of tickets you want : ");
	int n;
	cin>>n;
	for(int i2=0;i2<n;i2++)
	{
		cout<<"Booking for passeger "<<(i2+1)<<" : \n"<<endl;
		seat2=booking();
		seat2--;
		b2[seat2].age=age1;
		b2[seat2].name=na;
		b2[seat2].seat=seat2;
		b2[seat2].seat_type=st;
		b2[seat2].book_status='B';
	}
	cout<<"The total amount is "<<(n*415)<<"."<<endl;	
	cout<<"Thank you for booking with us."<<endl;
	cout<<"GO to Print ticket in main menu. To get your ticket."<<endl;
	}
	else if(choice==3)
	{
		cout<<"\n Thank you \n"<<endl;
		break;
	}
	}
}
void sklm()
{
	int c2=1,seat2;
	int choice;
	char ch5;
	while(1){
	cout<<"Welcome to bus booking depo"<<endl;
	cout<<"This bus is enrouted from "<<loc<<" -> Srikakulam"<<endl;
	cout<<"\nEnter your choice : "<<endl;
	cout<<"1. Print Ticket \t 2. Book ticket \t 3. Go Back to Main Menu"<<endl;
	cin>>choice;
	if(choice==1)
	{
		cout<<"Enter your seat no : ";
		cin>>seat2;
		seat2--;
		int test=b3[seat2].seat+1;
		cout<<"Name : "<<b3[seat2].name<<endl;
		cout<<"Age : "<<b3[seat2].age<<endl;
		cout<<"Seat : "<<test<<endl;
		cout<<"Seat Type : "<<b3[seat2].seat_type<<endl;
		cout<<"Booking Status : "<<b3[seat2].book_status<<endl;
		printf("\n");
	}
	else if(choice==2){
		c2=1;
	for(int z1=0;z1<32;z1++)
	{
		if(z1%4==0)
		{
			printf("\n");
			do{
				cout<<"\t"<<c2;
				c2++;
			}while(c2%4!=1);
			printf("\n");	
		}
		ch5=b3[z1].book_status;
		cout<<"\t"<<ch5;
	}
	printf("\nEnter the number of tickets you want : ");
	int n;
	cin>>n;
	for(int i2=0;i2<n;i2++)
	{
		cout<<"Booking for passeger "<<(i2+1)<<" : \n"<<endl;
		seat2=booking();
		seat2--;
		b3[seat2].age=age1;
		b3[seat2].name=na;
		b3[seat2].seat=seat2;
		b3[seat2].seat_type=st;
		b3[seat2].book_status='B';
	}
	cout<<"The total amount is "<<(n*415)<<"."<<endl;	
	cout<<"Thank you for booking with us."<<endl;
	cout<<"GO to Print ticket in main menu. To get your ticket."<<endl;
	}
	else if(choice==3)
	{
		cout<<"\n Thank you \n"<<endl;
		break;
	}
	}
}
void chen()
{
	int c2=1,seat2;
	int choice;
	char ch5;
	while(1){
	cout<<"Welcome to bus booking depo"<<endl;
	cout<<"This bus is enrouted from "<<loc<<" -> Chennai"<<endl;
	cout<<"\nEnter your choice : "<<endl;
	cout<<"1. Print Ticket \t 2. Book ticket \t 3. Go Back to Main Menu"<<endl;
	cin>>choice;
	if(choice==1)
	{
		cout<<"Enter your seat no : ";
		cin>>seat2;
		seat2--;
		int test=b4[seat2].seat+1;
		cout<<"Name : "<<b4[seat2].name<<endl;
		cout<<"Age : "<<b4[seat2].age<<endl;
		cout<<"Seat : "<<test<<endl;
		cout<<"Seat Type : "<<b4[seat2].seat_type<<endl;
		cout<<"Booking Status : "<<b4[seat2].book_status<<endl;
		printf("\n");
	}
	else if(choice==2){
		c2=1;
	for(int z1=0;z1<32;z1++)
	{
		if(z1%4==0)
		{
			printf("\n");
			do{
				cout<<"\t"<<c2;
				c2++;
			}while(c2%4!=1);
			printf("\n");	
		}
		ch5=b3[z1].book_status;
		cout<<"\t"<<ch5;
	}
	printf("\nEnter the number of tickets you want : ");
	int n;
	cin>>n;
	for(int i2=0;i2<n;i2++)
	{
		cout<<"Booking for passeger "<<(i2+1)<<" : \n"<<endl;
		seat2=booking();
		seat2--;
		b4[seat2].age=age1;
		b4[seat2].name=na;
		b4[seat2].seat=seat2;
		b4[seat2].seat_type=st;
		b4[seat2].book_status='B';
	}
	cout<<"The total amount is "<<(n*500)<<"."<<endl;	
	cout<<"Thank you for booking with us."<<endl;
	cout<<"GO to Print ticket in main menu. To get your ticket."<<endl;
	}
	else if(choice==3)
	{
		cout<<"\n Thank you \n"<<endl;
		break;
	}
	}
}
void mum()
{
	int c2=1,seat2;
	int choice;
	char ch5;
	while(1){
	cout<<"Welcome to bus booking depo"<<endl;
	cout<<"This bus is enrouted from "<<loc<<" -> Mumbai"<<endl;
	cout<<"\nEnter your choice : "<<endl;
	cout<<"1. Print Ticket \t 2. Book ticket \t 3. Go Back to Main Menu"<<endl;
	cin>>choice;
	if(choice==1)
	{
		cout<<"Enter your seat no : ";
		cin>>seat2;
		seat2--;
		int test=b5[seat2].seat+1;
		cout<<"Name : "<<b5[seat2].name<<endl;
		cout<<"Age : "<<b5[seat2].age<<endl;
		cout<<"Seat : "<<test<<endl;
		cout<<"Seat Type : "<<b5[seat2].seat_type<<endl;
		cout<<"Booking Status : "<<b5[seat2].book_status<<endl;
		printf("\n");
	}
	else if(choice==2){
		c2=1;
	for(int z1=0;z1<32;z1++)
	{
		if(z1%4==0)
		{
			printf("\n");
			do{
				cout<<"\t"<<c2;
				c2++;
			}while(c2%4!=1);
			printf("\n");	
		}
		ch5=b5[z1].book_status;
		cout<<"\t"<<ch5;
	}
	printf("\nEnter the number of tickets you want : ");
	int n;
	cin>>n;
	for(int i2=0;i2<n;i2++)
	{
		cout<<"Booking for passeger "<<(i2+1)<<" : \n"<<endl;
		seat2=booking();
		seat2--;
		b5[seat2].age=age1;
		b5[seat2].name=na;
		b5[seat2].seat=seat2;
		b5[seat2].seat_type=st;
		b5[seat2].book_status='B';
	}
	cout<<"The total amount is "<<(n*415)<<"."<<endl;	
	cout<<"Thank you for booking with us."<<endl;
	cout<<"GO to Print ticket in main menu. To get your ticket."<<endl;
	}
	else if(choice==3)
	{
		cout<<"\n Thank you \n"<<endl;
		break;
	}
	}
}
void main_menu()
{
	int inp;
	cout<<"********* Welcome to Online Bus Ticketing System ************"<<endl;
	cout<<"Your location : "<<loc<<endl;
	while(1){
	cout<<"Available buses from "<<loc<<" are :"<<endl;
	cout<<"1. Hyderabad"<<endl;
	cout<<"2. Vishakhapatnam"<<endl;
	cout<<"3. Srikakulam"<<endl;
	cout<<"4. Chennai"<<endl;
	cout<<"5. Mumbai"<<endl;
	cout<<"6. Go to Main Menu"<<endl;
	do{
		cout<<"Enter your Location between number 1 and 6"<<endl;
		cin>>inp;
	}while(inp>6);
	if(inp==6)
	 break;
	switch(inp)
	{
		case 1: hyd();
				break;
		case 2: vskp();
				break;
		case 3: sklm();
				break;
		case 4: chen();
				break;
		case 5: mum();
				break;
	}
}
}
void logging_in()
{
	printf("************Welcome to Bus ticket booking system***********\n");
	printf("Enter your user id : ");
	cin>>str;
	char check;
	for(k=0;k<1;k++)
	{
		if(str==l[k].n)
		{
			check='T';
			cout<<"Hello "<<str<<endl;
			c1=1;
			while(c1<=3)
			{
				cout<<"Enter your password : ";
				cin>>pswd;
				if(pswd==l[k].pass)
				 {
				 	cout<<"Login successful"<<endl;
				 	main_menu();
				 	break;
				 }
				else
				{
					cout<<"Try again. You are left with "<<c1<<" chances."<<endl;
					c1++;
				} 
			}
			if(c1>3)
			{
			cout<<"Failed to login. Quit and try again."<<endl;
			}
		}
	}
	if(check!='T')
	cout<<"User not found. Quit and try again."<<endl;
}
void print_list()
{
	int inp,j,c;
	cout<<"Enter the bus list you want to print : "<<endl;
	cout<<"1. Hyderabad"<<endl;
	cout<<"2. Vishakhapatnam"<<endl;
	cout<<"3. Srikakulam"<<endl;
	cout<<"4. Chennai"<<endl;
	cout<<"5. Mumbai"<<endl;
	cout<<"6. Go to Main Menu"<<endl;
	do{
		cout<<"Enter your Location between number 1 and 6"<<endl;
		cin>>inp;
	}while(inp>6);
	printf("The passengers of the bus are : \n");
	c=1;
	if(inp==1)
	{
		cout<<"Bus heading from "<<loc<<" to Hyderabad. Passengers: \n"<<endl;
		for(j=0;j<32;j++)
		{
			if(b1[j].age!=0)
			{
				cout<<"Number "<<c++<<":"<<endl;
				cout<<"Name : "<<b1[j].name<<endl;
				cout<<"Age : "<<b1[j].age<<endl;
				cout<<"Seat : "<<b1[j].seat<<endl;
				printf("\n");
			}
		}
	}
	else if(inp==2)
	{
		cout<<"Bus heading from "<<loc<<" to Vishakhapatnam. Passengers: \n"<<endl;
		for(j=0;j<32;j++)
		{
			if(b2[j].age!=0)
			{
				cout<<"Number "<<c++<<":"<<endl;
				cout<<"Name : "<<b2[j].name<<endl;
				cout<<"Age : "<<b2[j].age<<endl;
				cout<<"Seat : "<<b2[j].seat<<endl;
				printf("\n");
			}
		}
	}
	else if(inp==3)
	{
		cout<<"Bus heading from "<<loc<<" to Srikakaulam. Passengers: \n"<<endl;
		for(j=0;j<32;j++)
		{
			if(b3[j].age!=0)
			{
				cout<<"Number "<<c++<<":"<<endl;
				cout<<"Name : "<<b3[j].name<<endl;
				cout<<"Age : "<<b3[j].age<<endl;
				cout<<"Seat : "<<b3[j].seat<<endl;
				printf("\n");
			}
		}
	}
	else if(inp==4)
	{
		cout<<"Bus heading from "<<loc<<" to Chennai. Passengers: \n"<<endl;
		for(j=0;j<32;j++)
		{
			if(b4[j].age!=0)
			{
				cout<<"Number "<<c++<<":"<<endl;
				cout<<"Name : "<<b4[j].name<<endl;
				cout<<"Age : "<<b4[j].age<<endl;
				cout<<"Seat : "<<b4[j].seat<<endl;
				printf("\n");
			}
		}
	}
	else if(inp==5)
	{
		cout<<"Bus heading from "<<loc<<" to Mumbai. Passengers: \n"<<endl;
		for(j=0;j<32;j++)
		{
			if(b5[j].age!=0)
			{
				cout<<"Number "<<c++<<":"<<endl;
				cout<<"Name : "<<b5[j].name<<endl;
				cout<<"Age : "<<b5[j].age<<endl;
				cout<<"Seat : "<<b5[j].seat<<endl;
				printf("\n");
			}
		}
	}
	if((c-1)==0)
		 cout<<"Empty list"<<endl;
}
int main()
{
	for(int i5=0;i5<32;i5++)
	{
		b1[i5].book_status='E';
		b2[i5].book_status='E';
		b3[i5].book_status='E';
		b4[i5].book_status='E';
		b5[i5].book_status='E';
	}
	create_user();
	cout<<"Welcome to Home "<<str<<".\n";
	cout<<"Enter your Location"<<endl;
	cin>>loc;
	while(1){
	cout<<"Welcome back"<<endl;
	cout<<"Enter your choice : "<<endl;
	cout<<"1. Login through different user \t 2. Get List of passengers \t 3. Close the Booking System"<<endl;
	int ch;
	cin>>ch;
	if(ch==1)
	 logging_in();
	 else if(ch==2)
	  print_list();
	else
	{
		cout<<"Thank you for working with us. Please visit again. Have a pleasent day"<<endl;
		break;	
	}
	}
	 return 0;
}
