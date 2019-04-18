#include<iostream>
#include<conio.h>
#include<string.h>
#include <vector>
#include<fstream>
#include<math.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int scounter=0;                       //global variable for count in saving food
int mcounter=0;
int dcounter=0;



class food{
	
	protected:
		
		string ssaven[10];     //saving starter food and price
		int ssavep[10];
			string msaven[10];    //saving main food and price
		int msavep[10];
			string dsaven[10];   //saving desert food and price
		int dsavep[10];
		int ssum,msum,dsum;   //price for each category
	public:
		food(){
			msum=0;   //default constructor
		    ssum=0;
		    dsum=0;
		}
	
		void virtual  list(int a){     //virtual fucntion polymorphism
		}
		void virtual display(int a){
		}
		void virtual safe(int,int){
		}
		void displaystarter(){        //display starter
			for(int i=0;i<scounter;i++){
				cout<<ssaven[i]<<"\t"<<ssavep[i]<<endl;
				cout<<"ENTER QUANTITY OF "<<ssaven[i]<<"?\n";
				int q;
				cin>>q;
				ssavep[i]=ssavep[i]*q; //quantity
				ssum=ssum+ssavep[i];
		}}
		void displaymain(){
			for(int i=0;i<mcounter;i++){
				cout<<msaven[i]<<"\t"<<msavep[i]<<endl;    //display main
					cout<<"ENTER QUANTITY OF "<<msaven[i]<<"?\n";
				int q;
				cin>>q;
				msavep[i]=msavep[i]*q;
				
				msum=msum+msavep[i];
			
		} }
		void displaydesert(){  //display desert
			for(int i=0;i<dcounter;i++){
				cout<<dsaven[i]<<"\t"<<dsavep[i]<<endl;
					cout<<"ENTER QUANTITY OF "<<dsaven[i]<<"?\n";
				int q;
				cin>>q;
				dsavep[i]=dsavep[i]*q;
				dsum=dsum+dsavep[i];
		}}
		int calculatestart(){   //display sum
		     cout<<"STARTERS TOTAL COST		    ="<<ssum<<endl;
		     return ssum;
			 	
		}
		int calculatemain(){   //display sum main
		     cout<<"MAIN COURSE TOTAL COST	    ="<<msum<<endl;
		     return msum;
			 	
		}
		int calculatedesert(){  //display sum desert
		     cout<<"DESERTS'S TOTAL COST		="<<dsum<<endl;
		     return dsum;
			 	
		}
};

