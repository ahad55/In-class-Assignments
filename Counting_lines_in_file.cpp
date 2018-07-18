/*
Description: Increment array and count lines of file
Author: Ahad Khan 

Purpose: 
This program will read out a file line by line.
Along with this, it will also count through an array, 
set of 100, and will increment through this
while outputting the lines.
It will eventually output each line number
along with that line of the file.

TEST CASE: 

1 This is a
2 testing
3 file for
4 question 4
5 of assignment 1
6 i am writing
7 random stuff
8 until line
9 hundred
10 i need
11 to write
12 random stuff
13 here and
14 there
15 i will
16 read
17 the file
18 and
19 count how
20 many lines
21 there are
22 each
23 line would
24 display
25 and
26 have the line
27 number
28 with it
29 wow
30 that is
31 cool
32 yeahrgrwg
33 fewifnwinei
34 qfieqfiqef
35 qfqefqeifjeq9oje efie
36 fefefe
37 fefefefe egeg
38 fefeg g eg e
39 efgege ege ge e
40 efef eg eg eg e
41 e efe f eg e
42 ege gw gw g
43 wrgwr
44 g rwg wrg wg
45 wrg wr
46 gwr
47 gwr
48 gwr
49 wrgrgrgrw gwr g rwg
50 rgwg w
51 gwgw gwrg
52 gwr gwr
53 wgrgwgwrg
54 gwrgw g w
55 g w
56 gw rg rwg rgw g
57 wgr qfgwrg
58 ggw wfgrg
59 gwgwr gw gwrg
60 i will
61 read
62 the file
63 and
64 count how
65 many lines
66 there are
67 each
68 line would
69 display
70 and
71 have the line
72 number
73 with it
74 wow
75 that is
76 cool
77 yeahrgrwg
78 fewifnwinei
79 qfieqfiqef
80 qfqefqeifjeq9oje efie
81 fefefe
82 fefefefe egeg
83 fefeg g eg e
84 efgege ege ge e
85 efef eg eg eg e
86 e efe f eg e
87 ege gw gw g
88 wrgwr
89 g rwg wrg wg
90 wrg wr
91 gwr
92 gwr
93 gwr
94 wrgrgrgrw gwr g rwg
95 rgwg w
96 gwgw gwrg
97 gwr gwr
98 wgrgwgwrg
99 gwrgw g w
100 g w

--------------------------------
Process exited after 0.2193 seconds with return value 0
Press any key to continue . . . 
*/

#include <iostream>
#include <fstream>
#include<string>

using namespace std; 

int main()
{
	string line; 	//initialize "line" as a string 
	int numb; 		// initialize numb as an int 
	string lines[100];		// initialize the array of lines[] as a string. The size of the array is initialized as 100 
	
	ifstream file; 		// input the filestream "file" 
	file.open("testingfile4.txt"); // open the "file" "testingfile4.txt" 

for (numb=0; numb<=99; numb++)		// for each increment of the array, from 0 till 99...
{
getline (file, line); 				// get each line from the "file" 
lines[numb] = line;					// assign each increment to the string "line" from the file 
cout<< numb+1 <<" "<<lines[numb]<<endl;  // output the number of the array increment+1 (line number) along with the line from the file 
}
		
}