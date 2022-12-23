#include <iostream>
using namespace std;

int main(){
	int age,L,bounty;
	string ch;
	cout << "Enter your age: ";
	cin >>age;
	if(age<=25){
		cout << "Enter your height: ";
		cin >> L;
		if(L<100){
			ch = "Chopper";
		}else if(L<180){
			ch = "Usopp";
		}else{
			cout << "Enter your bounty: ";
			cin >> bounty;
			if(bounty>1100000000){
				ch="Zoro";
			}else{
				ch="Sanji";
			}
		}
	}else if(age<=60){
		cout << "Enter your bounty: ";
		cin >> bounty;
		
		if(bounty > 500000000){
			ch = "Jinbe";
		}else{
			ch = "Franky";
		}
	}else{
		ch ="Brook";
		}
	cout << "Your character = " << ch;
}
