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
    friend istream& operator >> ( istream &input , Complex& temp);
    friend ostream& operator << ( ostream &output , Complex& temp);


};

istream &operator >> ( istream & input, Complex& temp){
    input>>temp.real;
    return input;
}
ostream &operator << ( ostream & output, Complex& temp){
    output<<temp.real;
    return output;
}


int main(){
    Complex c1;
    cin>>c1;
    cout<<c1<<endl;


}
