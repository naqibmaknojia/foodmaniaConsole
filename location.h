#include<iostream>
#include<conio.h>
#include<string.h>
#include <vector>
#include<fstream>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include "foods_class.h"




class location{

	private:
	vector<string> add;
	string save[10];
	friend class user;
	
	public:
	location() {   //filing location
		fstream myfile("address.txt");
		string line;
		if(myfile.is_open()){
			while(getline(myfile,line)){
				add.push_back(line);
			}
			myfile.close();
		}
	}
	int displayuser(){ //location for user
		cout<<"CHOOSE YOUR AREA \n";
		for(int i=0;i<10;i++)
	cout<<i+1<<") "<<add[i]<<endl<<endl;
	int a;
	  cout<<"if you have any different area type 0\n";
	   cin>>a;
	   return a;
	}
	
	void display(int i){  //location for restuarant
		cout<<"location =  "<<add[i]<<endl<<endl;
        save[i]=add[i];	
	}
};

