//Muhammad Suleman Nagri (Sp23-Bscs-0011)
//Rija Khan (Sp23-Bscs-0210)

#include <iostream>
using namespace std;
void arr(int row_m1_size , int col_m1_size , int row_m2_size , int col_m2_size );

int main (){
	int row_m1_size , col_m1_size;
	int row_m2_size , col_m2_size;
	
	cout<<"Enter Matrice one Row Size: ";
	cin>>row_m1_size;
	cout<<endl;
	cout<<"Enter Matrice one Column Size: ";
	cin>>col_m1_size;
	cout<<endl;
	cout<<"Enter Matrice second Row Size: ";
	cin>>row_m2_size;
	cout<<endl;
	cout<<"Enter Matrice second Column Size: ";
	cin>>col_m2_size;
	
	if (row_m2_size == col_m1_size) {

	if (row_m1_size>=5 && row_m2_size>=5 && row_m1_size<=10 && row_m2_size<=10 || col_m1_size>=5 && col_m2_size>=5 && col_m1_size<=10 && col_m1_size<=10) 
	{ 
	 arr(row_m1_size , col_m1_size , row_m2_size , col_m2_size); 
	}
	
	 else {
	cout<<"Matrices should be in order between 5 to 10";
}

}

else {
	cout<<"Matrix must be in this format [Diff Row of matrix 1 x Same Column of matrix 1 x Same Row of matrix2 x Diff Column of Matrix 2] ";
}


}

void arr(int row_m1_size , int col_m1_size , int row_m2_size , int col_m2_size ) {
	

	int mat_1[row_m1_size] [col_m1_size] , mat_2[row_m2_size][col_m2_size] , mul_mat[10][10] ;
	cout<<"Enter First Matrice Value \n";
	for (int i=0 ; i<row_m1_size ; i++) {
		for (int j=0 ; j<col_m1_size ; j++ ) {
			cout<<"Enter Numbers["<<i<<"] ["<<j<<"]: ";
			cin>>mat_1[i][j];
		}
	} 
	
	cout<<"Matrice One: \n";
	for (int i=0 ; i<row_m1_size ; i++) {
		for (int j=0 ; j<col_m2_size ; j++) {
			cout<<mat_1[i][j]<<" ";
		}
			cout<<endl;
	}

	cout<<"Enter Second Matrice Value \n";
	for (int i=0 ; i<row_m2_size ; i++) {
		for (int j=0 ; j<col_m2_size ; j++ ) {
			cout<<"Enter Numbers["<<i<<"] ["<<j<<"]: ";
			cin>>mat_2[i][j];
		}
	} 
	
	cout<<"Matrice Second: \n";
	for (int i=0 ; i<row_m2_size ; i++) {
		for (int j=0 ; j<col_m2_size ; j++) {
			cout<<mat_2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
        
	 for (int i=0 ; i<row_m1_size ; i++) {
	 	for (int j=0 ; j<col_m2_size ; j++) {
	 		mul_mat[i][j]=0;
	 		for (int k=0 ; k<col_m1_size ; k++) {
	 			mul_mat[i][j]= mul_mat[i][j] + mat_1[i][k] * mat_2[k][j];
			 }
		 }
	 }
	 
	 cout<<"Multiplication Of two matrix: "<<endl;
	 for (int i =0 ; i<row_m1_size ; i++) {
	 	for (int j=0 ; j<col_m2_size ; j++) {
	 		cout<<mul_mat[i][j]<<" ";
		}
		cout<<endl;
	 }	
	
}


