// This code is a basic demonstration of using nested classes, alongside 
// constructors and destructors and would output when each of those are used.
#include <iostream>

using namespace std; 

class Hen
{
	public:
		
		Hen()
		{
			cout << "This is a constructor of Hen" << endl; 
		}
		
		void display()
			{
				cout << "This is display of Hen" << endl; 
			}
		
	class Nest
	{
		public:
			
			Nest()
			{
			cout << "This is a constructor of Nest" << endl; 
			}
			
			void display()
			{
				cout << "This is display of nest" << endl; 
			}
			
		class Egg
		{
		public:
		
		Egg()
			{
			cout << "This is a constructor of Egg" << endl; 
			}
			
			void display()
			{
				cout << "This is display of egg" << endl; 
			}
			
		~Egg()
			{
			cout << "This is a destructor of Egg" << endl; 
			}	
		}; 
		
		~Nest()
		{
			cout << "This is a destructor of Nest" << endl; 
		}
	}; 
	~Hen()
		{
			cout << "This is a destructor of Hen" << endl; 
		}
};

int main()
{
	Hen *hen = new Hen();
	Hen::Nest *nest = new Hen::Nest();  
	Hen::Nest::Egg *egg = new Hen::Nest::Egg(); 
	
	(*hen).display(); 
	nest -> display(); 
	egg -> display(); 
	
	delete hen;
	delete nest; 
	delete egg; 
}