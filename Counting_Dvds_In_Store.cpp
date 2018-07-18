#include<iostream>
#include<string>
#include<list>
#include<iomanip>
#include<fstream>

using namespace std;

class dvd
{
public:
	string title;
	double available; 
	double price; 
	string actors; 
	double year;
 
	printData()
	{
		cout<< "Title: "<<title<<endl; 
		cout<< "Available: "<<available<<endl; 
		cout<<"Price: $"<<fixed <<setprecision(2)<<price<<endl;
		cout<< "Cast: "<<actors<<endl; 
		cout<< "Released: "<<fixed <<setprecision(0)<<year<<endl; 
	}				
}; 

// In this code i will be incrementing through an array to first assign DVDs 
// in a store all its attributes and then will increment through again 
// to output all the DVDs in the store. 
int main()
{	
	cout<<"Welcome to Ahad's DVD Rental Store!"<<endl<<endl; 
	
	cout<< "Please enter the following information for each of the DVDs."<<endl<<endl;
	
	int number;
	dvd numb;
	
	 
	for (int number=1; number<=2; number++)
	{	
	//ofstream file("data.txt"); 
	
		cout << "DVD "<<number<<":"<<endl<<endl; 
		cout<< "What is the title of the movie?"<<endl; 
		getline(cin,numb.title,'\n'); 
		
		cout<< "How many are still available in stock?"<<endl;
		cin>>numb.available;
			while (cin.fail() ||numb.available <0)
			{
				cout<< "ERROR! Please enter an appropriate number."<<endl;
				cin.clear(); 
				cin.ignore(256, '\n'); 
				cin>>numb.available;
			}
	
		cout<<"What is the price of this DVD?"<<endl;
		cout<<"$"; 
		cin>> numb.price; 
			while (cin.fail())
			{
				cout<< "ERROR! Please enter a price."<<endl;
				cin.clear(); 
				cin.ignore(256, '\n'); 
				cout<<"$"; 
				cin>>numb.price;
				cout << setprecision(2)<< fixed<<numb.price; 
			}
	
		cout<<"Please list the main actors."<<endl;
		cin.ignore(); 
		getline(cin,numb.actors,'\n'); 
		
		cout<< "What year was this movie released?"<<endl;
		cin>> numb.year; 
			while (cin.fail() || numb.year > 2017 || numb.year<1889)
			{
				cout<< "ERROR! Please enter a valid year."<<endl;
				cin.clear(); 
				cin.ignore(256, '\n'); 
				cin>>numb.year;	
			}
			
		
		dvd dvds[number]= {numb.title, numb.available, numb.price, numb.actors, numb.year};
		//cout<<dvds[];  
		cin.ignore();
		cout<< endl<< endl;
	}
	
	for(int number=1; number<=2; number++)
	{
		cout << "DVD "<<number<<":"<<endl; 
		numb.printData(); 
		cout<<dvds[number];  
	}	
}