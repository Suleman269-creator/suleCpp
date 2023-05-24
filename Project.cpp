#include<iostream>
#include<fstream>
#include <unistd.h>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <string>
#include <limits>
using namespace std;
void login();
void registration();
void menu(string);
void month(string);
void bill(string);
void user_d(string);
void bill_cal(string);
void tech(string);
void bill_comp(string);
void power_status(string);
void find_us(string);

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
    sleep(2);
    main();
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
       int con_arr[13];
    int size = 0;

    // Initialize random number generator
    srand(time(NULL));

    for (int i = 0; i < 13; i++) {
        con_arr[i] = rand();
        size++;
    }

    unsigned int consumer_num = 0;
    for (int i = 0; i < 13; i++) {
        consumer_num = consumer_num * 10 + rand() % 10;
    }

   cout << "Consumer Number: " << consumer_num <<endl;
        ofstream f2("user_details.txt",ios::app);
        f2<<" Username: "<<username<<" / Address: "<<address<<" / City: "<<city<<" / Consumer No: "<<consumer_num<< endl;
		cout<<"\nRegistration is successful\n";
        main();
    }


void menu(string username) {
	system("cls");
	int a;
		
	cout<<"Hi, Welcome to the Kelectric WhatsApp Self Service"<<endl;
	cout<<"For the desired service, reply with the option number."<<endl;
	cout<<"\n\t(1) Bill Generator "<<endl;
	cout<<"\n\t(2) Technical Complaints "<<endl;
	cout<<"\n\t(3) Billing Complaints "<<endl;
	cout<<"\n\t(4) Power Status & Load Shedding Schedule "<<endl;
	cout<<"\n\t(5) Find Us "<<endl;
	cout<<"\n\t(6) Exit"<<endl<<endl;
	
	cout<<"Enter Your choice: ";
	cin>>a;
	
	if (a==1) {
		month(username);
		
	}
	else if (a==2) {
		tech(username);
	}
	else if (a==3) { 
		bill_comp(username);
	}
	else if (a==4){
		power_status(username);
}
	else if (a==5){
		find_us(username);
	}
	else if (a==6) {
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
	int c;
	cout<<endl<<"Press 0 to return : ";
	cin>>c;
	if(c ==0 ){
		menu(username);
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
        sleep(2);
        menu(username);
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
         sleep(2);
        menu(username);
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
         sleep(2);
        menu(username);
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


void bill_comp(string username) {
	user_d(username);
	string complain;
	cout<<"\nDefine Billing Issue Here (100 Words Limits): ";
	cin.ignore();
	getline(cin , complain);
	
	if (complain.length()>1000) {
		cout<<"Message exceeds the word limit of 1000 characters."<<endl;
	}
	else {
		cout<<"Complaint Successfully Registered.";
	}
	}
	
	
void power_status(string username){
	
	system("cls");
	cout<<"---------------------------------------------------------------------------------------------------------------------\n\n";
cout<<"\t\t\t\t\tArea Names\t\t\t\t";
cout<<"\n\n---------------------------------------------------------------------------------------------------------------------\n\n";

	string karachiAreas[22] = {
        "Clifton",
        "Defence",
        "Gulshan-e-Iqbal",
        "North Nazimabad",
        "Saddar",
        "Gulistan-e-Johar",
        "Malir",
        "Gulshan-e-Maymar",
        "Korangi",
        "Landhi",
        "Lyari",
        "Shah Faisal Colony",
        "Orangi Town",
        "Baldia Town",
        "New Karachi",
        "Nazimabad",
        "Gulberg",
        "Kemari",
        "SITE",
        "Karachi Cantonment",
        "Buffer Zone",
        "Gulshan-e-Hadeed",
    };

  for (int i=0 ; i<22 ; i++) {
  	cout<<"\t"<<"["<<i+1<<"]\t"<<karachiAreas[i]<<"\t"<<endl;
  }
    cout<<endl <<"Enter 0 to Go back "<<endl <<endl;
int area;

cout<<endl;
  while (true) {
        cout << "Enter Number According to Your Area: ";
        if (!(cin >> area)) {
            cout << "Invalid Input! Please enter a number.\n";
            cin.clear();  // Clear error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard remaining input
            continue;
        }

        if (area >= 0 && area <= 22) {
            break;  // Valid option chosen, exit the loop
        }

        cout << "Invalid Input! Choose Correct Option.\n";
        sleep(3);
power_status(username); 
    }

	if(area ==0){
	menu(username);	
	}
else if (area == 1) {
	cout<<"Power Status: Loadshedding Free Area";
sleep(3);
power_status(username);

}

else if (area==2){
	cout<<"Power Status: Loadshedding Free Area";
sleep(3);
power_status(username);
}

else if (area==3){
	cout<<"Power Status: Loadshedding Schedule\n";
	cout<<"\t8:00am to 10:00am\n\t4:30pm to 6:00pm";
sleep(3);
power_status(username);

}

else if (area==4){
		cout<<"Power Status: Loadshedding Schedule\n";
	cout<<"\t8:00am to 10:00am\n\t4:30pm to 6:00pm\n\t10:00pm to 11:00pm";
sleep(3);
power_status(username);
}
else if (area==5){
	cout<<"Power Status: Loadshedding Schedule\n";
	cout<<"\t8:00am to 10:00am";
sleep(3);
power_status(username);

}
else if (area==6){
	cout<<"Power Status: Loadshedding Free Area";
sleep(3);
power_status(username);
}
else if (area==7){
	cout<<"Power Status: Loadshedding Schedule\n";
	cout<<"\t8:00am to 10:00am\n\t4:30pm to 6:00pm";
sleep(3);
power_status(username);
}
else if (area==8){
	cout<<"Power Status: Loadshedding Free Area";
sleep(3);
power_status(username);
}
else if (area==9){
	cout<<"Power Status: Loadshedding Free Area";
sleep(3);
power_status(username);
}
else if (area==10){
	cout<<"Power Status: Loadshedding Schedule\n";
	cout<<"\t8:30am to 10:00am\n\t1:30pm to 2:30pm\n\t6:00pm to 8:00pm\n\t11:00pm to 12:00am";
sleep(3);
power_status(username);
}
else if (area==11){
	cout<<"Power Status: Loadshedding Schedule\n";
	cout<<"\t8:30am to 10:00am\n\t1:30pm to 2:30pm\n\t11:00pm to 12:00am";
sleep(3);
power_status(username);
}
else if (area==12){
	cout<<"Power Status: Loadshedding Schedule\n";
	cout<<"\t8:30am to 10:00am\n\t4:30pm to 6:00pm";
sleep(3);
power_status(username);
}
else if (area==13){
	cout<<"Power Status: Loadshedding Schedule\n";
	cout<<"\t8:30am to 10:00am\n\t1:30pm to 2:30pm\n\t11:00pm to 12:00am";
sleep(3);
power_status(username);
}
else if (area==14){
	cout<<"Power Status: Loadshedding Schedule\n";
	cout<<"\t8:30am to 10:00am\n\t4:30pm to 6:00pm";
sleep(3);
power_status(username);
}
else if (area==15){
	cout<<"Power Status: Loadshedding Schedule\n";
	cout<<"\t8:00am to 10:00am\n\t4:00pm to 6:00pm";
sleep(3);
power_status(username);
}
else if (area==16){
	cout<<"Power Status: Loadshedding Schedule\n";
	cout<<"\t8:30am to 10:00am";
sleep(3);
power_status(username);
}
else if (area==17){
	cout<<"Power Status: Loadshedding Free Area";
sleep(3);
power_status(username);
}
else if (area==18){
	cout<<"Power Status: Loadshedding Free Area";
sleep(3);
power_status(username);
}
else if (area==19){
	cout<<"Power Status: Loadshedding Schedule\n";
	cout<<"\t8:30am to 10:00am\n\t1:30pm to 2:30pm\n\t6:00pm to 8:00pm\n\t11:00pm to 12:00am";
sleep(3);
power_status(username);
}
else if (area==20){
	cout<<"Power Status: Loadshedding Free Area";
sleep(3);
power_status(username);
}
else if (area==21){
	cout<<"Power Status: Loadshedding Free Area";
sleep(3);
power_status(username);
}
else if (area==22){
	cout<<"Power Status: Loadshedding Free Area";
sleep(3);
power_status(username);
}
}
void find_us(string username){
cout<<"---------------------------------------------------------------------------------------------------------------------\n\n";
cout<<"\t\t\t\t\tFIND US\t\t\t\t";
cout<<"\n\n---------------------------------------------------------------------------------------------------------------------\n\n";
string find[18]={
"KE - Technical Support IBC, 24th East Street, DHA , Karachi - Pakistan",
"K-Electric IBC Garden, Agha Khan III Road, Near Makki Masjid, Karachi - Pakistan",
"K-Electric IBC Gulshan, Civic Center Flyover, Karachi - Pakistan",
"KE DHA-1 Grid Station, Karachi - Pakistan",
"KE Smart Grid, Elander Road, Karachi - Pakistan",
"KE Powerhouse, Elander Road, Karachi - Pakistan",
"K-Electric IBC Johar-I, Johar Chowrangi Rd, Gulistan e Johar, Karachi, Pakistan",
"KDA KE Grid Station, Karachi, Sindh - Pakistan",
"K Electric Landhi Centre, Landhi Road, Karachi - Pakistan",
"K-Electric IBC Clifton, Mai Kolachi Bypass, Karachi - Pakistan",
"KE Malir Cantt Grid Station, E Malir Cantt. Rd, Karachi 75070 Malir Cantt. Rd, Karachi",
"KE Queens Road Grid Station, Moulvi Tamizuddin Khan Road, Karachi - Pakistan",
"North Karachi Grid Station, Karachi - Pakistan",
"K-Electric IBC F.B. Area, Shafiq Textile Mills, Karachi - Pakistan",
"KE Clifton Grid Station, 4 Shahrah-e-Ghalib, Shahrah-e-Ghalib, Karachi",
"KE Electric, Sharah-e-Quaideen Service Rd, Karachi, Pakistan",
"K-Electric, House # 39-B, Sunset Boulevard, Phase-II, Defence Housing Authority, Karachi - Pakistan",
"Tipu Sultan Rd Karachi Branch"};

for (int i=0 ; i<18 ; i++){
	cout<<"["<<i+1<<"] "<<find[i]<<"\t"<<endl;
}

int c;
cout<<endl<<endl<<"Enter 0 to go back : ";
cin>>c;
if(c == 0){
	menu(username);
}

}
