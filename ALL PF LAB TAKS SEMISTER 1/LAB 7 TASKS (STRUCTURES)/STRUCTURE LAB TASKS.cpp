#include<iostream>
using namespace std;
//Task # 1 Create a Structure called employee that contains two members: 			
//an employee number (type int) and the employee's salary (type float). 
//	Ask the user to fill this data for two employees, store it in two 	
//	variables of type struct employee, and then display the  information for each employee.
//struct employee{
//	int empno;
//	float empsal;
//};
//int main(){
//	employee e1 ,e2;
//	cout<<" Enter number of first employee : ";
//	cin>>e1.empno;
//	cout<<" Enter salary of first employee : ";
//	cin>>e1.empsal;
//	cout<<" Enter number of second employee : ";
//	cin>>e2.empno;
//	cout<<" Enter salary of second employee : ";
//	cin>>e2.empsal;
//	cout<<"Employee No: " <<e1.empno <<"\t Salary = "<<e1.empsal<<endl; 
//	cout<<"Employee No: " <<e2.empno <<"\y Salary = "<<e2.empsal<<endl; 
//	return  0;
//}

//   **************************************************** // 

//Task # 2   Create a Structure called Students that contains two members: 
//  student's obtained marks type(int). total marks (type int) 
//   Ask the user  for obtained marks and total marks, store it in a  variable of type struct student, 
//   and then display the percentage.
//
  
//  struct students{
//  	int obtmarks;
//  	int totalmarks;
//  	
//  };
//  int main(){
//  	students S1 ;
//	cout<<" Enter obtained marks : ";
//	cin>>S1.obtmarks;
//	cout<<" Enter total marks : ";
//	cin>>S1.totalmarks;
//    float per=(S1.obtmarks*100)/S1.totalmarks;
//	cout<<" The precentage = "<<per<<endl;  	
//	return 0;
//  }

//   **************************************************** // 

//Task # 3 Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure 
//named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks
// and then display the percentage of each student.

//struct Marks{
//	int chemmarks;
//	int phymarks;
//	int mathmarks;
//	string roll;
//	string name;
//	int finalmarks;
//	float per;
//};
//int main(){
//	Marks S1 , S2 ,S3 , S4 , S5;
//	
//		cout<<"******************** STUDENT NO 1 *********************** "<<endl; 
//		
//	cout<<" Enter name  of first student :";
//	cin>>S1.name;
//	cout<<" Enter roll no of first student : ";
//	cin>>S1.roll;
//	cout<<" Enter marks  of first student in chemistry  : ";
//	cin>>S1.chemmarks;
//	cout<<" Enter marks of first student in Maths : ";
//	cin>>S1.mathmarks;
//	cout<<" Enter marks of first student in physics : ";
//	cin>>S1.phymarks;
//	S1.finalmarks=S1.chemmarks+S1.mathmarks+S1.phymarks;
//	S1.per=(S1.finalmarks*100)/300;
//	cout<<"Student "<<S1.name<<" having roll no "<<S1.roll<<" Got "<<S1.per<<"%"<<endl;
//	cout<<endl;	
//	cout<<"******************** STUDENT NO 2 *********************** "<<endl; 
//	
//		cout<<" Enter name  of second student :";
//	cin>>S2.name;
//	cout<<" Enter roll no   of second student : ";
//	cin>>S2.roll;
//	cout<<" Enter marks  of second student in chemistry  : ";
//	cin>>S2.chemmarks;
//	cout<<" Enter marks of second student in Maths : ";
//	cin>>S2.mathmarks;
//	cout<<" Enter marks of second student in physics : ";
//	cin>>S2.phymarks;
//	S2.finalmarks=S2.chemmarks+S2.mathmarks+S2.phymarks;
//	S2.per=(S2.finalmarks*100)/300;
//	cout<<"Student "<<S2.name<<" having roll no "<<S2.roll<<" Got "<<S2.per<<"%"<<endl;
//		cout<<endl;
//		cout<<"******************** STUDENT NO 3 *********************** "<<endl; 
//		
//		cout<<" Enter name  of third student :";
//	cin>>S3.name;
//	cout<<" Enter roll no   of third student : ";
//	cin>>S3.roll;
//	cout<<" Enter marks  of third student in chemistry  : ";
//	cin>>S3.chemmarks;
//	cout<<" Enter marks of third student in Maths : ";
//	cin>>S3.mathmarks;
//	cout<<" Enter marks of third student in physics : ";
//	cin>>S3.phymarks;
//	S3.finalmarks=S3.chemmarks+S3.mathmarks+S3.phymarks;
//	S3.per=(S3.finalmarks*100)/300;
//	cout<<"Student "<<S3.name<<" having roll no "<<S3.roll<<" Got "<<S3.per<<"%"<<endl;
//	cout<<endl;	
//		cout<<"******************** STUDENT NO 4 *********************** "<<endl; 
//		
//		cout<<" Enter name  of forth student :";
//	cin>>S4.name;
//	cout<<" Enter roll no   of forth student : ";
//	cin>>S4.roll;
//	cout<<" Enter marks  of forth student in chemistry  : ";
//	cin>>S4.chemmarks;
//	cout<<" Enter marks of forth student in Maths : ";
//	cin>>S4.mathmarks;
//	cout<<" Enter marks of forth student in physics : ";
//	cin>>S4.phymarks;
//		S4.finalmarks=S4.chemmarks+S4.mathmarks+S4.phymarks;
//	S4.per=(S4.finalmarks*100)/300;
//	cout<<"Student "<<S4.name<<" having roll no "<<S4.roll<<" Got "<<S4.per<<"%"<<endl;
//	cout<<endl;
//	cout<<endl;	
//		cout<<"******************** STUDENT NO 5 *********************** "<<endl; 
//		
//		cout<<" Enter name  of fifth student :";
//	cin>>S5.name;
//	cout<<" Enter roll no   of fifth student : ";
//	cin>>S5.roll;
//	cout<<" Enter marks  of fifth student in chemistry  : ";
//	cin>>S5.chemmarks;
//	cout<<" Enter marks of fifth student in Maths : ";
//	cin>>S5.mathmarks;
//	cout<<" Enter marks of fifth student in physics : ";
//	cin>>S5.phymarks;
//		S5.finalmarks=S5.chemmarks+S5.mathmarks+S5.phymarks;
//	S5.per=(S5.finalmarks*100)/300;
//	cout<<"Student "<<S5.name<<" having roll no "<<S5.roll<<" Got "<<S5.per<<"%"<<endl;
//	
//	
//	return 0;
//}

//   **************************************************** // 

//Task # 4 Write a structure to store the name, account number and balance of  two customers .
//  Write a function to print the data of all the customers.

//struct store{
//	string name;
//	int acc;
//	float balance;
//};
//void data(store x){
//cout<<x.name<<"  Account no : "<<x.acc<<" have "<<x.balance<<endl;
//
//}
//int main(){
//	store C1 , C2;
//		cout<<"******************** CUSTOMER 01 *********************** "<<endl; 
//	
//	cout<<" Enter name of the  first customer : ";
//	cin>>C1.name;
//	cout<<" Enter account no  of the first customer : ";
//	cin>>C1.acc;
//	cout<<" Enter balance  of the first customer : ";
//	cin>>C1.balance;
//	data(C1);
//	
//	cout<<"******************** CUSTOMER 02 *********************** "<<endl; 
//	 
//		cout<<" Enter name of the second customer : ";
//	cin>>C2.name;
//	cout<<" Enter account no  of the second customer : ";
//	cin>>C2.acc;
//	cout<<" Enter balance  of the second customer : ";
//	cin>>C2.balance;
//	data(C2);
//
//	return 0;
//}

//   **************************************************** // 

//Task # 5  Create a structure named "person" with the following fields

//struct person{
//	string name;
//	int age;
//	bool do_programming;
//};
//int main(){
//	person p1 , p2;
//	cout<<"******************** Person 01 *********************** "<<endl; 
//     p1.name="ikram";
//	 p1.age=19;	
//	p1.do_programming=true;
//	cout<<p1.name<<" ( "<<p1.age<<" ) "<<endl;
//	cout<<endl;
//	cout<<"******************** Person 02 *********************** "<<endl; 
//    p2.name="fatima";
//	 p2.age=7;	
//	p2.do_programming=false;
//	cout<<p2.name<<" ( "<<p2.age<<" ) "<<endl;
//	cout<<endl;
//	return 0;
//}

//   **************************************************** // 

//Task # 6 Consider given structure Cars.  

//struct  cars{
//	string brand ;
//	string model ; 
//	int year;
//}mycar1 , mycar2 ; // We can add variables by separating them with a comma here
//int main(){
//		cout<<"******************** CAR 01 *********************** "<<endl; 
//	cout<<"Enter brand of your first car :";
//	cin>>mycar1.brand;
//	cout<<"Enter model of your first car :";
//	cin>>mycar1.model;
//	cout<<"Enter year in whcih you buy your first car :";
//	cin>>mycar1.year;
//	cout<<"******************** CAR 02 *********************** "<<endl; 
//		cout<<"Enter brand of your second car :";
//	cin>>mycar2.brand;
//	cout<<"Enter model of your second car :";
//	cin>>mycar2.model;
//	cout<<"Enter year in whcih you buy your second car :";
//	cin>>mycar2.year;
//	return 0;
//	
//}

//   **************************************************** // 

// Task # 7 Write a C++ program that demonstrates the working and use of Nested Structures.

//    struct village{
//	string vname;
//	};
//	struct  city{
//		string ciname;
//		village VILLAGE;
//	};
//	struct province{
//		string   pname;
//		city CITY;
//		};
//	struct country {
//	 string cname ;
//	 province PROVINCE;
//	};
//	struct continent{
//	string ncontinent;
//	country COUNTRY;
//	
//	};
//
//int main(){
//	continent c1;
//	cout<<"The continent is : ";
//	cin>>c1.ncontinent;
//		cout<<"The country is : ";
//	cin>>c1.COUNTRY.cname;
//		cout<<"The province is : ";
//	cin>>c1.COUNTRY.PROVINCE.pname;
//		cout<<"The city is : ";
//	cin>>c1.COUNTRY.PROVINCE.CITY.ciname;
//		cout<<"The village is : ";
//	cin>>c1.COUNTRY.PROVINCE.CITY.VILLAGE.vname;
//	system("CLS");
//	cout<<  c1.ncontinent<<endl
//		<<c1.COUNTRY.cname<<endl
//		<<c1.COUNTRY.PROVINCE.pname<<endl
//		<<c1.COUNTRY.PROVINCE.CITY.ciname<<endl
//		<<c1.COUNTRY.PROVINCE.CITY.VILLAGE.vname<<endl;
//		return 0;
//		}


