#include <iostream>
#include <string>
#include <fstream>
using namespace std;
string user;
bool loggedin=false;
void createaccount(){
	string username;
	string g;
	bool c=true;
	ifstream gabrieliscool;
	cout<<"Create a username. Must be under 12 characters (Please keep in mind that anyone can view this on github and replit)> ";
	cin>>username;
	gabrieliscool.open("accounts.txt");
	string forbid[]={"(", " ", ")", "[", "]", "{", "}",  "!", "@", "#", "$", "%", "^", "&", "*", "`", "~", "\"", "," "'", "+", "/", "\\", "|", "<", ">", "?", "."};
	while(getline(gabrieliscool, g)){
		for(int p=0; p<end(forbid)-begin(forbid); p++){
			if(!(g.find(forbid[p])<1844674407370955161)){
				cout<<"Cannot contain specific characters or ";
				c=false;
				break;
			}
		}
		if(g.length()>12){
			cout<<"username too long\n";
			c=false;
			break;
		}
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
		user=username;	
		loggedin=true;
	}
};
void verifyAccount(){
	loggedin=false;
	ifstream accounts;
	accounts.open("accounts.txt");
	string g;
	string check;
	while(getline(accounts, g)){
		cout<<"what is your username? ";
		cin>>check;
		if(check==g){
			cout<<"Username correct\n";
			loggedin=true;
		}else{
			cout<<"Username incorrect\n";
		};
	};
};
void game(){
;;string i;
;;cout<<"type in 10 and then press enter> ";
;;cin>>i;
;;if(i=="10"){
;;;;cout<<"you win\n";
;;}else if(i=="kyrus" || i=="Kyrus"){
;;;;cout<<"you super lose\n";
;;}else if(i=="winston" || i=="Winston"){
;;;;cout<<"\n | \n | \nO O\n";
;;}else if(i=="teddy"||i=="Teddy"){
;;;;cout<<"\n*floogles*\n";
;;}else if(i=="2147483647"){
;;;;cout<<"\nWarning: 32-bit integer limit has been reached. Shutting down\n";
;;}else{
;;;;cout<<"you lose\n";
;;};
};
int main(){
	string l;
	cout<<"Do you want to:\n1) Create an Account \n2) Log in\n3) Play The Game\n4) Mystery option\n";
	while(true){
		cin>>l;
		if(l=="1"){
			createaccount();
		}else if(l=="2"){
			verifyAccount();
		}else if(l=="3"){
			if(loggedin){
				game();
			}else{
				cout<<"You Need to log in\n";
			}
		}else if(l=="4"){
			cout<<"Umm...\nThere is no option 4 \nWhat should I do?\nI know!\nShutting down\n\n";
			break;
		};
		cout<<"Enter 1, 2, or 3 ";
	};
};