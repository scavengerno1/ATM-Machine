#include <iostream>
#include <vector>
#include <limits>
using namespace std;

class Bad_account{};
class Bad_pin{};
class Bad_selection{};

double withdraw(double&);
double deposit(double&);
void greeting();

int main()
{
	char c;
	string account_number, pin_number;
	vector<string>account{ "abcd1234", "wasd5678", "joe1224" }; // account storage.
	vector<string>pin{ "1234", "5678", "6789"};
	while(true)
	{
		cout << "Press q to quit or anything else to continue: ";
		cin >> c;
		system("cls");
		cin.ignore( numeric_limits<streamsize>::max(), '\n' );
		if ( c =='q' or c == 'Q' )
		{
			cout << "The program will exit now.\n";
			break;
		}	
		try
		{
			greeting();
			cout << "Welcome! Please enter a account number:\n";
			cin >> account_number;
			if ( account_number == account[0] )
			{
				cout << "Please enter Pin:\n";
				cin  >> pin_number;
				if ( pin_number == pin[0])
					cout << "\nAccess Granted!\n";
				else
					throw Bad_pin(); 
			}
			else if ( account_number == account[1] )
			{
				cout << "Please enter Pin:\n";
				cin  >> pin_number;
				if ( pin_number == pin[1])
					cout << "Access Granted!\n";
				else
					throw Bad_pin();
			}
			else if ( account_number == account[2] )
			{
				cout << "Please enter Pin:\n";
				cin  >> pin_number;
				if ( pin_number == pin[2])
					cout << "Access Granted!\n";
				else
					throw Bad_pin();
			}
			else
				throw Bad_account();
		}
		
		catch(Bad_account)
		{
			cerr << "Invalid account\n";
			cin.clear();   
			cin.ignore(numeric_limits<streamsize>::max(), '\n' );
		}
		catch(Bad_pin)
		{
			cerr << "Incorrect pin\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n' ); 
		}
			
		while(account_number == account[0] and pin_number == pin[0])
		{
			double checking = 563.78, saving = 700.00;
			char x, b, c;
			
			while ( true )
			{
				cout << "\nPlease make a selection\n";
				cout << "1. Checking\n"
				 	 << "2. Savings\n"
					 << "3. Quit\n"
					 << "--> ";
			try
			{
				cin >> x ;
				if ( x == '3' )
					 return main();
				while(x == '1'){
					try{
						cout << "\nChecking account accesed!\n";
						cout << "\nPlease make a selection\n"
							 << "1. Withdraw\n"
							 << "2. Deposit\n"
							 << "3. Check Balance\n"
							 << "4. Quit\n"
							 << "--> ";
						cin >> b;
						switch(b){
							case('1'):
								cout << "\nEnter the amount you want to withdraw: $";
								withdraw(checking);
								cout << "\nNew balance: $" << checking << endl;
								break;
							case('2'):
								cout << "\nEnter the amount you want to deposit: $";
								deposit(checking);
								cout << "\nNew balance: $" << checking << endl;
								break;
							case('3'):
								cout << "\nAccount balance is: $" << checking << endl;
								break;
							case('4'):
								break;
							default:
								throw Bad_selection();
								break;
							}
									
						}
					catch(Bad_selection){
						cerr << "\nIncorrect selection\n";
						cerr << "Please make the correct selection\n";
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n' );
						}
					if( b == '4')
					{
						x=4;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n' ); 
					}	
						
				}
				while(x == '2'){
					try{
						cout << "\nSavings account accesed!\n";
						cout << "\nPlease make a selection\n"
							 << "1. Withdraw\n"
							 << "2. Deposit\n"
							 << "3. Check Balance\n"
							 << "4. Quit\n"
							 << "--> ";
						cin >> b;
						switch(b){
							case('1'):
								cout << "\nEnter the amount you want to withdraw: $";
								withdraw(saving);
								cout << "\nNew balance: $" << saving << endl;
								break;
							case('2'):
								cout << "\nEnter the amount you want to deposit: $";
								deposit(saving);
								cout << "\nNew balance: $" << saving << endl;
								break;
							case('3'):
								cout << "\nAccount balance is: $" << saving << endl;
								break;
							case('4'):
								break;
							default:
								throw Bad_selection();
								break;
						}	
					}
				catch(Bad_selection){
					cerr << "\nIncorrect selection\n";
					cerr << "Please make the correct selection\n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n' ); 
					}
				if( b == '4')
					{
						x=4;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n' ); 
					}	
					
				}
				
				
				if (x!=1 and x!=2 and x!=3 and x!=4 )
					throw Bad_selection();			
			}
			catch(Bad_selection){
				cerr << "Incorrect selection\n";
				cerr << "Please make the correct selection\n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n' ); 
			}
				
			}	
			
		}
		
while(account_number == account[1] and pin_number == pin[1])
		{
			double checking = 233.16, credit_card = 829.35;
			char x, b, c;
			
			while ( true )
			{
				cout << "\nPlease make a selection\n";
				cout << "1. Checking\n"
				 	 << "2. Credit Card\n"
					 << "3. Quit\n"
					 << "--> ";
			try
			{
				cin >> x ;
				if ( x == '3' )
					 return main();
				while(x == '1'){
					try{
						cout << "\nChecking account accesed!\n";
						cout << "\nPlease make a selection\n"
							 << "1. Withdraw\n"
							 << "2. Deposit\n"
							 << "3. Check Balance\n"
							 << "4. Quit\n"
							 << "--> ";
						cin >> b;
						switch(b){
							case('1'):
								cout << "\nEnter the amount you want to withdraw: $";
								withdraw(checking);
								cout << "\nNew balance: $" << checking << endl;
								break;
							case('2'):
								cout << "\nEnter the amount you want to deposit: $";
								deposit(checking);
								cout << "New balance: $" << checking << endl;
								break;
							case('3'):
								cout << "\nAccount balance is: $" << checking << endl;
								break;
							case('4'):
								break;
							default:
								throw Bad_selection();
								break;
							}
									
						}
					catch(Bad_selection){
						cerr << "\nIncorrect selection\n";
						cerr << "Please make the correct selection\n";
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n' );
						}
					if( b == '4')
					{
						x=4;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n' ); 
					}	
						
				}
				while(x == '2'){
					try{
						cout << "\nCredit Card account accesed!\n";
						cout << "\nPlease make a selection\n"
							 << "1. Pay Bill\n"
							 << "2. Get Cash\n"
							 << "3. Check Balance\n"
							 << "4. Quit\n"
							 << "--> ";
						cin >> b;
						switch(b){
							case('1'):
								cout << "\nEnter the amount you want to pay: $";
								withdraw(credit_card);
								cout << "\nNew balance: $" << credit_card << endl;
								break;
							case('2'):
								cout << "\nEnter the amount of cash you want: $";
								deposit(credit_card);
								cout << "New balance: $" << credit_card << endl;
								break;
							case('3'):
								cout << "\nAccount balance is: $" << credit_card << endl;
								break;
							case('4'):
								break;
							default:
								throw Bad_selection();
								break;
						}	
					}
				catch(Bad_selection){
					cerr << "\nIncorrect selection\n";
					cerr << "Please make the correct selection\n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n' ); 
					}
				if( b == '4')
					{
						x=4;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n' ); 
					}	
					
				}
				
				
				if (x!=1 and x!=2 and x!=3 and x!=4 )
					throw Bad_selection();			
			}
			catch(Bad_selection){
				cerr << "Incorrect selection\n";
				cerr << "Please make the correct selection\n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n' ); 
			}
				
			}	
			
		}
	
	
	while(account_number == account[2] and pin_number == pin[2])
		{
			double checking = 12602.15, saving = 25000.00;
			char x, b, c;
			
			while ( true )
			{
				cout << "\nPlease make a selection\n";
				cout << "1. Checking\n"
				 	 << "2. Saving\n"
					 << "3. Quit\n"
					 << "--> ";
			try
			{
				cin >> x ;
				if ( x == '3' )
					 return main();
				while(x == '1'){
					try{
						cout << "\nChecking account accesed!\n";
						cout << "\nPlease make a selection\n"
							 << "1. Withdraw\n"
							 << "2. Deposit\n"
							 << "3. Check Balance\n"
							 << "4. Quit\n"
							 << "--> ";
						cin >> b;
						switch(b){
							case('1'):
								cout << "\nEnter the amount you want to withdraw: $";
								withdraw(checking);
								cout << "\nNew balance: $" << checking << endl;
								break;
							case('2'):
								cout << "\nEnter the amount you want to deposit: $";
								deposit(checking);
								cout << "New balance: $" << checking << endl;
								break;
							case('3'):
								cout << "\nAccount balance is: $" << checking << endl;
								break;
							case('4'):
								break;
							default:
								throw Bad_selection();
								break;
							}
									
						}
					catch(Bad_selection){
						cerr << "\nIncorrect selection\n";
						cerr << "Please make the correct selection\n";
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n' );
						}
					if( b == '4')
					{
						x=4;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n' ); 
					}	
						
				}
				while(x == '2'){
					try{
						cout << "\nSavings account accesed!\n";
						cout << "\nPlease make a selection\n"
							 << "1. Withdraw\n"
							 << "2. Deposit\n"
							 << "3. Check Balance\n"
							 << "4. Quit\n"
							 << "--> ";
						cin >> b;
						switch(b){
							case('1'):
								cout << "\nEnter the amount you want to withdraw: $";
								withdraw(saving);
								cout << "\nNew balance: $" << saving << endl;
								break;
							case('2'):
								cout << "\nEnter the amount you want to deposit: $";
								deposit(saving);
								cout << "New balance: $" << saving << endl;
								break;
							case('3'):
								cout << "\nAccount balance is: $" << saving << endl;
								break;
							case('4'):
								break;
							default:
								throw Bad_selection();
								break;
						}	
					}
				catch(Bad_selection){
					cerr << "\nIncorrect selection\n";
					cerr << "Please make the correct selection\n";
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n' ); 
					}
				if( b == '4')
					{
						x=4;
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n' ); 
					}	
					
				}
				
				
				if (x!=1 and x!=2 and x!=3 and x!=4 )
					throw Bad_selection();			
			}
			catch(Bad_selection){
				cerr << "Incorrect selection\n";
				cerr << "Please make the correct selection\n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n' ); 
			}
				
			}	
		}
		}

	return 0;
}

void greeting()
{
	cout << "Welcome to the bank!!!\n";
	cout << "------------------\n";
}

double withdraw(double& n)
{
	double amount;	
	cin >> amount;
	cout << "\nInitial balance: $" << n;
	n -= amount;
//	cout << "Withdrew $" << amount << "... " << endl;
	return n;	
}

double deposit(double& n)
{
	double amount;
	cin >> amount;
	cout << "\nInitial balance: $" << n << endl;
	n += amount;
//	cout << "Deposited $" << amount << "... " << endl;
	return n;	
}

