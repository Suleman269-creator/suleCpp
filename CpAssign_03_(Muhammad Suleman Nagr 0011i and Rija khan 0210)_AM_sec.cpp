
#include <iostream>
using namespace std;
void sub_arr(int row_m1_size , int col_m1_size , int row_m2_size , int col_m2_size );

int main (){
	int row_m1_size , col_m1_size;
	int row_m2_size , col_m2_size;
	
	cout<<"Enter one Row Size: ";
	cin>>row_m1_size;
	cout<<endl;
	cout<<"Enter one Column Size: ";
	cin>>col_m1_size;
	cout<<endl;
	cout<<"Enter second Row Size: ";
	cin>>row_m2_size;
	cout<<endl;
	cout<<"Enter second Column Size: ";
	cin>>col_m2_size;
	
	 sub_arr(row_m1_size , col_m1_size , row_m2_size , col_m2_size); 
}


void sub_arr(int row_m1_size , int col_m1_size , int row_m2_size , int col_m2_size ) {
	

	int f_2d_array[row_m1_size] [col_m1_size] , S_2d_array[row_m2_size][col_m2_size] , subtract_arr[10][10] ;
	cout<<"Enter First 2d array Value \n";
	for (int i=0 ; i<row_m1_size ; i++) {
		for (int j=0 ; j<col_m1_size ; j++ ) {
			cout<<"Enter Numbers["<<i<<"] ["<<j<<"]: ";
			cin>>f_2d_array[i][j];
		}
	} 
	
	cout<<"First 2d array: \n";
	for (int i=0 ; i<row_m1_size ; i++) {
		for (int j=0 ; j<col_m2_size ; j++) {
			cout<<f_2d_array[i][j]<<" ";
		}
			cout<<endl;
	}

	cout<<"Enter Second 2d array Value \n";
	for (int i=0 ; i<row_m2_size ; i++) {
		for (int j=0 ; j<col_m2_size ; j++ ) {
			cout<<"Enter Numbers["<<i<<"] ["<<j<<"]: ";
			cin>>S_2d_array[i][j];
		}
	} 
	
	cout<<"Second 2d array: \n";
	for (int i=0 ; i<row_m2_size ; i++) {
		for (int j=0 ; j<col_m2_size ; j++) {
			cout<<S_2d_array[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
        
	 for (int i=0 ; i<row_m1_size ; i++) {
	 	for (int j=0 ; j<col_m2_size ; j++){
	 			subtract_arr[i][j]= f_2d_array[i][j] - S_2d_array[i][j];
			 }
		 }
	 
	 
	 cout<<"Subtract Of two 2d array: "<<endl;
	 for (int i =0 ; i<row_m1_size ; i++) {
	 	for (int j=0 ; j<col_m2_size ; j++) {
	 		cout<<subtract_arr[i][j]<<" ";
		}
		cout<<endl;
	 }	
	

}

