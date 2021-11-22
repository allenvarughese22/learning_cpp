#include <iostream>
#include <conio.h>
using namespace std;

class tollBooth{
private:
    unsigned int car;
    double money;
public:
    tollBooth():car{0}, money{0}{}
    void payingCar(){
        car++;
        money +=0.5;
    }
    void nopayCar(){
        car++;
    }
    void display() const {
        cout<< "the car value is "<< car <<endl;
        cout <<"the total money collected is "<< money << endl;

    }
};

int main(){
tollBooth booth1;
char ch;
const char ESC = 27;

cout <<"press 0 for non paying cars"<<endl;
cout <<"press 1 for  paying cars"<<endl;
cout <<"press esc to escape"<<endl;



do
{
ch  =getche();
cout<<"\n";
if (ch == '0'){
    booth1.nopayCar();
    booth1.display();

}
if (ch == '1'){
    booth1.payingCar();
    booth1.display();
}

} while (ch != ESC);

booth1.display();
return 0;

}