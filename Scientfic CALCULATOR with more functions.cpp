//This program is demonstrates about the Making 
//of Complex "CALCULATOR" with more functions.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int choice, a, b;
	double add, subtract, multiply, divide, diff, avg;
	double sq, x/*for Squre Root*/, Power, y/*for sin, cos and tan*/;
	double z/*for log and log10*/;
	cout << "\t\tScientific Calculator : \n";
	cout << "\t\t_______________________\n";
	system ("cls");
	
	do 
	{
		//Main Menu List BAR.
		cout << "Press! 1. for Addition.\n";
		cout << "Press! 2. for Subtraction.\n";
		cout << "Press! 3. for Multiplication.\n";
		cout << "Press! 4. for Division.\n";
		cout << "Press! 5. for Difference.\n"; 
		cout << "Press! 6. for Average.\n";
		cout << "Press! 7. for square.\n";
		cout << "press! 8. for Square Root.\n";
		cout << "Press! 9. for huge Power of any number.\n";
		cout << "Press! 10. for Trignometric Functions.\n";
		cout << "Press! 11. for logarithmic Functions.\n";
	
		cout << "\nThrough the Given functions Enter a number in the \n";
		cout << "range of (1-->11) According your choice : ";
		cin >> choice;
	
		switch (choice)
		{
			case 1: 
			{
				cout << "\n\t\t|*****Addition*****|\n";
				cout << "Enter the first number : ";
				cin >> a;
				cout << "Enter the Second number : ";
				cin >> b;
				
				cout << fixed << showpoint << setprecision(2) << endl;
				add = a + b;
				cout << "Result : " << add;
		
				break;
			}
		
			case 2:
			{
				cout << "\n\t\t|*****Subtraction*****|\n";
				cout << "Enter the first number : ";
				cin >> a;
				cout << "Enter the Second number : ";
				cin >> b;
				
				cout << fixed << showpoint << setprecision(2) << endl;
				subtract = a - b;
				cout << "Result : " << subtract;
			
				break;
			}
		
			case 3:
			{
				cout << "\n\t\t|*****Multiplication*****|\n";
				cout << "Enter the first number : ";
				cin >> a;
				cout << "Enter the Second number : ";
				cin >> b;
				
				cout << fixed << showpoint << setprecision(2) << endl;
				multiply = a * b;
				cout << "Result : " << multiply;
			
				break;
			}
		
			case 4:
			{
				cout << "\n\t\t|*****Division*****|\n";
				cout << "Enter the first number : ";
				cin >> a;
				cout << "Enter the Second number : ";
				cin >> b;
				
				cout << fixed << showpoint << setprecision(2) << endl;
				divide = a / b;
				cout << "Result : " << divide;
			
				break;
			}
		
			case 5:
			{
				cout << "\n\t\t|*****Difference*****|\n";
				cout << "Enter the first number : ";
				cin >> a;
				cout << "Enter the Second number : ";
				cin >> b;
				
				cout << fixed << showpoint << setprecision(2) << endl;
				diff = b - a;
				cout << "Result : " << diff;
			
				break;
			}
			
			case 6:
			{
				cout << "\n\t\t|*****Average*****|\n";
				cout << "Enter the first number : ";
				cin >> a;
				cout << "Enter the Second number : ";
				cin >> b;
				
				cout << fixed << showpoint << setprecision(2) << endl;
				avg = (a + b) / 2;
				cout << "Result : " << avg;
			
				break;
			}
			
			case 7:
			{
				cout << "\n\t\t|*****Square*****|\n";
				cout << "Enter a number : ";
				cin >> a;
				
				cout << fixed << showpoint << setprecision(2) << endl;
				sq = pow (a, 2.0);
				cout << "Result : " << sq;
			
				break;
			}
			
			case 8:
			{
				cout << "\n\t\t|*****Square Root*****|\n";
				cout << "Enter a number : ";
				cin >> a;
				
				cout << fixed << showpoint << setprecision(2) << endl;
				x = sqrt (a);
				cout << "Result : " << x;
			
				break;
			}
			
			case 9:
			{
				cout << "\n\t\t|*****Huge Power*****|\n";
				cout << "Enter a number : ";
				cin >> a; 
				cout << "Enter a power of that number : ";
				cin >> b;
				
				cout << fixed << showpoint << setprecision(2) << endl;
				Power = pow (a, b);
				cout << "Result : " << Power;
			
				break;
			}
			
			case 10:
			{
				cout << "\n\t\t|-----Trignometry-----|\n";
				//Menu BAR list for trignometric function at the 
				//choice of number 10.
				cout << "\nPress 1. for sine function.\n";
				cout << "Press 2. for cosine function.\n";
				cout << "Press 3. for tangent function.\n";
				cin >> choice;
				
				if (choice == 1)
				{
					cout << "\n\t\t|*****Sine Function*****|\n";
					cout << "Enter a number : ";
					cin >> a;
				
					cout << fixed << showpoint << setprecision(2) << endl;
					y = sin (a);
					cout << "Sin " << a << " = " << y;
				}
				
				else if (choice == 2)
				{
					cout << "\n\t\t|*****Cosine Function*****|\n";
					cout << "Enter a number : ";
					cin >> a;
				
					cout << fixed << showpoint << setprecision(2) << endl;
					y = cos (a);
					cout << "cos " << a << " = " << y;
				}
				
				else if (choice == 3)
				{
					cout << "\n\t\t|*****Tangent Function*****|\n";
					cout << "Enter a number : ";
					cin >> a;
				
					cout << fixed << showpoint << setprecision(2) << endl;
					y = tan (a);
					cout << "tan " << a << " = " << y;
				}
				
				else
				{
					cout << "You have entered unknown number!\n";
				}
			}
			
			case 11:
			{
				cout << "\n\t\t|-----Logarithmic-----|\n";
				//This is a Menu BAR list for logarithm functions.
				cout << "\nPress 1. for log function.\n";
				cout << "Press 2. for log10 function.\n";
				cin >> choice;
				
				if (choice == 1)
				{
					cout << "\n\t\t|*****log*****|\n";
					cout << "Enter a number : ";
					cin >> a;
				
					cout << fixed << showpoint << setprecision(2) << endl;
					z = log (a);
					cout << "log " << a << " = " << z;
				}
				
				else if (choice == 2)
				{
					cout << "\n\t\t|*****log10*****|\n";
					cout << "Enter a number : ";
					cin >> a;
				
					cout << fixed << showpoint << setprecision(2) << endl;
					z = log10 (a);
					cout << "log10 " << a << " = " << z;
				}
				
				else
				{
					cout << "You have entered unknown number!\n";
				}
			}
		}
		
		if (choice > 11)
		{
			cout << "\nYou have entered unknown number!\n";
		}
	
		cout << "\n\nPress (786) for Main Menu List BAR\n";
		cout << "Otherwise Close the program.\n";
		cin >> choice;
	}
	while (choice == 786);
	
	return 0;
}
