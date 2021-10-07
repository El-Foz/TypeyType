#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int score;
string user;
void createaccount(){
	string username;
	string g;
	bool c=true;
	ifstream gabrieliscool;
	cout<<"Create a username (Please keep in mind that anyone can view this on github and replit)> ";
	cin>>username;
	gabrieliscool.open("accounts.txt");
	while(getline(gabrieliscool, g)){
		if(username==g){
			cout<<"Username Taken\n";
			c=false;
			break;
		}
	}
	if(c){
		ofstream createaccount;
  	createaccount.open("accounts.txt", ios::app);
  	createaccount << username << endl;
  	createaccount.close();
  	cout << "Account created!" << endl;		
	}
};
void verifyAccount(){
	ifstream accounts;
	accounts.open("accounts.txt");
	string g;
	string check;
	while(getline(accounts, g)){
		cout<<"what is your username? ";
		cin>>check;
		if(check==g){
			cout<<"Username correct\n\n";
		}else{
			cout<<"Username incorrect\n\n";
		};
	};
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
  }else if(i=="2147483647"){
		cout<<"\nWarning: 32-bit integer limit has been reached. Shutting down\n";
	}else{
		cout<<"you lose\n";
	};
}
int main(){
	int i;
	cout<<"Do you want to:\n1) Create an Account \n2) Log in\n3) Play The Game\n4) Mystery option\n";
	while(true){
		cin>>i;
		if(i==1){
			createaccount();
		}else if(i==2){
			verifyAccount();
		}else if(i==3){
			game();
		}else if(i==4){
			cout<<"Umm...\nThere is no option 4 \nWhat should I do?\nI know!\nShutting down\n\n";
			break;
		}else{
			cout<<"You have broken a sacred trust between user and computer. You shall now die\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			
		}
		cout<<"what do you want to do? 1, 2, 3, or 4? ";
	}
};