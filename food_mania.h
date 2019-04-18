#include<iostream>
#include<conio.h>
#include<string.h>
#include <vector>
#include<fstream>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include "location.h"
using namespace std;




class restuarant{
	private:
	vector<string> name;
	location *l;
	food *sf;//compostion
	food *mf;
	food *df;
	string savefood[50];
	int sprice[50];
	int j;
		starter *s;
	main *m;
	desert *d;
    
	public:
	restuarant() {  //filing
		fstream myfile("restname.txt");
		string line;
		if(myfile.is_open()){
			while(getline(myfile,line)){
				name.push_back(line);
			}
			myfile.close();
		}
		l = new location();
		sf=  new starter;
		mf= new main; //upcasting
		df=new desert;
	//	savefood=new string [15];
	//	sprice=new int[15];
		
	}
	void choosefood(starter *a,main *b,desert *c){ //choose by food
       cout<<"here";
	   s=new starter; //aggregation
       
	   m=new main;
	   d=new desert;
	   s=a;
	   m=b;
	   d=c;
	   int count=0;
	   system("cls");
	   cout<<"                  FOOD MANIA"<<endl;
	   cout<<endl;
	   cout<<"----_____----PRESS YOR DESIRED OPTION----_____----"<<endl;
       cout<<"\n\nSTARTER MENU LIST\n\n";	   
	   	  int xyz=1;
	   	  while(xyz==1)
	   	  {
			   s->byfood();
			   s->byfod();
		   s->displaybyfood();
		   int z;
		    here2:
				    cin>>z;
				    
				    try{  //exception handling
				    if(z<51)
				    s->choosefood(z);
				    else
				    throw z;
					}
					catch(int){
						cout<<"Invalid input"<<endl;
						goto here2;
					}
		   
		  
		   cout<<"do you want more starter items?(press 1 for more 0 for stop\n";
		   cin>>xyz;
		   }
		   system("cls");
		   
			cout<<"                  FOOD MANIA"<<endl;
			cout<<endl;
			cout<<"----_____----PRESS YOR DESIRED OPTION----_____----"<<endl;
		   cout<<"\n\nMAIN MENU LIST\n\n";	   
	   	  int xy=1;
	   	  while(xy==1)
	   	  {
			   m->byfood();
			   m->byfod();
		   m->displaybyfood();
		   int z;
		    here1:
				    cin>>z;
				    
				    try{
				    if(z<51)
				    m->choosefood(z);
				    else
				    throw z;
					}
					catch(int){
						cout<<"Invalid input"<<endl;
						goto here1;
					}
	
		
		   cout<<"do you want more starter items?(press 1 for more 0 for stop\n";
		   cin>>xy;
		   }
		   system("cls");
				cout<<"                  FOOD MANIA"<<endl;
			cout<<endl;
			cout<<"----_____----PRESS YOR DESIRED OPTION----_____----"<<endl;
		   cout<<"\n\nDESERT MENU LIST\n\n";	   
	   	  int xz=1;
	   	  while(xz==1)
	   	  {
			   d->byfood();
			   d->byfod();
		   d->displaybyfood();
		   int z;
		   here0:
				    cin>>z;
				    
				    try{
				    if(z<51)
				    d->choosefood(z);
				    else
				    throw z;
					}
					catch(int){
						cout<<"Invalid input"<<endl;
						goto here0;
					}
		   
		   cout<<"do you want more starter items?(press 1 for more 0 for stop\n";
		   cin>>xz;
		   }
		   
	      
	   		
	}


	
	void choose_resturant(){   //choose by restuarant
		cout<<"CHOOSE YOU RESTURANT"<<endl;

			int a;
		cin>>a;
				system("cls");
				cout<<"                  FOOD MANIA"<<endl;
			cout<<endl;
			cout<<"----_____----PRESS YOR DESIRED OPTION----_____----"<<endl;
					
				
				
				    cout<<"WELCOME TO "<<name[a-1]<<endl;
				    	cout<<"\nSTARTER\n";
				    	
					cout<<"choose your starter\n";
					int xyz=1;
					while(xyz==1)
					{
					
					int z;
					sf->list(a);
				    sf->display(a);
				    here0:
				    cin>>z;
				    
				    
				    try{
				    if(z<6)
				    sf->safe(z,a);
				    else
				    throw z;
					}
					catch(int){
						cout<<"Invalid input"<<endl;
						goto here0;
					}
					cout<<endl;
				    cout<<"do u want more(press 1 for yes elsse press 0)\n"<<endl;
				    cin>>xyz;
				    }
				    
				    
				    
				
																	
				    system("cls");
				    cout<<"                  FOOD MANIA"<<endl;
					cout<<endl;
					cout<<"----_____----PRESS YOR DESIRED OPTION----_____----"<<endl;
			
				    cout<<"\nMAIN COURSE\n";
				    cout<<"choose your main course\n";
				    int iop=1;
				    while(iop==1)
				    {
					
				    mf->list(a);
				    mf->display(a);
				    int x;
				    here1:
				    cin>>x;
				      try{
				    if(x<6)
				    mf->safe(x,a);
				    else
				    throw x;
					}
					catch(int){
						cout<<"Invalid input"<<endl;
						goto here1;
					}               
					cout<<endl;
					cout<<"do u want more(press 1 for yes else press 0)\n"<<endl;
				    cin>>iop;
				    
					
				}
				    system("cls");
				    cout<<"                  FOOD MANIA"<<endl;
					cout<<endl;
					cout<<"----_____----PRESS YOR DESIRED OPTION----_____----"<<endl;
			
				    cout<<"DESERT\n";
				    cout<<"choose your desert";
				    int xop=1;
				    while(xop==1)
				    {
					
				    df->list(a);
				    df->display(a);
				    int y;
				    here2:
				    cin>>y;
				
				    
				 try{
				    if(y<6)
				    df->safe(y,a);
				    else
				    throw y;
					}
					catch(int){
						cout<<"Invalid input"<<endl;
						goto here2;
					}
				    
				    
				        cout<<endl;
				    	cout<<"do u want more(press 1 for yes else press 0)\n"<<endl;
				    cin>>xop;
				    
				}
				
			}
	void byfoodbill(){  //choose by food bill
		system("cls");
		cout<<"                  FOOD MANIA"<<endl;
		cout<<endl;
		cout<<"----_____----PRESS YOR DESIRED OPTION----_____----"<<endl;
			
		cout<<"\t\t\tBILL\n\n"<<endl;
		
		s->displaystarter();
		m->displaymain();
		d->displaydesert();
		cout<<"\n";
		int x=s->calculatestart();
		int	y=m->calculatemain();
		int z=d->calculatedesert();
		cout<<"\n";
		cout<<endl;
	    cout<<endl;
		cout<<"------------------FOOD PRIZE 		= "<<x+y+z<<"\n";
	    cout<<"------------------Delivery Charges	= 100"<<endl;
	    cout<<"------------------TOTAL PRICE        = "<<(x+y+z+100)<<endl;
	}		
	
		
	
	void bill(){  //choose by restuarant bill
		system("cls");
		cout<<"                  FOOD MANIA"<<endl;
		cout<<endl;
		cout<<"\t\t\tBILL\n\n"<<endl;
		
		sf->displaystarter();
		mf->displaymain();
		df->displaydesert();
		cout<<"\n";
	int x=sf->calculatestart();
	int	y=mf->calculatemain();
	int z=df->calculatedesert();
    
	cout<<"\n";
	    cout<<endl;
	    cout<<endl;
		cout<<"------------------FOOD PRIZE 		= "<<x+y+z<<"\n";
	    cout<<"------------------Delivery Charges	= 100"<<endl;
	    cout<<"------------------TOTAL PRICE        = "<<(x+y+z+100)<<endl;
	}

	
	
	void display(){
		cout<<"RESTUARANT NAME \t\t"<<endl;
		for(int i=0;i<10;i++) {
			cout<<i+1<<")"<<name[i]<<endl;
			l->display(i);
		}
	}
};
class user{  //user information
	location *l;
	string areaname;
	string streetname;
	string username;
	int usercode;
	int block;
	public:
		user(location *a){
			l=new location; //aggregation
			l=a;
			srand(time(NULL));        
			usercode=rand()%9999+1000; //random code 
	        int x=l->displayuser();
	        if(x!=0){
			areaname=l->add[x-1];}
			else if(x==0){
				cout<<"enter your area\n";
				cin>>areaname;
			}
	        
		}
	void input(){  //input data
		system("cls");
			cout<<"ENTER YOUR NAME = "<<endl;
			cin>>username;
			cout<<"ENTER STREET NAME = "<<endl;
			cin>>streetname;
			cout<<"ENTER BLOCK NUMBER = "<<endl;
			cin>>block;
	}
	void display(){ //displaying data
		system("cls");
		cout<<"----_____----FOOD MANIA----_____----"<<endl;
		cout<<endl;
		
		cout<<"USER INFORMATION \n";
		cout<<"NAME = "<<username<<endl;
		cout<<"STREET NAME = "<<streetname<<endl;
		cout<<"BLOCK NUMBER = "<<block<<endl;
		cout<<"AREA NAME = "<<areaname<<endl;
		cout<<"DELIEVERY CODE NUMBER = "<<usercode<<endl;
	}	
};

