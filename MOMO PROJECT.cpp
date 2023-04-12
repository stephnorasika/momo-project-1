#include<iostream>
using namespace std;

int main() {
	
	// Set a default values
	string pin = "0000" , new_pin, number;
	float balance = 1000;
	int attempts = 0 ,  choice;
	bool authenticated = false;
	
	
	
		
		// Authenticate user
		string input_pin;ecode:
		cout<< "Enter your input_pin:\n";
		cin>>input_pin;
		
		
		if(input_pin=="*170#") {
			// Correct pin entered, [reset attempt] counter
			   authenticated = true;
			   attempts=0;
		}
		else{
			// Incorrect pin entered, increment attempts counter
			  attempts++;
			  
			if(attempts >= 3) {
				// Too many attempts, [exits program]
				cout<< "too many attempts. Exiting program.\n";
				return 0;
				   
			}
			cout<< "incorrect pin. Try again.\n";
			goto ecode;   
		}
		
	
		// Loop until [user exits]
		while(authenticated){
		
		
		// Authenticated, [display menu]
	
		  cout<< "1. Check balance\n";
		  cout<< "2. Send money\n";
		  cout<< "3. Change/reset pin\n";
		  cout<< "4. Exits\n";
		  cout<< "Enter your choice:\n";
		  cin>>choice;
		  
		  // Handle [user choice]
		     switch(choice) {
		     	
		     	case 1:
		     		// Check balance
		     		 cout<<"Enter momo pin to check balance ";cin>>new_pin;
		     		   	   if(new_pin==pin){
		     		   	   	cout<< "Your balance is " << balance <<endl;
		     		   	   }
									else{
										cout<<"Wrong pin\a";
										return 0;	
									}
		     	
		     		
		     		   break;
		     		   
		     		   case 2:
		     		   	   // Send money
		     		   	   int amount;
		     		   	   cout<< "Enter number to send to:\n";
		     		   	   cin>>number;
		     		   	   cout<< "Confirm Number :\n";
		     		   	   cin>>number;
		     		   	   cout<< "Enter amount to send:\n";
		     		   	   cin>>amount;
		     		   	   cout<<"Enter momo pin to send ";cin>>new_pin;
		     		   	   if(new_pin==pin){
		     		   	   	
				     		   	if(amount>balance) {
				     		   		cout<< "insufficient amount.\n";
				     		   		return 0;
									}
									else {
										balance=balance-amount;
										cout<<amount<<" sent to "<<number<<endl;
										cout<<"Balance is " <<balance <<endl;
										return 0;
									}
									}else{
										cout<<"Wrong pin\a";
										return 0;	
									}
									
							
							case 3:
								// Change pin
								 cout<<"Enter momo pin to change pin ";cin>>new_pin;
		     		   	   if(new_pin==pin){
		     		   	  	cout<< "enter new_pin:\n";
								cin>>new_pin;
								
								pin=new_pin;
								cout<<"New pin is "<<pin;
		     		   	   }
									else{
										cout<<"Wrong pin\a";
										return 0;	
									}
							
							 
							  break;
								  
								case4:
								  	// Exits
								  	cout<< "exiting program.\n";
								  	 return 0;
								break;  	 
								default:
								  	 	cout<< "invalid choice. Try again.\n";
								  	 	return 0;
								break;
			 }
		}
		
			 	return 0;
		}
	



