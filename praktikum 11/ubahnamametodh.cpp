#include <iostream>
using namespace std;

class hewan{
    public: 
    void predator(){
    cout << "hewan ini predator" << endl;}
    void taring(){
    cout << "hewan ini bertaring" << endl;}
    void cakar(){
    cout << " hewan ini memiliki cakar" << endl;}
};

class harimau : public hewan{
    public:
    void predator(){
    cout << "ini adalah harimau" << endl;}
};

class singa : public hewan{
    public:
    void predator(){
    cout << "ini adalah singa" << endl;
    }
};

class macan : public hewan{
    public:
    void predator(){
    cout << "ini adalah macan" << endl;}
};

int main () {
    harimau hrm;
   // hrm.getHarimau();
    hrm.predator();
    hrm.taring();
    hrm.cakar();

singa sng;
// sng.getSinga();
sng.predator();
sng.taring();
sng.cakar(); 

macan mcn;
// mcn.getMacan();
mcn.predator();
mcn.taring();
mcn.cakar();

return 0;
}