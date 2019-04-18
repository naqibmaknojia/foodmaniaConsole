#include<iostream>
#include<conio.h>
#include<string.h>
#include <vector>
#include<fstream>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include "food_mania.h"
using namespace std; 

int main_menu(){
	system("cls");
	int choice;
	
	cout<<"                        WELCOME TO FOOD MANIA\n"<<endl;
	cout<<" \t\tUSER CORNER\t\t\n";
	            
					location l1;
			    	user u1(&l1);
				    u1.input();
				    system("cls");
				    u1.display();
	cout<<endl;
	cout<<"----_____----PRESS YOR DESIRED OPTION----_____----"<<endl;
	cout<<endl;
	cout<<"\t1-> ORDER YOUR FOOD"<<endl;
	cout<<"\t2-> EXIT";
	
	cin>>choice;
	
	switch(choice){
		case 1:
			system("cls");
			cout<<"                  FOOD MANIA"<<endl;
			cout<<endl;
			cout<<"----_____----PRESS YOR DESIRED OPTION----_____----"<<endl;
			cout<<"1.CHOOCE YOUR RESTURENT"<<endl;
			cout<<"2.CHOOCE YOUR FOOD BY CATOGARY"<<endl;
			cout<<"0.BACK TO MAIN";
			int b_choice;
			cin>>b_choice;
			
			if(b_choice==1){
				system("cls");
				cout<<"                  FOOD MANIA"<<endl;
			cout<<endl;
			cout<<"----_____----PRESS YOR DESIRED OPTION----_____----"<<endl;
			
				restuarant r;
				starter s;
				main m;
				desert d;
				r.display();
				r.choose_resturant();
				r.bill();
				
				
					
		
				
				cout<<"press 0 for back to main menu"<<endl;
				cin>>b_choice;
				if (b_choice==0)
					main_menu();}
			else{
				system("cls");
				if (b_choice==2){
					cout<<"you will place your order by catogary here"<<endl;
					starter s;
					main m;
					desert d;
					restuarant r;
					r.choosefood(&s,&m,&d);
					r.byfoodbill();
					
					cout<<"\n\npress 0 for back to main menu"<<endl;
						cin>>b_choice;
				if (b_choice==0)
					main_menu();
					
				}
				else{
					if (b_choice==0){
						main_menu();
					}else{
						system("cls");
						while (b_choice!=0){
						system("cls");
						cout<<"                  FOOD MANIA"<<endl;
						cout<<endl;
						cout<<"*******INVALID CHOICE*****"<<endl;
						cout<<"PRESS 0 TO BACK"<<endl;
						cin>>b_choice;
					}
					main_menu();
				}
			}			
		}
			
		break;
		case 2:
			char B_choice;
			cout<<"\tARE YOU SURE YOU WANT TO CLOSE THE PROGRAMME\n\tPRESS Y FOR YES\n\tPRESS N FOR NO"<<endl;
			cin>>B_choice;
			if (B_choice=='y'||B_choice=='Y'){
				system("cls");
				return 0;
			}else{
				if (B_choice=='n'||B_choice=='N'){
				main_menu();
				}
				else{
					cout<<"********INVLAID CHOICE********"<<endl;
					main_menu();
				}
			}
		break;
		default:
			cout<<"********INVLAID CHOICE********"<<endl;
			main_menu();
	}
}
int main(){
	system("color f1");
	main_menu();
}





