#include<iostream>
using namespace std;

void doSome1(int y1){
    cout<<"++y1="<<++y1<<endl;
}
void doSome2(int& y2){
    cout<<"++y2="<<++y2<<endl;
}
void doSome3(int* p){

    cout<<"*p="<<*p<<endl;
    cout<<"++(*p)="<<++(*p)<<endl;
    cout<<"++p="<<++p<<endl;
    cout<<"++(*p)="<<++(*p)<<endl;
}

int main(){
	int x=10, w=20, z=30;
	//address of z: bytes 100 to 103
	doSome1(x);	//pass-by-value
	cout<<"x="<<x<<endl;
	doSome2(w);	//pass-by-reference
	cout<<"w="<<w<<endl;
	cout<<"&z="<<&z<<endl;
	doSome3(&z);	//pass-by-address
	cout<<"z="<<z<<endl;
	return 0;
}

