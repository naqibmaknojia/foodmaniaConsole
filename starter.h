#include<iostream>
#include<conio.h>
#include<string.h>
#include <vector>
#include<fstream>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include "food.h"
using namespace std;






class starter:public food{
	private:
string name[10][5];   
int price[10][5];
	int a;
	vector <string> sfname;
	vector <int> sfprice;

public:
	starter(){
	}
		void byfood(){      //filing
		fstream myfile("startername.txt");
		string line;
		if(myfile.is_open()){
			while(getline(myfile,line)){
				sfname.push_back(line);
			}
			myfile.close();
		}
	
				
		
		
		
	}
	void byfod(){   //filing for price
		
		cout<<"HERE";
		string name;
		ifstream infile;
		infile.open("starterprize.txt");
		while(infile)
		{
			getline(infile,name);
			
			int b = atoi(name.c_str());
		
			sfprice.push_back(b);
		}
	
		}
		void choosefood(int a){    //saving food 
		ssaven[scounter]=sfname[a-1];
		ssavep[scounter]=sfprice[a-1];
		scounter++;
	}
	void list(int b){
		a=b;                     //list of food restuarantwise
		switch (a){
		case 1:
			
		name[0][0]="CHICKEN SOUP\t";
		name[0][1]="KABAB\t";
		name[0][2]="CHEESE BALL\t";
		name[0][3]="SALAD\t";
		name[0][4]="CHICKEN WINGS\t";
		price[0][0]=60;
		price[0][1]=50;
		price[0][2]=100;
		price[0][3]=50;
		price[0][4]=100;
		break;
			case 2:
		name[1][0]="CHICKEN SOUP\t";
		name[1][1]="SHAMI KABAB\t ";
		name[1][2]="CHIKEN YAKNEE\t";
		name[1][3]="SALAD\t";
		name[1][4]="CHEEXE ROLLS\t";
		price[1][0]=80;
		price[1][1]=90;
		price[1][2]=20;
		price[1][3]=50;
		price[1][4]=80;
		break;
			case 3:
		name[2][0]="HOT N SOUR SOUP\t";
		name[2][1]="CHEESE BROAST\t";
		name[2][2]="GOLDEN FRIES\t";
		name[2][3]="CHICKEN SANDWICH\t";
		name[2][4]="GARLIC BREADS WITH FRIES\t";
		price[2][0]=120;
		price[2][1]=120;
		price[2][2]=80;
		price[2][3]=120;
		price[2][4]=50;
		break;
			case 4:
		name[3][0]="ITALIAN SALID\t";
		name[3][1]="CHEEXE SALID\t";
		name[3][2]="MACRONIS\t";
		name[3][3]="CHOWMIN\t";
		name[3][4]="RICE BALLS\t";
		price[3][0]=100;
		price[3][1]=80;
		price[3][2]=100;
		price[3][3]=150;
		price[3][4]=90;
		break;
			case 5:
		name[4][0]="ITALIAN SALID\t";
		name[4][1]="CHICKEN WINGS\t";
		name[4][2]="ONION RINGS WITH GARLIC SAUCE\t";
		name[4][3]="CHINECE CORN SOUP\t";
		name[4][4]="HOT N SOUR NUGGETS\t";
		price[4][0]=120;
		price[4][1]=80;
		price[4][2]=100;
		price[4][3]=90;
		price[4][4]=135;
		break;
			case 6:
		name[5][0]="GARLIC BREAD\t";
		name[5][1]="CHEEXE ROLLS\t";
		name[5][2]="CHEEXE FREIS\t";
		name[5][3]="CHICKEN SAUSAGE\t";
		name[5][4]="PEPORONI\t";
		price[5][0]=50;
		price[5][1]=70;
		price[5][2]=80;
		price[5][3]=50;
		price[5][4]=150;
		break;
			case 7:
		name[6][0]="CHIKEN YAKNEE\t";
		name[6][1]="CHEESE BALL\t";
		name[6][2]="ITALIAN SALID\t";
		name[6][3]="CHEEXE ROLLS\t";
		name[6][4]="CHICKEN SANDWICH\t";
		price[6][0]=30;
		price[6][1]=90;
		price[6][2]=120;
		price[6][3]=80;
		price[6][4]=100;
		break;
			case 8:
		name[7][0]="CHICKEN SANDWICH\t";
		name[7][1]="ITALIAN SALID\t";
		name[7][2]="CHEEXE ROLLS\t";
		name[7][3]="CHEESE BALL\t";
		name[7][4]="CHIKEN YAKNEE\t";
		price[7][0]=100;
		price[7][1]=120;
		price[7][2]=80;
		price[7][3]=100;
		price[7][4]=50;
		break;
			case 9:
		name[8][0]="CHEEXE ROLLS\t";
		name[8][1]="CHIKEN YAKNEE\t";
		name[8][2]="SHAMI KABAB \t";
		name[8][3]="ITALIAN SALID\t";
		name[8][4]="CHEEXE ROLLS\t";
		price[8][0]=100;
		price[8][1]=50;
		price[8][2]=80;
		price[8][3]=120;
		price[8][4]=80;
		break;
			case 10:
		name[9][0]="PEPORONI\t";
		name[9][1]="ITALIAN SALID\t";
		name[9][2]="SHAMI KABAB \t";
		name[9][3]="CHEEXE ROLLS\t";
		name[9][4]="CHIKEN YAKNEE\t";
		price[9][0]=150;
		price[9][1]=120;
		price[9][2]=50;
		price[9][3]=80;
		price[9][4]=20;
		break;
		
	}
		
	}
	void safe(int b,int c){    //saving food restuarnt wise

			
			ssaven[scounter]=name[c-1][b-1];
			ssavep[scounter]=price[c-1][b-1];
			scounter++;
			}
	void displaybyfood(){   //display food foodwise
	
		for(int i=0;i<50;i++){
		
			cout<<i+1<<")"<<sfname[i]<<"   "<<sfprice[i]<<endl<<endl;
		}
		
	}	


	void display(int a){     //display menu
		cout<<"\t\t STARTER \n ";
		int b=1;
		switch (a){
		case 1:
		for(int i=0;i<5;i++){
			cout<<b<<") "<<name[0][i]<<"\t"<<price[0][i]<<endl;
			b++;
		}
		break;
		case 2:
		for(int i=0;i<5;i++){
			cout<<b<<") "<<name[1][i]<<"\t"<<price[1][i]<<endl;
			b++;
		}
		break;
		case 3:
		for(int i=0;i<5;i++){
			cout<<b<<") "<<name[2][i]<<"\t"<<price[2][i]<<endl;
			b++;
		}
		break;
		case 4:
		for(int i=0;i<5;i++){
			cout<<b<<") "<<name[3][i]<<"\t"<<price[3][i]<<endl;
			b++;
		}
		break;
		case 5:
		for(int i=0;i<5;i++){
			cout<<b<<") "<<name[4][i]<<"\t"<<price[4][i]<<endl;
			b++;
		}
		break;
		case 6:
		for(int i=0;i<5;i++){
			cout<<b<<") "<<name[5][i]<<"\t"<<price[5][i]<<endl;
			b++;
		}
		break;
		case 7:
		for(int i=0;i<5;i++){
			cout<<b<<") "<<name[6][i]<<"\t"<<price[6][i]<<endl;
			b++;
		}
		break;
		case 8:
		for(int i=0;i<5;i++){
			cout<<b<<") "<<name[7][i]<<"\t"<<price[7][i]<<endl;
			b++;
		}
		break;
		case 9:
		for(int i=0;i<5;i++){
			cout<<b<<") "<<name[8][i]<<"\t"<<price[8][i]<<endl;
			b++;
		}
		break;
		case 10:
		for(int i=0;i<5;i++){
			cout<<b<<") "<<name[9][i]<<"\t"<<price[9][i]<<endl;
			b++;
		}
		break;
	} }
	 
};

