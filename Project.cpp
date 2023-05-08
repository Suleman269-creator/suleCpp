//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//void login();
//void registration();
//
//int main(){
//	int c;
//	cout<<"\t\t\t-----KElectric Portal-----\t\t\t"<<endl<<endl<<endl;
//	cout<<"[1] for Login"<<endl<<"[2] for Register"<<endl<<"[3] for Exit"<<endl;
// 	cout<<"Enter Command : ";
// 	cin>>c;
//
//if(c == 1){
//	login();
//}else if(c == 2){
//	registration();
//}else if(c==3){
//		    cout<<"Thank You For Registration";
//}else{
//	system("cls");
//		cout<<"Please Select From Given Options";
//	main();
//}
//      
//}
//
//void login(){
//    
//    string username,password,un,pw;
//    bool found = false;
//    system("cls");
//    cout<<"Enter Your username : ";
//    cin>>username;
//    cout<<"Enter Your Password : ";
//    cin>>password;
//
//    ifstream file("records.txt");
//
//    while(file>>un>>pw){
//       
//        if(un == username && pw == password){
//            found = true;
//            break;
//        }
//    }
//    file.close();
//
//    if(found){
//        system("cls");
//        cout<<"Successfully Login";
//    }else{
//        system("cls");
//        cout<<"Invalid Information"<<endl;
//      
//    }
//}
//
//
//void registration(){
//	string username,password,un,pw;
//	system("cls");
//	cout<<"Enter the username : ";
//	cin>>username;
//	cout<<"Enter the Password";
//	cin>>password;
//	
//	ofstream f1("records.txt",ios::app);
//	f1<<username<<" "<<password<<endl;
//	system("cls");
//	cout<<"Registration is sucessfull";
//	main();
//}


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
 
        string full_name, Address , username, password;
        system("cls");
        cout<<"Enter full name: ";
        cin>>full_name;
        cout<<endl;
        cout<<"Enter Username: ";
        cin>>username;
        cout<<endl;
        cout<<"Enter the Password : ";
        cin>>password;
        cout<<endl;
        
        ofstream f1("records.txt",ios::app);
        f1<<full_name<<" "<<username<<" "<<password<<" "<<endl;
        system("cls");
        cout<<"\nRegistration is successful\n";
        main();
    }


void menu() {
	int c;
	cout<<"Hi, Welcome to the Kelectric WhatsApp Self Service"<<endl;
	cout<<"For the desired service, reply with the option number."<<endl;

	
	
	
	
	
	
	
	
	
}
