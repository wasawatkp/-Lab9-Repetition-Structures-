#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;


int main(){	

	double prinC,InTerest,InTerest2,Payment,Total,Nbalance;
	int i = 1;
	cout << "Enter initial loan: ";
	cin >> prinC;
	cout << "Enter interest rate per year (%): ";
	cin >> InTerest;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	InTerest2 = (prinC*InTerest)/100;
	Total = prinC + InTerest2;
	if(Total <= Payment) Payment = Total;
	Nbalance = Total - Payment;
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << prinC;
	cout << setw(13) << left << InTerest2;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << Nbalance;
	cout << "\n";	

	while (Nbalance > 0)
	{
	
	i++;
	prinC = Nbalance;
	InTerest2 = (prinC*InTerest)/100;
	Total = prinC + InTerest2;
	if(Total <= Payment) Payment = Total;
	Nbalance = Total - Payment;
	
	
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << prinC;
	cout << setw(13) << left << InTerest2;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << Nbalance;
	cout << "\n";	

	

	
	}

	return 0;
}
