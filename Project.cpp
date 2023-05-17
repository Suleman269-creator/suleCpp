#include<iostream>
#include<fstream>
#include <unistd.h>
#include <cstdlib>
#include <iomanip>
using namespace std;
void login();
void registration();
void menu(string);
void month(string);
void bill(string);
void user_d(string);
void bill_cal(string);
void tech(string);

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
    
    string username,password, id , pass ;
    bool found = false;
    system("cls");
    cout<<"Enter Your username : ";
    cin>>username;
    cout<<"Enter Your Password : ";
    cin>>password;

    ifstream file("records.txt");

    while(file>>id>>pass){
       
        if(id == username && pass == password){
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
        int con_arr[]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int size = 0;
        for (int i=0 ; i<13 ; i++) {
        	con_arr[i]= rand();
        	size++;
        }
        
    unsigned int consumer_num = 0; 
	for (int i = 0; i <13; i++)  {
	 consumer_num = consumer_num * 10 + rand() % 10;
	}
        ofstream f2("user_details.txt",ios::app);
        f2<<username<<" "<<address<<" "<<city<<" "<<consumer_num<< endl;
		cout<<"\nRegistration is successful\n";
        main();
    }


void menu(string username) {
	int a;
		
	cout<<"Hi, Welcome to the Kelectric WhatsApp Self Service"<<endl;
	cout<<"For the desired service, reply with the option number."<<endl;
	cout<<"\n\t(1) Bill Generator "<<endl;
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
		
	}
	else if (a==2) {
		tech(username);
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
	cout<<"\nPlease reply with the number next to the month to recieve the bill. "<<endl;
	
	for (int i=0 ; i<=max ; i++) {
		cout<<"\n"<<mon[i];
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
	cout<<"\t----January----\t"<<endl<<endl;

	bill_cal(username);
	
}

void feb(string username) {
	user_d(username);
	cout<<endl;
cout<<"\t----February----\t"<<endl<<endl;
	bill_cal(username);
}
void Mar(string username){
	
	user_d(username);
	cout<<endl;
cout<<"\t----March----\t"<<endl<<endl;
	bill_cal(username);

}
void Apr(string username){
	user_d(username);
	cout<<endl;
cout<<"\t----April----\t"<<endl<<endl;
	bill_cal(username);

}
void May(string username){
	user_d(username);
	cout<<endl;
cout<<"\t----May----\t"<<endl<<endl;
	bill_cal(username);

}
void Jun(string username){
	
	cout<<endl;
cout<<"\t----June----\t"<<endl<<endl;
	bill_cal(username);

}
void Jul(string username){

	cout<<endl;
cout<<"\t----July----\t"<<endl<<endl;
	bill_cal(username);

}
void Aug(string username){

	cout<<endl;
cout<<"\t----August----\t"<<endl<<endl;
	bill_cal(username);

}
void Sep(string username){

	cout<<endl;
cout<<"\t----September----\t"<<endl<<endl;
	bill_cal(username);

}
void Oct(string username){
	
	cout<<endl;
cout<<"\t----October----\t"<<endl<<endl;
	bill_cal(username);

}
void Nov(string username){

	cout<<endl;
cout<<"\t----November----\t"<<endl<<endl;
	bill_cal(username);

}
void Dec(string username){

	cout<<endl;
cout<<"\t----December----\t"<<endl<<endl;
	bill_cal(username);

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

void bill_cal(string username){
	int units;
	cout<<"Enter Units: ";
	cin>>units;
	
	int rate_1 = 15;
	int rate_2 = 22;
	int rate_3 = 25;
	
	if (units<=100) {
		cout<<"Your Unit is according to rate_1 is "<<rate_1<<":\n"<<"You Total bill is: "<<units*rate_1<<"Rs";
	}
	else if (units<=200) {
		cout<<"Your Unit is according to rate_2 is "<<rate_2<<":\n"<<"Your Total bill is: "<<units*rate_2<<"Rs";
	}
	else {
	cout<<"Your Unit is according to rate_3 is "<<rate_3<<":\n"<<"Your Total bill is: "<<units*rate_3<<"Rs";
	}
	
}

void tech(string username) {
	string array[4] = {"Broken Wire" , "Sparking" , "Meter Issue" , "Area Light Issue"};
	for (int i=0 ; i<=3 ; i++){
		cout<<setw(20)<<"Press "<<1+i<<" FOR "<<array[i];
		cout<<endl;
	}
	
	int opt;
	cout<<"Press options: ";
	cin>>opt;
	
	if (opt==1){
	user_d(username);
	string message;
	cout<<"Enter Complain Message for Broken Wire (100 Word Limits): ";
    cin.ignore();
    getline(cin, message);

    if (message.length()>1000) {
        cout<<"Message exceeds the word limit of 1000 characters." << endl;
    } else {
        cout<<"Complaint Successfully Registered." << endl;
    }
}

else if (opt==2) {
	user_d(username);
	string message;
	cout<<"Enter Complain Message for Sparking (100 Word Limits): ";
	    cin.ignore();
    getline(cin, message);

    if (message.length()>1000) {
        cout<<"Message exceeds the word limit of 1000 characters." << endl;
    } else {
        cout<<"Complaint Successfully Registered." << endl;
    }
	
}
else if (opt==3){
	user_d(username);
	string message;
	cout<<"Enter Complain Message for Meter Issue (100 Word Limits): ";
    cin.ignore();
    getline(cin, message);

    if (message.length()>1000) {
        cout<<"Message exceeds the word limit of 1000 characters." << endl;
    } else {
        cout<<"Complaint Successfully Registered." << endl;
    }
}
else if (opt == 4) {
    user_d(username);
    string message;
    cout << "Enter Complain Message for Area Light Issue (100 Word Limits): ";
    cin.ignore();
    getline(cin, message);

    if (message.length()>1000) {
        cout<<"Message exceeds the word limit of 1000 characters." << endl;
    } else {
        cout<<"Complaint Successfully Registered." << endl;
    }
}
else {
	cout<<"Invalid Option";
	menu(username);
}
}



