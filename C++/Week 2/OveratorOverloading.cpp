#include<iostream>
using namespace std;

class Complex{
    private: 
    int real, imaginary;
    public:
    Complex(){
        real=0;
        imaginary=0;
    }
    Complex(int r, int t){
        real = r;
        imaginary= t;
    }
    void print(){
        cout<<"Real  : "<<real << '+'<<" Imaginary :"<<imaginary<< " i"<<endl;
    }
    Complex operator +(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.imaginary=imaginary+c.imaginary;
        return temp;
    }
    Complex operator -(Complex c){
        Complex temp;
        temp.real=real-c.real;
        temp.imaginary=imaginary-c.imaginary;
        return temp;
    }
    Complex operator ++(){
        Complex temp;
        temp.real=real++;
        return temp;
    }

};


int main(){
    Complex c1(1,5);
    Complex c2(1,1);
    Complex c3,c4,c5,c6;
    c1.print();
    cout<<endl;

    c3=c1+c2;
    c4=c1-c2;
    c5=++c1;

  //  c3.print();
  //  c4.print();
    c5.print();


}
