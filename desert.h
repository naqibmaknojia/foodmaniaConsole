#include<iostream>
#include<conio.h>
#include<string.h>
#include <vector>
#include<fstream>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include "maincourse.h"
class desert:public food{
	private:
	string name[10][5];
	int price[10][5];
		vector <string> dfname;
	vector <int> dfprice;
	
	public:
   		desert(){    //filing food name
		}   
		void byfood(){
		fstream myfileee("desertname.txt");
		string line2;
		if(myfileee.is_open()){
			while(getline(myfileee,line2)){
				dfname.push_back(line2);
			}
			myfileee.close();
		}

	}
	void byfod(){     //filing price
		
		string name2;
		ifstream innfile;
		innfile.open("desertprize.txt");
		while(innfile)
		{
			getline(innfile,name2);
			
			int d = atoi(name2.c_str());
			dfprice.push_back(d);
		}
	}	
		void choosefood(int a){
		dsaven[dcounter]=dfname[a-1];
		dsavep[dcounter]=dfprice[a-1];
		dcounter++;
	}	
		void displaybyfood(){
	
		for(int i=0;i<50;i++){
		
			cout<<i+1<<")"<<dfname[i]<<dfprice[i]<<endl<<endl;
		}
		
	}
		
	void list(int a){  //list desert
		switch (a){
		case 1:
		name[0][0]="SHAKES\t";
		name[0][1]="LAVA CAKES\t";
		name[0][2]="PECAN PIE\t";
		name[0][3]="GELATO\t";
		name[0][4]="COKTAIL CUSTARD\t";
		price[0][0]=80;
		price[0][1]=200;
		price[0][2]=250;
		price[0][3]=150;
		price[0][4]=170;
		break;
		case 2:
		name[1][0]="SHAKES\t";
		name[1][1]="ICE CREAM\t";
		name[1][2]="PAVLOVA\t";
		name[1][3]="GELATO\t";
		name[1][4]="COKTAIL CUSTARD\t";
		price[1][0]=90;
		price[1][1]=150;
		price[1][2]=200;
		price[1][3]=150;
		price[1][4]=170;
		break;
		case 3:
		name[2][0]="CUSTARD PIE\t";
		name[2][1]="BLACK FOREST GATAEU\t";
		name[2][2]="SCHAUMROLLE\t";
		name[2][3]="GELATO\t";
		name[2][4]="MILKSHAKES\t";
		price[2][0]=200;
		price[2][1]=250;
		price[2][2]=120;
		price[2][3]=160;
		price[2][4]=100;
		break;
			case 4:
		name[3][0]="ICE CREAM\t";
		name[3][1]="COKTAIL DESERTS\t";
		name[3][2]="MOON CAKE\t ";
		name[3][3]="LAB E SHEREEN\t";
		name[3][4]="GULAAB JAMUN\t";
		price[3][0]=100;
		price[3][1]=150;
		price[3][2]=200;
		price[3][3]=350;
		price[3][4]=250;
		break;
			case 5:
		name[4][0]="MILKSHAKES\t";
		name[4][1]="COKTAIL CUSTARD\t";
		name[4][2]="LAVA CAKES\t";
		name[4][3]="SCHAUMROLLE\t";
		name[4][4]="CUSTARD PIE\t";
		price[4][0]=100;
		price[4][1]=250;
		price[4][2]=200;
		price[4][3]=120;
		price[4][4]=200;
		break;
			case 6:
		name[5][0]="BLACK FOREST GATAEU\t";
		name[5][1]="PECAN PIE\t";
		name[5][2]="COKTAIL CUSTARD\t";
		name[5][3]="GELATO\t";
		name[5][4]="CUSTARD PIE\t";
		price[5][0]=300;
		price[5][1]=200;
		price[5][2]=250;
		price[5][3]=150;
		price[5][4]=170;
		break;
			case 7:
		name[6][0]="PECAN PIE\t";
		name[6][1]="MILKSHAKES\t";
		name[6][2]="BLACK FOREST GATAEU\t";
		name[6][3]="GELATO\t";
		name[6][4]="COKTAIL CUSTARD\t";
		price[6][0]=210;
		price[6][1]=90;
		price[6][2]=250;
		price[6][3]=170;
		price[6][4]=220;
		break;
			case 8:
		name[7][0]="SCHAUMROLLE\t";
		name[7][1]="LAVA CAKES\t";
		name[7][2]="COKTAIL CUSTARD\t";
		name[7][3]="CUSTARD PIE\t";
		name[7][4]="GELATO\t";
		price[7][0]=120;
		price[7][1]=150;
		price[7][2]=250;
		price[7][3]=200;
		price[7][4]=170;
		break;
			case 9:
		name[8][0]="CUSTARD PIE\t";
		name[8][1]="LAVA CAKES\t";
		name[8][2]="COKTAIL CUSTARD\t";
		name[8][3]="SHAKES\t";
		name[8][4]="ICECREAM\t";
		price[8][0]=220;
		price[8][1]=150;
		price[8][2]=250;
		price[8][3]=90;
		price[8][4]=100;
		break;
			case 10:
		name[9][0]="SHAKES\t";
		name[9][1]="BLACK FOREST GATAEU\t";
		name[9][2]="LAVA CAKES\t";
		name[9][3]="GELATO\t";
		name[9][4]="COKTAIL CUSTARD\t";
		price[9][0]=120;
		price[9][1]=220;
		price[9][2]=180;
		price[9][3]=200;
		price[9][4]=300;
		break;
		}
	}
		void safe(int b,int c){

			
			dsaven[dcounter]=name[c-1][b-1];
			dsavep[dcounter]=price[c-1][b-1];
			dcounter++;
			}
	void display(int a){  //displaying desert
		cout<<"\t\tDESERT\n ";
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
