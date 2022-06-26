#include <iostream>

using namespace std;

string name;
string psw;
int age;
string nNutzername;
string ppsw;
int question;
int selection1;
float balance = 800;
int penis;
string idk;
int recovselect;
string pet;
string school;
float withdraw;
int newselect;
string newpet;
string newschool = "hello";
int conlog;
int secquest;
int keinplan;
int newsecquest;
float deposit;
int abf3;
float sendmoney;
string namemoney;
int sendabf;




void recover() {
	printf("\033c");
	cout << ("PASSWORD RECOVER\n");
	cout << ("__________________\n\n\n");
	cout << ("choose your security question\n");
	cout << ("________________________________\n");
	cout << ("what was your first pet                what was your first school");
	cout << ("\n        1                                          2       \n  ");
	cin >> newsecquest;

	if (newsecquest == 1) {
		cout << ("what was your first pet?\n");
		cin >> newpet;

		if (pet == newpet) {
			cout << ("write your new password\n");
			cin >> psw;

		}
	}

	if (newsecquest == 2) {
		cout << ("what was your first school?\n");
		cin >> newschool;
	}



	if (school == newschool) {
		cout << ("write your new password");
		cin >> psw;

	}

}

void login()
{
	cout << ("\n       login\n");
	cout << ("________");
	cout << (" \nNutzername     ");
	cin >> nNutzername;
	cout << ("Passwort      ");
	cin >> ppsw;

	if (name == nNutzername && psw == ppsw) {
		cout << ("Your registration is succesful\n\n\n");
		cout << ("give any input to continue");


		cin >> idk;
		printf("\033c");

		penis = 1;

	}
	else {
		cout << ("username or password is wrong\n\n");
		cout << (" press 4 to retry\n");
		cout << (" press 3 to exit\n");
		cout << (" press 5 to recover your password\n");
		cin >> question;
		if (question == 4) {
			login();
		}

		if (question == 3) {

			exit(0);
		}

		if (question == 5) {

			keinplan = 1;
		}

	}

}

	




void selection() {
	printf("\033c");
	cout << ("withdraw          deposit        send money\n\n");
	cout << ("   1                  2                3 \n");
	cin >> selection1;

	if (selection1 == 1) {
		cout << ("\n\n\nYour current balance is ") << balance << ("");
		cout << ("\nhow much do you want to withdraw\n");
		cin >> withdraw;
		printf("\033c");
		cout << ("your new Balance is ");
		balance = balance + withdraw;
		cout << (balance);
		cout << ("euro");

	}

	if (selection1 == 2) {
		cout << ("Your current balance is ") << balance << ("");
		cout << ("\nhow much do you want to deposit");
		cin >> deposit;
		balance = balance - deposit;
		printf("\033c");
		cout << ("your new balance is ");
		cout << (balance);
		cout << ( "euro");
		cout << ("\n______________________\n\n");
	}


	if (selection1 == 3) {
		cout << ("Your current balance is ") << balance << ("");
		cout << ("\nhow is the name of the person who should recieve the money?\n");
		cin >> (namemoney);
		cout << ("how much do you want to send\n");
		cin >> sendmoney;
		cout << ("to confirm your action please press 1\n");
		cin >> sendabf;
		cout << ("you sent ") << namemoney << (" ") << sendmoney << (" euro");
		balance = balance - sendmoney;
		cout << (" your new balance is ") << balance << (" euro\n\n");

		if (sendabf != 1) {

			selection();
		}

	}
	
	
}




void nopes() {

	if (age < 18) {

		cout << ("you are not old enough");

		exit(0);
	}

}


void regist() {

	cout << (" REGISTER AND LOGIN \n");
	cout << ("___________________ \n");
	cout << ("press 5 to continue with your login  / give any input to continue your registration\n");
	cin >> conlog;
	if (conlog == 5) {
		login();
	}

	else {
		cout << ("REGISTER");
		cout << ("\n_______\n");
		cout << ("Age           ");
		cin >> age;
		if (age < 18) {
			nopes();
		}
		cout << ("username     ");
		cin >> name;
		cout << ("Password     ");
		cin >> psw;
		cout << ("\n\nchoose your security question\n");
		cout << ("_______________________________\n");
		cout << ("what was your first pet                what was your first school");
		cout << ("\n        1                                          2       \n\n  ");
		cin >> secquest;

		if (secquest == 1) {
			cout << ("what was your first pet?\n");
			cin >> pet;
		}
		
		if (secquest == 2) {
			cout << ("what was your first school?");
			cin >> school;
		}

		cout << ("\nyour registration was succesful\n\n");
		printf("\033c");
	}
}



int main(){

	regist();
	login();

	if (penis == 1) {

		selection();

		if (balance < 0) {

			cout << ("\nyour Balance is ");
			cout << (balance);
			cout << ("\n____________________\n");
			cout << ("you owe us money hhahahha\n");

		}
		
		cout << ("\n to end the system please press 1      ");
		cout << (" to continue please press 2\n");
		cin >> abf3;
		if (abf3 == 1) {

			exit(0);

		}
		if (abf3 == 2) {

			selection();
		}
	}

	

	if (keinplan == 1) {

		recover();
	}




}


