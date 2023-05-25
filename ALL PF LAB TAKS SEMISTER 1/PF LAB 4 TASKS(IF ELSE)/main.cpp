#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	//Task #1: Write a C++ program to ask the user to input his/her age. Then the program will show
//if the person is eligible to vote. A person who is eligible to vote must be older than or
//equal to 18 years old.
/*
    int age;
    cout<<"enter your age: ";
    cin>>age;
    if (age>=18)
        cout<<"you are eligible to vote "<<endl;
    else
        cout<<"you are illigible to vote ";
    
}
*/

//Task #2: A student will not be allowed to sit in exam if his/her attendance
//is less than 75%.

/*
    int classesheld;
    cout<<" the classes held : ";
    cin>>classesheld;
    int classesattended;
    cout<<endl;
    cout<<" the classes attended: ";
    cin>>classesattended;
    cout<<endl;
            float  per=(classesattended*100)/classesheld;
	cout<<"the attendance is "<<per<<" % "<<endl;
    if(per>=75)
    cout<<"the student is eligible to sit in exam "<<endl;
    else

    cout<<"the student attendence is not valid he did not allow to sit in exam ";

*/

 //Task#3 Write a C++ program that takes a single character as an input and displays whether
 //it is a vowel or a consonant
/*
    char  character;
    cout<<"enter any character: ";
    cin>>character;
    if(character=='a'|| character=='e' || character=='i' || character=='o' || character=='u'|| character=='A'|| character=='E'|| character=='I'|| character=='O'|| character=='U')
        cout<<" character is vowel " ;
    else
        cout<<" character is consonant " ;

   */
   
 //Task # 4(a): Write a program that will ask the user to enter any number and the program checks
 //whether the entered number is  a positive number or negative number.
    /*
    int num;
    cout<<"enter any number ";
    cin>>num;
    if(num>=0)
        cout<<"the number is positive ";
    else
        cout<<"the number is  negative ";

    // Task # 4(b): Write a program that will ask the user to enter any number and the program checks
  // whether the entered number is  a double figure number.
  
    int num;
    cout<<"enter any number ";
    cin>>num;
    if(num>=10 && num<100)
        cout<<"the num is a double figure ";
    else
        cout<<"the num is not a double figured ";

   */
   
//Task # 5(a): Consider an integer value give:
//display the square of the number given when the spacebar key on the keyboard will pressed.
   /*
    int num;
    cout<<"Enter any num : ";
    cin>>num;
    char space;
    cout<<"Press space bar _____ "<<endl;
    space = getch();
    if( space ==' ')
        cout<<"The square  of the given  number is: \n "<<num*num;


//Task # 5(b): Write a program that will ask the user to enter any number and the program checks
// whether the entered number is  an even number or odd number.
    int x;
    cout<<"Enter any num : ";
    cin>>x;
    if(x%2==0)
        cout<<"num is even ";
    else
        cout<<"num is odd ";

      */
      
//  Task#6 Write a C++ program that prompts the user to enter any character and the program checks as:
 //  "	the character is a lower case character case or upper case character
//  "	if it is a lower case then convert it into upper case.
//  "	 if it is an upper case then convert it into lower case.

/*
    char character;
    cout<<"enter any character: ";
    cin>>character;
    if(character>=97 && character<=122){
        cout<<"the character is lower case "<<endl;
        character=character-32;
        cout<<" character is convert  into upper case "<<character;
    }
    else if (character>=65 && character<=91){
        cout<<"the character is  upper case "<<endl;
        character=character+32;
        cout<<"character is  convert into lower case "<<character;
    }
    else
        cout<<"\ninvalid output ";
 
     */
     
//Task # 7: Write a program that will ask the user to enter any number 
//and the program checks whether the entered number is  an even number or odd number.    

// same as in task 5(b).

//Task # 9: Write a program that accepts two numbers from the user and prints compares
//whether both numbers are equal or not.
     /*
    int a,b;
    cout<<"enter value of a : ";
    cin>>a;
    cout<<"enter value of b : ";
    cin>>b;
    if(a!=b)
        cout<<"a is not equal to b ";
    else
        cout<<"a is equal to b ";

    */
	 
//Task # 10: Write a program that accepts three numbers from the user and prints
//compares whether both numbers are equal are not.
    /*
    int a,b,c;
    cout<<"enter value of a : ";
    cin>>a;
    cout<<"enter value of b : ";
    cin>>b;
    cout<<"enter value of c : ";
    cin>>c;
    if (a == b && b==c && c==a) {
        cout << "all are equals " << endl;
    }
        else if (a == b) {
            cout << "a is equal to b but c is not equal to a or b  " << endl;
        } else if (b == c) {
            cout << "b is equal to c but a is not equal to b or c  " << endl;
        } else if (c == a) {
            cout << "c is equal to a but b is not equal to a or c " << endl;

        } else {
            cout << " all  are not equal ";
        }

*/

//Task # 11: Write a program that accepts two numbers from the user and prints compares
 //which number is  a greater number among them.
 /*
    int a,b;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    if(a>b)
        cout<<"a is greater  ";
    else
        cout<<"b is greater ";
 */
//Task # 12: Write a program that accepts three numbers from the user and prints "increasing"
// if the numbers are in increasing order, "decreasing" if the numbers are in decreasing order.
/*
    int a, b, c;
    cout << "enter value of a : ";
    cin >> a;
    cout << "enter value of b : ";
    cin >> b;
    cout << "enter value of c : ";
    cin >> c;
    if (a < b && b < c) {
        cout << "Increasing order  " << endl;
    } else if (a == b && b == c && c == a) {
        cout << "All are equal ";
    } else if (a > b && b > c) {
        cout << " Decreasing order  ";
    } else {
        cout << "disorder";
    }
    */
    
//Task #14: Take three numbers from the user and print the greatest number. */
    /*
    int a, b, c;
    cout << "enter value of a : ";
    cin >> a;
    cout << "enter value of b : ";
    cin >> b;
    cout << "enter value of c : ";
    cin >> c;
    if(a==b && b==c && c==a) {
        cout << "All are equal ";
    }
        else if(a>b && a>c) {
        cout << "a is greater ";
    }
    else if(b>a && b>c ) {
        cout << "b is greater ";
    }
    else if(c>a && c>b) {
        cout << "c is greater ";
    }
    else {
        cout<<"enter different numbers";
    }

    */
//Task # 16: Write a program that declares an int variable, assign it a value of your choice. The program checks as:
//	if the number is even make it odd number.
//	if the number is odd prints its square.
//	if the number is equal to 0 make it a double figure number and prints its cube.
   
   /*
    int x;
    cout << " enter any number  : ";
    cin >> x;
    if(x==0) {
        cout << "The no is 0 . " << " so we convert it into double figure no that is " << x + 10 << endl;
        x += 10;
        cout << "The cube of double figure is " << x * x * x ;
    }

    else if (x%2!=0) {
        cout << "it is odd num so its square is " << x * x  << endl;
    }
       else if (x % 2 == 0 ){
            cout << "it is even num.  " << " so we convert it into odd that is  " << --x<<endl;
        }

       */
       
// Task # 18  A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// Ask user for quantity
// Suppose, one unit will cost 100.
// Judge and print total cost for user.
  /*
int x;
cout<<"enter the purchased quantity ";
cin>>x;
int cost  , dis;
cost=x;
if(cost>1000){
    dis=cost*0.1*100;
    cout<<"The total cost is "<<dis;
}
else {
    cout << "The cost of your purchased quantity is " << cost;
}
    */
    
//Task # 19: Develop a mark sheet application in java which fulfills the following requirements:
//The program takes input from the user marks obtained in three subjects; C++, Data Structures and Operating Systems.
      
      /* 
      
    int a, b, c, obtmarks;
    float per;
    cout << "enter the obtained marks in C++ : ";
    cin >> a;
    cout << "enter the obtained marks in Data Stuctures : ";
    cin >> b;
    cout << "enter the obtained marks in Operating Systems  : ";
    cin >> c;
    obtmarks = a + b + c;
    cout << "The marks obtained in three subjects  is = " << obtmarks << endl;
    per=obtmarks  * 100 / 300 ;
    cout << "The percentage secured is " <<(float) per << " % " << endl;

    if (per > 90) {
        cout << "GRADE  A ";
    } else if (per < 90 && per > 80) {
        cout << "GRADE B";
    } else if (per < 79 && per > 70) {
        cout << "GRADE C";
    } else if (per < 69 && per > 60) {
        cout << "GRADE D ";
    } else {
        cout << "fail";
    }
    */
   

    return 0;
}

