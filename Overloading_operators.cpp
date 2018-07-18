/* 
Description: Overload operators and calculate geometric measurements of shapes & find co-ordinates
Author: Ahad Khan

Purpose: 
This program will overload certain operations like ">>", "<<", "+", and "-" to do certain addition and subtraction 
of co-ordinate points and output these values. It will also be using classes and derived classes to calculate the area,
perimeter, and bounding box of certain shapes, like circles, squares, and triangles. To get the bounding box, it will 
be using a co-ordinate system and output the certain co-ordiante points of the particular bounding box. 

TEST CASES: 

1) (These are values given to us, with the triangle having colinear points) 

For the square,
Please enter the desired length: 25

This is from class Square. The information is as follows:

Area = 625 units squared

Perimeter = 100 units

The co-ordinates for the bounding box are as follows:

PointA:
X: 0
Y: 0

PointB:
X: 25
Y: 0

PointC:
X: 25
Y: 25

PointD:
X: 0
Y: 25

For the triangle,
Please enter the length for side 1: 10
Please enter the length for side 2: 20
Please enter the length for side 3: 30

WARNING: These side lengths do not create an appropriate triangle! The points are colinear!

This is from class Triangle. The information is as follows:

Area = 0 units squared

Perimeter = 60 units

The co-ordinates for the bounding box are as follows:

PointA:
X: 0
Y: 0

PointB:
X: 30
Y: 0

PointC:
X: 30
Y: 0

PointD:
X: 0
Y: 0

For the circle,
Please enter the desired radius: 23

This is from class Circle. The information is as follows:

Area = 1661.06 units squared

Perimeter = 144.44 units

The co-ordinates for the bounding box are as follows:

PointA:
X: -23
Y: -23

PointB:
X: 23
Y: -23

PointC:
X: 23
Y: 23

PointD:
X: -23
Y: 23

Now, to test out the addition and subtraction:

Please enter the co-ordinates for the first point
X: 3
Y: 4
Please enter the co-ordinates for the second point
X: 7
Y: 5
The sum of the two points gives this point:
X: 10
Y: 9
The difference of the two points gives this point:
X: 4
Y: 1

--------------------------------
Process exited after 16.6 seconds with return value 0
Press any key to continue . . .



2) (This is with the triangle having points which do not connect)

For the square,
Please enter the desired length: 24

This is from class Square. The information is as follows:

Area = 576 units squared

Perimeter = 96 units

The co-ordinates for the bounding box are as follows:

PointA:
X: 0
Y: 0

PointB:
X: 24
Y: 0

PointC:
X: 24
Y: 24

PointD:
X: 0
Y: 24

For the triangle,
Please enter the length for side 1: 12
Please enter the length for side 2: 15
Please enter the length for side 3: 30

WARNING: These side lengths do not create an appropriate triangle! The points do NOT connect!

This is from class Triangle. The information is as follows:

Area = 0 units squared

Perimeter = 57 units

The co-ordinates for the bounding box are as follows:

PointA:
X: 0
Y: 0

PointB:
X: 30
Y: 0

PointC:
X: 30
Y: 0

PointD:
X: 0
Y: 0

For the circle,
Please enter the desired radius: 35

This is from class Circle. The information is as follows:

Area = 3846.5 units squared

Perimeter = 219.8 units

The co-ordinates for the bounding box are as follows:

PointA:
X: -35
Y: -35

PointB:
X: 35
Y: -35

PointC:
X: 35
Y: 35

PointD:
X: -35
Y: 35

Now, to test out the addition and subtraction:

Please enter the co-ordinates for the first point
X: 32
Y: 21
Please enter the co-ordinates for the second point
X: 3
Y: 5
The sum of the two points gives this point:
X: 35
Y: 26
The difference of the two points gives this point:
X: -29
Y: -16

--------------------------------
Process exited after 37.04 seconds with return value 0
Press any key to continue . . .



3) (This is a perfect running case)

For the square,
Please enter the desired length: 42

This is from class Square. The information is as follows:

Area = 1764 units squared

Perimeter = 168 units

The co-ordinates for the bounding box are as follows:

PointA:
X: 0
Y: 0

PointB:
X: 42
Y: 0

PointC:
X: 42
Y: 42

PointD:
X: 0
Y: 42

For the triangle,
Please enter the length for side 1: 10
Please enter the length for side 2: 14
Please enter the length for side 3: 20

This is from class Triangle. The information is as follows:

Area = 64.9923 units squared

Perimeter = 44 units

The co-ordinates for the bounding box are as follows:

PointA:
X: 0
Y: 0

PointB:
X: 20
Y: 0

PointC:
X: 20
Y: 6.49923

PointD:
X: 0
Y: 6.49923

For the circle,
Please enter the desired radius: 32

This is from class Circle. The information is as follows:

Area = 3215.36 units squared

Perimeter = 200.96 units

The co-ordinates for the bounding box are as follows:

PointA:
X: -32
Y: -32

PointB:
X: 32
Y: -32

PointC:
X: 32
Y: 32

PointD:
X: -32
Y: 32

Now, to test out the addition and subtraction:

Please enter the co-ordinates for the first point
X: 21
Y: 22
Please enter the co-ordinates for the second point
X: 34
Y: 32
The sum of the two points gives this point:
X: 55
Y: 54
The difference of the two points gives this point:
X: 13
Y: 10

--------------------------------
Process exited after 38.24 seconds with return value 0
Press any key to continue . . .




4) (This is with all negative values. My program automatically converts them to positive values, so we don't get a negative area or perimeter)

For the square,
Please enter the desired length: -5

This is from class Square. The information is as follows:

Area = 25 units squared

Perimeter = 20 units

The co-ordinates for the bounding box are as follows:

PointA:
X: 0
Y: 0

PointB:
X: 5
Y: 0

PointC:
X: 5
Y: 5

PointD:
X: 0
Y: 5

For the triangle,
Please enter the length for side 1: -3
Please enter the length for side 2: -2
Please enter the length for side 3: -4

This is from class Triangle. The information is as follows:

Area = 2.90474 units squared

Perimeter = 9 units

The co-ordinates for the bounding box are as follows:

PointA:
X: 0
Y: 0

PointB:
X: 4
Y: 0

PointC:
X: 4
Y: 1.45237

PointD:
X: 0
Y: 1.45237

For the circle,
Please enter the desired radius: -6

This is from class Circle. The information is as follows:

Area = 113.04 units squared

Perimeter = 37.68 units

The co-ordinates for the bounding box are as follows:

PointA:
X: -6
Y: -6

PointB:
X: 6
Y: -6

PointC:
X: 6
Y: 6

PointD:
X: -6
Y: 6

Now, to test out the addition and subtraction:

Please enter the co-ordinates for the first point
X: 3
Y: 4
Please enter the co-ordinates for the second point
X: 8
Y: 9
The sum of the two points gives this point:
X: 11
Y: 13
The difference of the two points gives this point:
X: 5
Y: 5

--------------------------------
Process exited after 21.63 seconds with return value 0
Press any key to continue . . .
*/ 

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdio>
#include <ctime>
#include <cmath>
#include <typeinfo>

using namespace std; 
		
class point		// initialize point class
{
	public: 
	
	double xValue; 
	double yValue; 
	
	point operator + (point &a)				// overloading the + operator to add boh points 
		{
			point sum;
			sum.xValue = a.xValue + xValue;
			sum.yValue = a.yValue + yValue;
			return (sum); 
		}
	
	point operator - (point &a)				// overloading the - operator to subtract both points
		{
			point difference; 
			difference.xValue = a.xValue - xValue;
			difference.yValue = a.yValue - yValue; 
			return (difference); 
		}
}; 

	ostream &operator >> (ostream &stream, point &a)		// overloading the >> operator to output the co-ordinate info
		{
			stream << "X: " << a.xValue << endl;
			stream << "Y: " << a.yValue << endl;
			return (stream);    
		}	

class Shape						// initializing the shape class
{
public:
	
	double area; 
	double perimeter; 
	string name; 
		
	double display (point &a, point &b, point &c, point &d, double &area, double &perimeter, string &name)	// defining the display function 
	{
	cout << "This is from class " << name << ". The information is as follows: " << endl << endl; 
	cout << "Area = " << area << " units squared" << endl << endl;   
	cout << "Perimeter = " << perimeter << " units" << endl << endl;
	cout << "The co-ordinates for the bounding box are as follows: " << endl << endl; 
	cout << "PointA: "<< endl >> a <<endl; 
	cout << "PointB: "<< endl >> b <<endl; 
	cout << "PointC: "<< endl >> c <<endl; 
	cout << "PointD: "<< endl >> d <<endl; 	
	}
}; 

class Square : Shape				// initializing the derived square class 
{
public:
	
	Square()
	{
		// default constructor 
	}
	
	Square(point &a, point &b, point &c, point &d)
	{
		// constructor with arguments 
	}
	
	double calcSquare (point &a, point &b, point &c, point &d, double &area, double &perimeter, string &name)		// Square calculations definition to calculate area,
																													// perimeter and bounding box
	{
	double length; 
	
	name = "Square"; 

	a.xValue = a.yValue = b.yValue = d.xValue = 0; 		
	
	cout << "Please enter the desired length: "; 		//getting the length 
	cin >> length;
	length = abs(length); 
	//cout << "25" << endl; 							// this is for test 1

	cout << endl; 
	
	c.yValue = d.yValue = c.xValue = b.xValue = length; 
	
	area = length * length;
	perimeter = (length * 4); 
	}	
}; 

class Triangle : Shape									// initialization of derived traingle class
{
public:
		
	Triangle()
	{
		// default constructor 
	}
	
	Triangle(point &a, point &b, point &c)
	{
		// constructor with arguments
	}
	
	double calcTriangle (point &a, point &b, point &c, point &d, double &area, double &perimeter, string &name)		// triangle calculations for area, perimeter and bouding box
	{
	double sideA; 
	double sideB; 
	double sideC; 

	name = "Triangle"; 
	
	cout << "Please enter the length for side 1: "; 			// getting side lengths 
	cin >> sideA; 
	sideA = abs(sideA); 										// adjusting for negative values
	//cout << "10" <<endl; 										// for test 1
	cout << "Please enter the length for side 2: "; 
	cin >> sideB; 
	sideB = abs(sideB); 
	//cout << "20" << endl; 
	cout << "Please enter the length for side 3: "; 
	cin >> sideC; 
	sideC = abs(sideC); 
	//cout << "30" << endl; 
	cout << endl; 
	
	perimeter = sideA + sideB + sideC;
	double peri = perimeter / 2; 
	double areaSquare = peri * (peri - sideA) * (peri - sideB) * (peri - sideC); 	// this is another formula which can be used to calculate the area of a triangle 
	area = sqrt (areaSquare); 
	
	if (area <= 0)			// to compensate for colinear points 
	{
		cout << "WARNING: These side lengths do not create an appropriate triangle! The points are colinear!" << endl << endl; 
		area = 0; 
	}
	else if (areaSquare <=0)			// to compensate for a non-enclosed triangle 
	{
		cout << "WARNING: These side lengths do not create an appropriate triangle! The points do NOT connect!" << endl << endl; 
		area = 0; 
	}
	else
	{
		//continue normally 
	}
	
	//this is for the calcualtion of the bounding box points
	double sides[3] = {sideA, sideB, sideC};  //first creating an array of the 3 sides
	double largestSide = 0;  
	
	for (int i = 0; i <=2; i++)				// Now I'm trying to figure out the largest side length. I'm trying to orient
											//the triangle in a way so the largest lenght is always the base, so I never have
											//to deal with triangles leaning outwards, with an obtuse angle in their base. 
	{
		if (sides[i] > largestSide)
		{
			largestSide = sides[i]; 
		}
	}
	
	double areaBox = area + sideA + sideB + sideC; // this derives from the formula: AreaTriangle = BoundingBoxArea - SumOfAllSideLengths 
	double height = area / largestSide * 2; 	//now figure out the height of the triangle, to get the top of the bounding box
	a.xValue = a.yValue = b.yValue = d.xValue = 0;
	c.yValue = d.yValue = height; 
	b.xValue = c.xValue = largestSide;  
	}	
}; 

class Circle : Shape				// initialize derived class circle 
{
public:
	
	Circle()
	{
		// default constructor
	}
	
	Circle(point &a)
	{
		// constructor with arguments 
	}
		
	double calcCircle (point &a, point &b, point &c, point &d, double &area, double &perimeter, string &name)
	{
	double radius; 
	
	name = "Circle"; 
	
	cout << "Please enter the desired radius: "; 
	cin >> radius;											// getting the radius 
	radius = abs(radius); 									// compensating for negative values 
	//cout << "23" << endl; 								// for test case 1
	cout << endl;  
	
	a.xValue = a.yValue = b.yValue = d.xValue = 0 - (radius); 
	b.xValue = c.xValue = c.yValue = d.yValue = radius; 
	
	area = (3.14 * radius) * radius;
	perimeter = (3.14 * 2 * radius);   
	}		
}; 


	
int main()
{
//initialization of the objects 
point PointA; 
point PointB;
point PointC;
point PointD;
point Sum; 
point Difference;
Shape shape;
Square square; 
Triangle triangle; 
Circle circle; 
 
 //calling the square function and it's corresponding display function 
cout << "For the square, " << endl; 
square.calcSquare (PointA, PointB, PointC, PointD, shape.area, shape.perimeter, shape.name); 
shape.display(PointA, PointB, PointC, PointD, shape.area, shape.perimeter, shape.name); 

//calling the triangle function and it's corresponding display function
cout << "For the triangle, " << endl; 
triangle.calcTriangle (PointA, PointB, PointC, PointD, shape.area, shape.perimeter, shape.name);
shape.display(PointA, PointB, PointC, PointD, shape.area, shape.perimeter, shape.name);  

//calling the circle function and it's corresponding display function
cout << "For the circle, " << endl; 
circle.calcCircle (PointA, PointB, PointC, PointD,shape.area, shape.perimeter, shape.name);
shape.display(PointA, PointB, PointC, PointD, shape.area, shape.perimeter, shape.name);  

//This is to test out the overloading of the +, -, and >> operators. I didn't really use it in the shape portion, and
//thought to atleast show its functionlity 
cout<< "Now, to test out the addition and subtraction: " << endl << endl; 
cout << "Please enter the co-ordinates for the first point" << endl; 
cout << "X: "; 
cin >> PointA.xValue; 
cout << "Y: "; 
cin >> PointA.yValue;

cout << "Please enter the co-ordinates for the second point" << endl; 
cout << "X: "; 
cin >> PointB.xValue;
cout << "Y: "; 
cin >> PointB.yValue; 

Sum = PointA + PointB; 
Difference = PointA - PointB; 

cout << "The sum of the two points gives this point:" << endl; 
cout >> Sum;
cout << "The difference of the two points gives this point:" << endl; 
cout >> Difference;  
}