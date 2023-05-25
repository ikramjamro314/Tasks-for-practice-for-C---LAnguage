#include<iostream>
using namespace std;
	
//	Task # 1:  Write a C++ program that creates and initializes an array of type integer as 
//	:int array[]={5,10,15,20,25}; and computes the SUM of the elements in  an array.
	
//int  main(){
//	int arr[]={5,10,15,20,25};
//	int Size=sizeof(arr)/sizeof(int);
//	int sum=0;
//	for(int i=0 ;i<Size;i++){
//	 sum=sum+arr[i];
//	cout<<arr[i]<<" ";
//}
//cout<<" \n The Sum of the given array is : " <<sum<<endl;	

//************************************************//
	
//Task #2 Consider the array in  Taskno.1 .
// Write a C++ program that print the all elements of the array in reverse order, As 25,20, …5.  	
		
//	int  main(){
//	int arr[]={5,10,15,20,25};
//	int Size=sizeof(arr)/sizeof(int);
//	for(int i=Size-1;i>=0;i--){
//		cout<<arr[i]<<" ";
//	}
//	
//	
//	
//	return  0;
//}

//****************************************//

//Task#3  Consider the following integer array of size 10. 
//  int array[10]={1,2,3,5,8,10,12,23,28,15}; 
//Write a c++  program that takes an integer value from the user at runtime and
// finds that value in the given array . 
// If the value is found display Message "Number is Found " else display Message  "Number does not Found ".

//int main(){
//	int arr[10]={1,2,3,5,8,10,12,23,28,15}; 
//	for(int i=0 ;i<10;i++){
//		cout<<arr[i]<<" ";
//	}
//	bool isfound=false;
//	int key;
//	cout<<" \n Give any value to be found : ";
//	cin>>key;
//	for(int i=0;i<10;i++){
//		if(arr[i]==key){
//			isfound=true;
//		
//	}
//}
//		cout<<" The number to be found is : "<<key;
//if(isfound){
//			cout<<" \n Number is  found "<<endl;
//			}
//		else {
//			cout<<" \n Number is not found "<<endl;
//		}
//		
//	return 0;
//}

//****************************************//

//Task #4 Consider the array in  Taskno.3 .
// Write a C++ program that finds and prints all odd   numbers in the given array.

//int main(){
//	int arr[10]={1,2,3,5,8,10,12,23,28,15}; 
//	for(int i=0 ;i<10;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<" \n ODD NUMBERS "<<endl;
//for(int i=0;i<10;i++){
//	if(arr[i]%2!=0){
//		cout<<arr[i]<<endl;
//	}
//}
//return 0;
//}

//****************************************//

//Task #5 :  Write a C++ program that prints the second last element in the array created 
//in Taskno. 2. And also displays the sum and product of last two elements of the array. 

//int main(){
//int arr[10]={1,2,3,5,8,10,12,23,28,15}; 
//	for(int i=0 ;i<10;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<"\n Second last element is : "<<arr[8]<<endl;
//	cout<<"The sum of "<<arr[8]<<" and "<<arr[9]<<"  is : "<<arr[8]+arr[9]<<endl;
//	cout<<"The product of "<<arr[8]<<" and "<<arr[9]<<"  is : "<<arr[8]*arr[9]<<endl;
//return 0;
//}

//****************************************//

//Task #6 : Write a C++ program that finds the smallest element in the array and also its index.

//int main(){
//int x;
//cout<<"Enter no of elements in the array : ";
//cin>>x;
//int arr[x];
//int min=INT_MAX;
//for(int i=0;i<x;i++){
//	cin>>arr[i];
//    if(arr[i]<min){
//    	min=arr[i];
//    	cout<<"The index of smallest element in the array is : "<<i<<endl;
//    	break;
//	}	
//}
//cout<<"The smallest element in the array is : "<<min<<endl;
//return 0;
//}

//****************************************//

//int main(){
	
//Task #8 : Write a C++ program that passes an array (of your choice) as an argument to  a function.

//int search(int arr[] , int x , int key ){
//   for(int i=0 ; i<x;i++ ){
//       if(arr[i]==key)
//           return i;
//   }
//return 0;
//}
//
//int main(){
//    int x;
//    cout<<"Enter no of elements : ";
//    cin>>x;
//    int arr[x];
//    for(int i=0; i<x;i++) {
//        cin >> arr[i];
//    }
//        int index; // to find the number by give its index
//        cin >> key;
//        cout << linearsearch(arr, x, key) << endl;
//        
//return 0;
//}

