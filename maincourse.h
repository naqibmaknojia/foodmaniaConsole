#include<iostream>
#include<conio.h>
#include<string.h>
#include <vector>
#include<fstream>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include "starter.h"
using namespace std;

class main:public food{
	private:
	string name[10][5];
	int price[10][5];
	string sname[10];
	int sprice[10];
	int a;
	friend class restuarant;
	vector <string> mfname;
	vector <int> mfprice;
	public:
		main(){ //filing
		}
		void byfood()
		{
				fstream myfilee("mainname.txt");
		string line1;
		if(myfilee.is_open()){
			while(getline(myfilee,line1)){
				mfname.push_back(line1);
			}
			myfilee.close();
		}
		}
		void byfod(){  //filing price
			string name1;
		ifstream iinfile;
		iinfile.open("mainprize.txt");
		while(iinfile)
		{
			getline(iinfile,name1);
			
			int c = atoi(name1.c_str());
		//	cout<<b<<endl;
			mfprice.push_back(c);
		}
			
		}
			void choosefood(int a){
		msaven[mcounter]=mfname[a-1];
		msavep[mcounter]=mfprice[a-1];
		mcounter++;
	}
		void displaybyfood(){
	
		for(int i=0;i<50;i++){
		
			cout<<i+1<<")"<<mfname[i]<<mfprice[i]<<endl<<endl;
		}}
	void list(int b){ //food list saving
		a=b;
		switch (a){
		case 1:
		name[0][0]="CHICKEN KARAI\t";
		name[0][1]="CHICKEN TANDOORI\t";
		name[0][2]="CHICKEN HANDI\t";
		name[0][3]="CHIKEN MAYO PASTA\t";
		name[0][4]="CHIKEN BIRYANI\t";
		price[0][0]=200;
		price[0][1]=150;
		price[0][2]=200;
		price[0][3]=50;
		price[0][4]=175;
		break;
			case 2:
		name[1][0]="SHAI KABAB\t";
		name[1][1]="SHAMI KABAB\t";
		name[1][2]="SIKH BOTI\t";
		name[1][3]="BIHARI KABAB\t";
		name[1][4]="CHIKEN SHASHLIC\t";
		price[1][0]=200;
		price[1][1]=310;
		price[1][2]=250;
		price[1][3]=50;
		price[1][4]=500;
		break;
			case 3:
		name[2][0]="CHIKEN BROAST\t";
		name[2][1]="JUMBO BURGER\t";
		name[2][2]="CHIKEN BURGER\t";
		name[2][3]="ZINGER BURGER\t";
		name[2][4]="CHICKEN CHEESE BURGER\t";
		price[2][0]=250;
		price[2][1]=300;
		price[2][2]=150;
		price[2][3]=300;
		price[2][4]=400;
		break;
			case 4:
		name[3][0]="VEG BURGER\t";
		name[3][1]="HOT DOG SAUSAGE\t";
		name[3][2]="ALOO TIKI\t";
		name[3][3]="CHEESE BURGER\t";
		name[3][4]="CHICKEN BROAST\t";
		price[3][0]=100;
		price[3][1]=150;
		price[3][2]=100;
		price[3][3]=200;
		price[3][4]=200;
		break;
			case 5:
		name[4][0]="CHIKEN BIRYANI\t ";
		name[4][1]="MEAT PALAUO\t";
		name[4][2]="SPECIAL SINDHI BIRYANI\t";
		name[4][3]="SALAD AND RAITA\t";
		name[4][4]="PASTA\t";
		price[4][0]=150;
		price[4][1]=200;
		price[4][2]=250;
		price[4][3]=50;
		price[4][4]=175;
		break;
			case 6:
		name[5][0]="CHIKEN KARAI\t";
		name[5][1]="CHIKEN HALEEM\t ";
		name[5][2]="SPECIAL KAYBEES BURGER\t";
		name[5][3]="FIRES\t";
		name[5][4]="CHICKEN WINGS\t";
		price[5][0]=400;
		price[5][1]=250;
		price[5][2]=200;
		price[5][3]=50;
		price[5][4]=175;
		break;
			case 7:
		name[6][0]="CHIKEN BURGER\t";
		name[6][1]="CHEESE BURGER\t";
		name[6][2]="JUMBO BURGER\t";
		name[6][3]="FIRES\t";
		name[6][4]="DOUPLER BURGER\t";
		price[6][0]=120;
		price[6][1]=150;
		price[6][2]=350;
		price[6][3]=100;
		price[6][4]=350;
		break;
			case 8:
		name[7][0]="CHIKEN HANDI\t";
		name[7][1]="CHAPLI KABAB\t";
		name[7][2]="CHEESE BALL\t";
		name[7][3]="SALAD\t";
		name[7][4]="CHICKEN SHASHLIKH\t";
		price[7][0]=300;
		price[7][1]=150;
		price[7][2]=200;
		price[7][3]=50;
		price[7][4]=300;
		break;
			case 9:
		name[8][0]="CHIKEN BRIYANI\t";
		name[8][1]="KABAB\t";
		name[8][2]="CHIKEN KARAI\t";
		name[8][3]="SALAD\t";
		name[8][4]="CHICKEN WINGS\t";
		price[8][0]=200;
		price[8][1]=150;
		price[8][2]=400;
		price[8][3]=50;
		price[8][4]=250;
		break;
			case 10:
		name[9][0]="CHILI CHEEZA\t";
		name[9][1]="CLUB SANDWICH\t";
		name[9][2]="CHIKEN BROAST\t";
		name[9][3]="ZINGER BURGER\t";
		name[9][4]="CRUNCHY ROLL\t";
		price[9][0]=400;
		price[9][1]=150;
		price[9][2]=200;
		price[9][3]=150;
		price[9][4]=100;
		break;
	}
	}
		void safe(int b,int c){

			
			msaven[mcounter]=name[c-1][b-1];
			msavep[mcounter]=price[c-1][b-1];
			mcounter++;
			}
	
	void display(int a){   //displaying food
		cout<<"\t\tMAIN COURSE\n ";
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

