#include <iostream>
#include <conio.h>
#include <vector>
//test for github
using namespace std;
void problem3();
void problem4();
void problem5(unsigned int);
void problem6(int); 
void problem7(int);

int main(){
	//problem4();
	//problem5(2147483647);
	//problem6(100);
	problem7(10001);
		
	cout << endl << "program done" << endl;
	_getch();
	return 0;
}


void problem3(){
	//problem 3. largest prime factors of a number
	unsigned long long number = 600851475143;
	cout << "number: " << number << endl;
	for (int i = 2; i <= number; i++){
		if (number % i == 0){
			cout << "prime factor: " << i << endl;
			number = number / i;
		}
	}	
}
void problem4(){

	//Find the largest palindrome made from the product of two 3-digit numbers.
	vector<int> palindromes;
	vector<int>::iterator iter;

	int num1, num2, num3, num4, num5, num6;
	for (int i = 998001; i > 100000; i--){

		num6 = i % 10;
		num5 = (i % 100) / 10;
		num4 = (i % 1000) / 100;
		num3 = (i % 10000) / 1000;
		num2 = (i % 100000) / 10000;
		num1 = (i % 1000000) / 100000;

		if (num1 == num6 && num2 == num5 && num3 == num4){
			cout << i << endl;
			palindromes.push_back(i);
		}
	}

	int product1;
	for (iter = palindromes.begin(); iter != palindromes.end(); iter++){
		product1 = *iter;
		for (int i = 999; i > 99; i--){
			int p2 = product1 / i;
			if (product1 % i == 0 && p2 < 1000){
				cout << product1 << " = " << i << "*" << p2 << endl;
				_getch();
			}
		}
	}
}
void problem5(unsigned int n){
	//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
	for (unsigned int i = 10; i < n; i++){
		if (i % 20 == 0 &&
			i % 19 == 0 &&
			i % 18 == 0 &&
			i % 17 == 0 &&
			i % 16 == 0 &&
			i % 15 == 0 &&
			i % 14 == 0 &&
			i % 13 == 0 &&
			i % 12 == 0 &&
			i % 11 == 0 &&
			i % 10 == 0 &&
			i % 9 == 0 &&
			i % 8 == 0 &&
			i % 7 == 0 &&
			i % 6 == 0 &&
			i % 5 == 0 &&
			i % 4 == 0 &&
			i % 3 == 0 &&
			i % 2 == 0){
			cout << i << endl;
		}
	}
}
void problem6(int num){
	/*mathematically:
	The sum of squares is n*(n +1)*(2*n +1) /12
    The square of sum of n numbers is  ( n*(n+1)/2 ) * ( n *(n +1)/2 )
	** for sum of 100: (101 * 50)^2 = sum of sqaure
	
	square of sums = n * (n+1) * (2n + 1) * 1/6
	
	*/
	int sumOfSquares = 0;
	int squareOfSum = 0;
	int difference;

	for (int i = 1; i <= num; i++){
		sumOfSquares += i * i;
		squareOfSum += i;
	}
	squareOfSum *= squareOfSum;
	difference = squareOfSum - sumOfSquares;

	cout << "sum of the squares of from 1 to " << num << " is: " << sumOfSquares << endl;
	cout << "sqauare of the sum of 1 to " << num << " is: " << squareOfSum << endl;
	cout << "The difference of the 2 is: " << difference << endl;
}
void problem7(int count){
	//Find the 10,0001st prime number
	int divisible;
	int counter = 0;
	int number = 0;

	for (int i = 2; counter < count; i++){
		divisible = 0;
		for (int j = 2; j < i; j++){			
			if (i % j == 0)	divisible++;
			if (divisible > 1) break;
		}
		if (divisible == 0){
			//cout << i << endl;
			number = i;
			counter++;
		}
	}
	cout << number << endl;
}