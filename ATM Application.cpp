#include <iostream>
using namespace std;

	//Menu for the ATM Application
void showMenu(){
	cout<<"**********MENU**********"<<endl;
	cout<<"1. Check Balance"<<endl;
	cout<<"2. Deposit"<<endl;
	cout<<"3. Withdraw"<<endl;
	cout<<"4. Exit The Program"<<endl;
	cout<<"************************"<<endl;
}
int main (){
	//Checking of Balance, Deposit of Money, Withdraw Money, Show Menu
	int option;
	double balance = 500;

	do{
	showMenu();
	cout<<"Option: ";
	cin>>option;

	switch(option){
		case 1:cout<<"Available Balance is: "<<balance<<" $ "<<endl; break;
			case 2:cout<<"Deposit Desired Amount: ";
			double depositAmount;
			cin>>depositAmount;
			balance+= depositAmount;
			break;
				case 3:cout<<"Withdraw Desired Amount: ";
				double withdrawAmount;
				cin>>withdrawAmount;
				if(withdrawAmount<=balance)
					balance-= withdrawAmount;
					else
						cout<<"Not Enough Money!"<<endl;
				break;
	}
} while (option!=4);
	
	system("pause>0");
}
