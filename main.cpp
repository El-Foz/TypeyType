#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void createaccount(){
	string username;
	cout<<"Create a username ";
	cin>>username;
	ofstream createaccount;
  createaccount.open("accounts.txt", ios::app); // Will store the users information.
  createaccount << username << endl;
  createaccount.close();
  cout << "Account created!" << endl;
};
void verifyAccount(){
	ifstream MyReadFile("accounts.txt");
	
};
void game(){
	string i;
	cout<<"type in 10 and then press enter> ";
	cin>>i;
	if(i=="10"){
		cout<<"you win\n";
	}else if(i=="kyrus" || i=="Kyrus"){
		cout<<"you super lose\n";
	}else if(i=="winston" || i=="Winston"){
		cout<<"\n | \n | \nO O\n";
	}else if(i=="teddy"||i=="Teddy"){
		cout<<"\n*floogles*\n";
	}else{
		cout<<"you lose\n";
	};
}
int main(){
	game();
};