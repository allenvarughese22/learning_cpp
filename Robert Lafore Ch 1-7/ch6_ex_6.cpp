#include <iostream>
using namespace std;

class date{
private:
int month, date,year;
char temp;
public:
void getdate(){
    cout << "enter the date in dd/mm/yyyy format"<<endl;
    cin>>date>>temp>>month>>temp>>year;
}

void showdate(){
    cout <<"the entered date is "<<endl;
    cout<<date<<"/"<<month<<"/"<<year<<endl;
    }
};

enum etype {laborer, secretary, manager, accountant, executive, researcher};

class employee {

    private:
        int empl_numb;
        float emp_compens;
        char type;
        date date1;
        etype emp;

    public:
   
    employee(): empl_numb(0),emp_compens(0){}

    void set_data(){
        set_empl_numb();
        set_empl_compensation();
        date1.getdate();
        cout << "Enter employee type (first letter only laborer, secretary, manager, accountant, executive, researcher): ";
        cin >> type;
            switch (type){
        case 'l': emp = laborer; break;
        case 's': emp = secretary; break;
        case 'm': emp = manager; break;
        case 'a': emp = accountant; break;
        case 'e': emp = executive; break;
        case 'r': emp = researcher; break;
        default:
            break;
    }

    }

    void get_data(){
        display_empl_number();
        display_empl_compensation();
        switch(emp){
        case laborer:
            cout << "Employee type is laborer";
            break;
        case secretary:
            cout << "Employee type is secretary";
            break;
        case manager:
            cout << "Employee type is manager";
            break;
        case accountant:
            cout << "Employee type is accountant";
            break;
        case executive:
            cout << "Employee type is executive";
            break;
        case researcher:
            cout << "Employee type is researcher";
            break;
        default:
            cout << "Invalid input";
            break;}

    }
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

cout <<"enter the details of first employee"<<endl;
e1.set_data();
cout <<"enter the details of second employee"<<endl;
e2.set_data();
cout <<"enter the details of third employee"<<endl;
e3.set_data();

cout <<"details of first employee"<<endl;
e1.get_data();

cout <<"details of second employee"<<endl;
e2.get_data();

cout <<"details of third employee"<<endl;
e3.get_data();


return 0;

}