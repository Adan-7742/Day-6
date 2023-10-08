
///   ........................7 hour completed....................


//we can chk all about these function on cpprefrence.com
// We will discuss about limits
//math functions 
//weried integreal function integral type
// less then 4 byte in size will not suport arthematic operator 



#include <iostream>
using namespace std;
#include<limits>

//to use c math function we will use this header
#include<cmath>


int werid() {

	//we will use this function to print the size of value used 

	int short var1{ 10 };
	int short var2{ 20 };

	char var3{ 40 };
	char var4{ 50 };
	cout << "=========================================================================" << endl;

	cout << "size of var1 : " << sizeof(var1) << endl;
	cout << "size of var2 : " << sizeof(var2) << endl;
	cout << "size of var3 : " << sizeof(var3) << endl;
	cout << "size of var4 : " << sizeof(var4) << endl;

	auto result1 = var1 + var2;
	auto result2 = var2 + var3;

	cout << "=========================================================================" << endl;

	// to carry out arthematic operator it will convert it size to 4 byte as the size of int then we will have 4 bytes

	cout << "size of result1 : " << sizeof(result1) << endl;
	cout << "size of result2 : " << sizeof(result2) << endl;

	return 0;
}

//math functions now we will use 

int limit() {
	cout << "=========================================================================" << endl;

	//this willl show the limit of entered data type.......

	cout << "Numaric limit of int " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;

	cout << "Numaric limit of double " << numeric_limits<double>::min() << " to " << numeric_limits<int>::max() << endl;

	cout << "Numaric limit of char " << numeric_limits<char>::min() << " to " << numeric_limits<int>::max() << endl;

	cout << "Numaric limit of short" << numeric_limits<short>::min() << " to " << numeric_limits<int>::max() << endl;

	return 0;
}

int math() {

	cout << "=========================================================================" << endl;

	//using math function of weight 
	double weight{ 7.7 };
	cout << "weight rounded to floor is " << floor(weight) << endl;

	cout << "weight rounded to ceil is " << ceil(weight) << endl;

	cout << "=========================================================================" << endl;

	// using math function of abs (we will find absolute value..)
	double saving{ -5000 };
	cout << "abs of floor is " << abs(weight) << endl;

	cout << "abs of ceil is " << abs(saving) << endl;

	cout << "=========================================================================" << endl;

	//exponent of a value is given as  where e id 2.71828

	double exponent = exp(10);
	cout << "the exponent of 10 is " << exponent << endl;


	cout << "=========================================================================" << endl;

	//pow power of a value is 
	cout << "power of 2^3 is as " << pow(2, 3) << endl;

	cout << "power of 4^5 is as " << pow(4, 5) << endl;

	cout << "=========================================================================" << endl;
	//taking log that is the reverse of  pwer function and is given as 
	//if we dont sepecify the value then we can will get the log as in power of e

	cout << "log: to get log 54.59 , you will evaluate the e to the power of " << log(54.59) << endl;

	//to sepecify log catigory we need to tell compiler which value of log we want..........

	cout << "log: to get log 1000 , you will evaluate the base of 10 we will have : " << log10(1000) << endl;

	cout << "=========================================================================" << endl;

	// squrt root a value is taiking as 

	cout << "sqt of 86 is :  " << sqrt(86) << endl;

	cout << "sqt of 30 is :  " << sqrt(30) << endl;

	cout << "=========================================================================" << endl;
	//round function to round a value we have ..........

	cout << "rounded value of 2.667 is " << round(2.667) << endl;
	cout << "rounded value of 22.99 is " << round(22.99) << endl;
	cout << "rounded value of 6.5 is " << round(6.5) << endl;
	return 0;

}

int main()
{
	werid();
	limit();
	math();

}

