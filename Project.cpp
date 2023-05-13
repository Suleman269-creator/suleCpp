#include<iostream>
#include<fstream>
#include <unistd.h>
using namespace std;
void login();
void registration();
void menu(string);
void month(string);
void bill(string);
void user_d(string);
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
        menu(username);
    }else{
        system("cls");
        cout<<"Invalid Information"<<endl;
    }
  
  
  
}

void registration(){
 
        string username, password , acc_num, address, city, province;
        system("cls");
        cout<<"Enter Username: ";
        cin>>username;
        cout<<"Enter the Password : ";
        cin>>password;
        cout<<"Enter Address: ";
        cin>>address;
        cout<<"Enter City: ";
        cin>>city;
        
        ofstream f1("records.txt",ios::app);
        f1<<username<<" "<<password<<" "<<endl;
        system("cls");
        ofstream f2("user_details.txt",ios::app);
        f2<<username<<" "<<" "<<address<<" "<<city<<" "<<endl;
        cout<<"\nRegistration is successful\n";
        main();
    }


void menu(string username) {
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
		month(username);
		month(username);
		
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


void month (string username){
	const int max= 12;
	string mon[max] = {"(1) Jan-2023" , "(2) Feb-2023 " , "(3) Mar-2023" , "(4) Apr-2023" , "(5) May-2023" , 
	"(6) Jun-2023" , "(7) Jul-2023", "(8) Aug-2023" , "(9) Sep-2023", "(10) Oct-2023", "(11) Nov-2023" , "(12) Dec-2023"};
	cout<<"Please reply with the number next to the month to recieve the bill. "<<endl;
	
	for (int i=0 ; i<=max ; i++) {
		cout<<"\n"<<mon[i]<<endl;
	}
	cout<<"(0) Main Menu"<<endl;
	
	bill(username);

}

void bill(string username){
	
void jan(string username);
void feb(string username);
void Mar(string username);
void Apr(string username);
void May(string username);
void Jun(string username);
void Jul(string username);
void Aug(string username);
void Sep(string username);
void Oct(string username);
void Nov(string username);
void Dec(string username);
	

	int x;
	cout<<"\nReply No: ";
	cin>>x;
	
	if (x==0) {
		sleep(3);
		system("cls");
		menu(username);
	}
	
	else {
	cout<<endl<<endl;
	cout<<"Your Request for Duplicate Bill has been received. You will recieve the information below. "<<endl;
	sleep(3);
	system("cls");
		if (x==1){
		jan(username);
	}
	else if (x==2){
		feb(username);
	}
	else if (x==3) {
		Mar(username);
	}
	else if (x==4) {
		Apr(username);
	}
	else if (x==5){
		May(username);
	}
	else if (x==6){
		Jun(username);
	}
	else if (x==7) {
		Jul(username);
	}
	else if (x==8){
	    Aug(username);
	}
	else if (x==9){
		Sep(username);
	}
	else if (x==10){
		Oct(username);
	}
	else if (x==11){
		Nov(username);
	}
	else if (x==12){
	    Dec(username);
	}
}
}

void jan(string username) {

    user_d(username);
	cout<<endl;
	cout<<"jan\n";
}

void feb(string username) {
	user_d(username);
	cout<<endl;
	cout<<"feb\n";
}
void Mar(string username){
	
	user_d(username);
	cout<<endl;
	cout<<"Mar\n";
}
void Apr(string username){
	user_d(username);
	cout<<endl;
	cout<<"Apr\n";
}
void May(string username){
	user_d(username);
	cout<<endl;
	cout<<"May\n";
}
void Jun(string username){
	

	cout<<endl;
	cout<<"Jun\n";
}
void Jul(string username){

	cout<<endl;
	cout<<"Jul\n";
}
void Aug(string username){

	cout<<endl;
	cout<<"Aug\n";
}
void Sep(string username){

	cout<<endl;
	cout<<"Sep\n";
}
void Oct(string username){
	
	cout<<endl;
	cout<<"Oct\n";
}
void Nov(string username){

	cout<<endl;
	cout<<"Nov\n";
}
void Dec(string username){

	cout<<endl;
	cout<<"Dec\n";
}


void user_d(string username) {
	
	string search_string = username;
	ifstream file("user_details.txt");
    string line;
    bool isfound = false;
    cout<<"\t---------------- USER INFORMATION ----------------"<<endl<<endl;
    while (getline(file, line)) {
        if (line.find(search_string) != string::npos) {
            cout <<"\t"<< line << endl;
         isfound = true; 
        }
    }

    file.close();
}











