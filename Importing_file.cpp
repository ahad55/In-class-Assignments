/* 
Description: Count number of whitespaces in a file
Author: Ahad Khan

Purpose: 
This program will open a file,
read the file word per word,
if a space is read, increase the count for spaces.
When the file is done reading, exit the loop and
output the count for the number of spaces

TEST CASES: 
	
1)  This file is for testing purposes, to count the number of whitespaces. 
	If a space is detected, then the count for whitespaces would increase. 
	At the end of the program, I would then output the number of whitespaces.
	And now, feel free to add as many more words and spaces. 	
	
	The number of whitespaces in this file are: 54
	
	--------------------------------
	Process exited after 0.009925 seconds with return value 0
	Press any key to continue . . .
	
	
2) 	This    file is for    testing purposes, to count the number of whitespaces. 
	If a space is detected, then the count for whitespaces would increase. 
	At the end of the program, I would then output the number of whitespaces.
	And now, feel free to add as many more words and spaces. 
	
	The number of whitespaces in this file are: 60
	
	--------------------------------
	Process exited after 0.06556 seconds with return value 0
	Press any key to continue . . .

3) 	Thisfile is fortesting purposes, to count the number of whitespaces. 
	If a space is detected, then the count for whitespaces would increase. 
	At the end of the program, I would then output the number of whitespaces.
	And now, feel free to add as many more words and spaces. 
	
	The number of whitespaces in this file are: 52
	
	--------------------------------
	Process exited after 0.03604 seconds with return value 0
	Press any key to continue . . .
*/ 

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include<cstdio>

using namespace std; 

int main()
{
ifstream file; //inputs the filestream "file"
file.open("testingfile.txt"); //write the file needed to be opened, within the quotations
	
	if (!file)
	cout<<"File not found!"<<endl; // if the file does not exist, this error message would be outputted
	
string line; 
char text; //declare the string "text", to keep track of the number of words 
int count=0;  // declare the count for whitespaces as zero
	
	while(!file.eof())  
	{
		text=file.get(); 
		
		if(isspace(text))
		{
		count++;  	 		//while "text" is being inputted from "file", make the count for whitespaces increase by one 
		}
	}
	cout<<"The number of whitespaces in this file are: " <<count<<endl; //output the count for whitespaces 
	
	file.close(); //close the file which was opened
}