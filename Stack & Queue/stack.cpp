#include <iostream>
using namespace std;

int maks = 5;
string arrayNilai[5];
int top = 0;

bool isFull(){
	if(top == maks){
		return true;
	} else {
		return false;
	}
}

void push(string data){
	if(isFull()){
		cout<< "Data penuh"<<endl;
	} else {
		arrayNilai[top] = data;
		top++;
	}
}

void display(){
cout<<"Daftar stack : "<<endl;
for(int i = maks-1;i >= 0;i--){
	if(arrayNilai[i] != ""){
	cout<<"Data : "<< arrayNilai[i]<<endl;
		}
	}
	cout<<"\n";
}	

int main(){
	push("7");
	display();
	push("8");
	display();
//	push("10");
//	display();
//	push("11");
//	display();
//	push("12");
//	display();
	
	cout<<"Data full ? : " <<isFull()<<endl;
	
	}
