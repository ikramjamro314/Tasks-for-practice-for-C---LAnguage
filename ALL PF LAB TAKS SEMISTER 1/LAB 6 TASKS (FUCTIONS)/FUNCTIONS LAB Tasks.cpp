#include<iostream>
using namespace std;

//	Task # 1   Create a function called Largernum()  that receives two integer
//	 		numbers as arguments and returns the Larger number out of them. 
//int largernum(int a , int b){
//	if(a>b){
//		return a;
//	}
//	if(a==b){
//		return -1;
//	}
//	if(a<b){
//		return b;
//	}
//}
//int main (){
//	int x ,y ;
//	cout<<" enter num 1 : ";
//	cin>>x;
//	cout<<" enter num 2 : ";
//	cin>>y;
//	cout<<largernum(x,y);
//}

//*****************************************************************************//
	//Task # 2	Write a function called zeroSmaller() that takes two integer  arguments by reference
	// and then sets the smaller of the two numbers to 0. Write a main function to exercise this function.
	
//	int zerosmaller(int &a ,int &b){
//	if(a>b){
//		cout<<"b is smaller so " <<b<<" is "; 
//		return b=0;
//	}
//	if(a==b){
//		cout<<" two are equals ";
//		return -1;
//	}
//	if(a<b){
//		cout<<"a is smaller so " <<a <<" = "; 
//		return a=0;
//		
//	}
//}
//int main (){
//	int x ,y ;
//	cout<<" enter num 1 : ";
//	cin>>x;
//	cout<<" enter num 2 : ";
//	cin>>y;
//	cout<<zerosmaller(x,y);
//	return 0;
//}


//************************************************//
//Task#3 Write a function called swap() that interchanges two int values 	
//		  passed to it by the calling program.

void swap(int a , int b , int temp=0){
	temp=a;
	a=b;
	b=temp;
	cout<<a<<endl;
	cout<<b<<endl;
 
}
int main(){
	int x , y;
	cout<<" Enter value of x : ";
	cin>>x;
		cout<<" Enter value of y : ";
	cin>>y;
	swap(x,y);
	
	return 0;
	
}

//************************************************//

//Task # 4   Define two functions to print the maximum and the minimum number respectively.
// among three numbers entered by user.

//int max(int a, int b, int c){
//	if(a>b && a>c){
//	return a;
//     }
//		if(b>a && b>c){
//	return b;
//     } 
//		if(c>a && c>b){
//	return c;
//        }
//		if(a==b || b==c || c==a ){
//			cout<<" try different numbers "<<endl;
//			return 0;
//        }
//        	if(a=b=c){
//        		cout<<"All are equal "<<endl;
//			return 0;
//        }
//}
//int min(int i, int j, int k){
//	if(i<j && i<k){
//	return i;
//     }
//		if(j<i && j<k){
//	return j;
//     } 
//		if(k<i && k<j){
//	return k;
//        }
//		if(i=j=k){
//			cout<<" All are equal ";
//			return 0;
//        }
//        if(i==j || j==k || k==i ){
//			cout<<" Try different numbers "<<endl;
//			return  0 ;
//        }
//}
//
//int main(){
//	int x,y,z;
//	cout<<"Enter no 1  : ";
//	cin>>x;
//		cout<<"Enter no 2  : ";
//	cin>>y;
//		cout<<"Enter no 3  : ";
//	cin>>z;
//	cout<<"Max is : "<<max(x,y,z)<<endl;
//	cout<<"Min is :"<<min(x,y,z);
//	return 0;
//}

//************************************************//

//Task # 5   C++ write a function that takes numbers as arguments and Swap two numbers. 
// Use call by reference

//void swap(int &a , int &b , int temp=0){
//	temp=a;
//	a=b;
//	b=temp;
//	cout<<a<<endl;
//	cout<<b<<endl;
// 
//}
//int main(){
//	int x , y;
//	cout<<" Enter value of x : ";
//	cin>>x;
//		cout<<" Enter value of y : ";
//	cin>>y;
//	swap(x,y);
//	
//	return 0;
//	
//}

//************************************************//
//Task # 6   Write a program that calculates 6^5. Declare your own function to do this.

//int func(int x , int p){
//	if(p==0){            // base condition that terminates the recursion 
//		return 1;
//	}
//	int prevpower=func(x,p-1); // for 6 * 6  six times we use recursion
//	return x*prevpower;
//}
//int main(){
//	cout<<"6 raise to power 5 is = "<<func(6,5);
//	return 0;
//}

//************************************************//

//Task # 7 Write a function called zero_small() that has two integer arguments
//  being passed by reference and sets the smaller of the two numbers to 0.
//  Write the main program to access the function.

//	int zerosmaller(int &a ,int &b){
//	if(a>b){
//		cout<<"b is smaller so " <<b<<" is "; 
//		return b=0;
//	}
//	if(a==b){
//		cout<<" two are equals ";
//		return -1;
//	}
//	if(a<b){
//		cout<<"a is smaller so " <<a <<" = "; 
//		return a=0;
//		
//	}
//}
//int main (){
//	int x ,y ;
//	cout<<" enter num 1 : ";
//	cin>>x;
//	cout<<" enter num 2 : ";
//	cin>>y;
//	cout<<zerosmaller(x,y);
//	return 0;
//}

//************************************************//

//Task # 8    Write a function that takes a user defined structure named students having
//two members of your own choice as an argument, the function then prints data of 
//that structure. Write the main program to access the function.

//struct students{
//	string name;
//	string rollno;
//};
//void print(string x,string y){
//cout<<" The name of student is "<<x<<endl;
//cout<<" The roll no of student is "<<y<<endl;
//}
//int main(){
//	students s1;
//	cout<<" Enter the name of student : "<<endl;
//	cin>>s1.name;
//	cout<<" Enter the roll no of student : "<<endl;
//	cin>>s1.rollno;
//	print(s1.name,s1.rollno);
//	return 0;
//}

//************************************************//

//"	Write the output of the following program :

//#include <iostream>
//using namespace std;
//void X(int &A, int &B)
//{
//    A = A + B; // A=4+18=22
//    B = A - B; // B=22-18=4
//    A = A - B; // A=22-4=18
//} 
//int main()
//{
//    int a = 4, b = 18;
//    X(a,b);
//    cout << a << ", " << b; // OUTPUT = 18 , 4
//    return 0;
//}

//************************************************//

// Write the output of the following program:

//#include <iostream>
//using namespace std;
//void X(int A, int &B)
//{
//    A = A + B; // A=4+18=22
//    B = A - B; // B=22-18=4
//    A = A - B; // A=22-4=18
//}
//int main()
//{
//    int a = 4, b = 18;
//    X(a,b);
//    cout << a << ", " << b; // OUTPUT=4,4
//    return 0;
//}

//************************************************//

//	What values are printed out by the following C++ program? 
//
//              #include <iostream>
//
//              int f(int x) {     // x=7  x=9      
//                 return x + 2;   // return 7+2=9      x=9+2=11
//              }
//              int main(void) {
//                  int x = 5;
//                  cout<< f(x+2)<<", " <<f(f(x+2));    // output= error beccause there is no any namespace 
//                  return 0;                                      after giving namespace  the output is 9 ,11 
//              }

//************************************************//

// Write the output of the following program:

//#include <iostream>
//using namespace std;
//void Execute(int &B, int C = 100)  // 2 TIME B=280 , C=10
//{
//    int temp = B + C; // temp=90+100=190   2 TIME temp= 280+10=290      
//    B += temp;          // B=90+190=280    2 TIME B=280+290=570     
//    if (C == 100)          // false
//        cout << temp << " " << B << " " << C << endl; // 190 280 100     
// }
//int main()                                          
//{ 
//    int M = 90, N = 10;
//    Execute(M);
//    cout << M << " " << N << endl;    // 280 10
//    Execute(M, N);
//    cout << M << " " << N << endl;    // 570 10	                      
//    return 0;                        
//} 
   // OUTPUT= 190 280 10
   //         280 10
   //         570 100   
   
//************************************************//

//	Give the output of the following program
//
//#include <iostream>
//using namespace std;
//int global = 10;
//void func(int &x, int y) // x=10; y=7;  2 - time x=7 , y=3
//{
//    x = x - y;       // x=10-7=3     2-time x=7-3=4
//    y = x * 10;      // y=10*3=30    2-time y=4*10=40
//    cout << x << ", " << y << '\n';    // 3,30    2- time  4 , 40
//}
//int main()
//{
//    int global = 7;                                                         // OUTPUT=3 , 30
//    func (::global, global);                                                //        7 , 3
//	     cout << global << ", " << ::global << '\n'; // 7, 3                //        4,40
//    func(global, ::global);                                                 //         4,3
//    cout << global << ", " << ::global << '\n'; // 4,3
//    return 0;
//} 
//      
//************************************************//

// Write the output of the following program :

//#include <iostream>
//using namespace std;
//static int i = 100;  
//void abc()
//{
//    static int i = 8;
//    cout << "first = " << i++ << endl;  // first=8
//}
//int main()
//{
//    static int i = 2;
//    abc();                              // first=8                    OUTPUT--first=8
//    cout << "second = " << i << endl;   // second =2                          second=2
//    abc();                             // first=9                             first=9
//    return 0;
//}

//************************************************//

//#include <iostream>
//using namespace std;
//int func(int &x, int y = 10) // x=20 , y=23   2 time- x=23 , y=10   3 time- x=10 , y=10 
//{
//    if (x % y == 0)        
//        return ++x;      // 3-time x=11
//    else 
//        return y--;     // y=23        2-time // y=10       
//}
//int main()
//{
//    int p = 20, q = 23;
//    q = func(p, q);         // q=23
//    cout << p << " " << " " << q << endl;     // 20   23
//    p = func (q);                             // p=  10                    // output=  20    23
//    cout << p << " " << " " << q << endl;     // 10   23                               10    23
//    q = func (p);                             // q= 11                                 11    11 
//    cout << p << " " << " " << q << endl;     // 10  11                               
//    return 0;
//}

//************************************************//
    
//What is the output ?

//#include<iostream>
//int main() {
// cout<<"\n"<<","<< main();          // output = infinity 
// return 0;
//}

//************************************************//
    







