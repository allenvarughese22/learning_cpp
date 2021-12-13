#include <iostream>
using namespace std;

class employee {

    private:
        int empl_numb;
        float emp_compens;

    public:
    employee(): empl_numb(0),emp_compens(0){}
    void set_empl_numb(){
        cout<<"enter the employeer number and press enter"<<endl;
        cin>> empl_numb;
    }
    void set_empl_compensation(){
        cout<<"enter the employeer compensation and press enter"<<endl;
        cin>> emp_compens ;}

    void display_empl_number(){
        cout<<"the employee number:"<< empl_numb <<endl; 
    }

    void display_empl_compensation(){
        cout<<"the employee compesation:"<< emp_compens <<endl; 
}

};

int main(){
employee e1,e2,e3;


e1.set_empl_numb();
e1.set_empl_compensation();
e2.set_empl_numb();
e2.set_empl_compensation();
e3.set_empl_numb();
e3.set_empl_compensation();

e1.display_empl_number();
e1.display_empl_compensation();
e2.display_empl_number();
e2.display_empl_compensation();
e3.display_empl_number();
e3.display_empl_compensation();
return 0;

}