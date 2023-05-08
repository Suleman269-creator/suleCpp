#include<iostream>
#include<fstream>
#include <unistd.h>
using namespace std;
void login();
void registration();
void menu();

int main(){
    int c;
    cout<<"\t\t\t-----KElectric Portal-----\t\t\t"<<endl<<endl<<endl;
    cout<<"[1] for Login"<<endl<<"[2] for Register"<<endl<<"[3] for Exit"<<endl;
    cout<<"Enter Command : ";
    cin>>c;

    if(c == 1){
        login();
    }else if(c == 2){
        registration();
    }else if(c == 3){
        cout<<"Thank You for coming";
    }else{
        system("cls");
        cout<<"Please Select From Given Options";
        main();
    }
}

void login(){
    
    string username,password,un,pw;
    bool found = false;
    system("cls");
    cout<<"Enter Your username : ";
    cin>>username;
    cout<<"Enter Your Password : ";
    cin>>password;

    ifstream file("records.txt");

    while(file>>un>>pw){
       
        if(un == username && pw == password){
            found = true;
            break;
        }
    }
    file.close();

    if(found){
        system("cls");
        cout<<"Successfully Login";
        sleep(2);
        system ("cls");
        menu();
    }else{
        system("cls");
        cout<<"Invalid Information"<<endl;
    }
  
}

void registration(){
 
        string Address , username, password;
        system("cls");
        cout<<"Enter Username: ";
        cin>>username;
        cout<<endl;
        cout<<"Enter the Password : ";
        cin>>password;
        cout<<endl;
        cout<<"Enter Address: ";
        cin>>Address;
        cout<<endl;
        
        ofstream f1("records.txt",ios::app);
        f1<<username<<" "<<password<<" "<<Address<<endl;
        system("cls");
        cout<<"\nRegistration is successful\n";
        main();
    }


void menu() {
	int a;
	cout<<"Hi, Welcome to the Kelectric WhatsApp Self Service"<<endl;
	cout<<"For the desired service, reply with the option number."<<endl;
	cout<<"\n\t(1) Duplicate Bill "<<endl;
	cout<<"\n\t(2) Technical Complaints "<<endl;
	cout<<"\n\t(3) Billing Complaints "<<endl;
	cout<<"\n\t(4) Power Status & Load Shedding Schedule "<<endl;
	cout<<"\n\t(5) New Connections "<<endl;
	cout<<"\n\t(6) Find Us "<<endl;
	cout<<"\n\t(0) Exit"<<endl<<endl;
	
	cout<<"Enter Your choice: ";
	cin>>a;
	
	if (a==1) {
		cout<<"Duplicate func";
	}
	else if (a==2) {
		cout<<"Technical func";
	}
	else if (a==3) {
		cout<<"Bill Func";
	}
	else if (a==4){
		cout<<"Power Func";
	}
	else if (a==5){
		cout<<"New func";
	}
	else if (a==6){
		cout<<"Find func";
	}
	else if (a==0) {
		cout<<"Exit";
	}
	else {
		cout<<"Invalid Input";
	}
	
	
	
	
	
	
	
	
}
