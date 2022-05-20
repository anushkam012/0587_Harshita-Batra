//This is a program for Column Wise Sum.
//Below is the implementation of the code.
#include <iostream> 
#include <cctype> 
using namespace std;  

// Using the concept of 2D arrays
int main(){ 
    int m,n; 
    cin>>m>>n; 
    
    int arr[m][n]; 
    for(int i=0;i<m;i++){ 
        for (int j=0;j<n;j++){ 
            cin>>arr[i][j]; 
        } 
    } 
     
    //using for loop
    for(int j=0;j<n;j++){ 
        int sum=0; 
        for(int i=0;i<m;i++){ 
            sum=sum+arr[i][j]; 
        } 
        // Printing the column sum  and getting the output.
        cout<<sum<<" "; 
    } 
}
