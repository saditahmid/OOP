#include <iostream>
using namespace std;

class Somecrap{
    public:
    Somecrap& khaiso(){
        cout<<"Hae babu khaisi"<<endl;
    }
    Somecrap& ghumaiso(){
        cout<<"hae babu ghumaisi "<<endl;
    }
    Somecrap& hagso(){
        cout<<"Hae babu hagsi"<<endl;
    }

};

int main(){
    Somecrap babu;
    babu.khaiso().ghumaiso().hagso(); 

}