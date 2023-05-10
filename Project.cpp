#include<iostream>
#include<fstream>
#include <unistd.h>
using namespace std;
void login();
void registration();
void menu();
void month();

int main(){
    int c;
    cout<<"\t\t\t-----KElectric Portal-----\t\t\t"<<endl<<endl<<endl;
    cout<<"[1] for Login"<<endl<<"[2] for Register"<<endl<<"[3] for Exit"<<endl;
    cout<<"Enter Option No : ";
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
	cout<<"\n\t(7) Exit"<<endl<<endl;
	
	cout<<"Enter Your choice: ";
	cin>>a;
	
	if (a==1) {
		month();
		month();
		
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
	else if (a==7) {
		cout<<"Exit";
	}
	else {
		cout<<"Invalid Input";
	}
	

}


void month (){
	const int max= 12;
	string mon[max] = {"(1) Jan-2023" , "(2) Feb-2023 " , "(3) Mar-2023" , "(4) Apr-2023" , "(5) May-2023" , 
	"(6) Jun-2023" , "(7) Jul-2023", "(8) Aug-2023" , "(9) Sep-2023", "(10) Oct-2023", "(11) Nov-2023" , "(12) Dec-2023"};
	cout<<"Please reply with the number next to the month to recieve the bill. "<<endl;
	
	for (int i=0 ; i<=max ; i++) {
		cout<<"\n"<<mon[i]<<endl;
	}
	cout<<"(0) Main Menu"<<endl;
	int x;
	cout<<"\nReply No: ";
	cin>>x;
	
	if (x==0) {
		sleep(3);
		system("cls");
		menu();
	}
	
	else {
	cout<<endl<<endl;
	cout<<"Your Request for Duplicate Bill has been received. You will recieve the information below. "<<endl;
	sleep(3);
	system("cls");
	
	if (x==1){
		cout<<"Jan Bill";
	}
	else if (x==2){
		cout<<"feb Bill";
	}
	else if (x==3) {
		cout<<"Mar Bill";
	}
	else if (x==4) {
		cout<<"Apr Bill";
	}
	else if (x==5){
		cout<<"May Bill";
	}
	else if (x==6){
		cout<<"Jun bill";
	}
	else if (x==7) {
		cout<<"Jul bill";
	}
	else if (x==8){
	    cout<<"Aug bill";
	}
	else if (x==9){
		cout<<"Sep bill";
	}
	else if (x==10){
		cout<<"Oct bill";
	}
	else if (x==11){
		cout<<"Nov bill";
	}
	else if (x==12){
		cout<<"Dec bill";
	}
	
}
}
