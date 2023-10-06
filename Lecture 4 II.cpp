#include<iostream>
using namespace std;

/*int main(){
	float a,b;
	cout<<"give 2 floating point numbers as input"<<endl;
	cin>>a>>b;
	if(a>0.01 && b>a){
		cout<<"The condition in if statement is correct";  //will only be executed if the statement in the paranthesis is correct
	}
	else{
		cout<<"The condition is false";
	}
	return 0;
}*/

// Grades

/*int main(){
	 int marks;
	 cout<<"Student, please enter the marks to calculate the grade: ";
	 cin>>marks;
	 
	 if(marks>90){
	 	cout<<"A";
	 }
	 else if(marks>80){
	 	cout<<"B";
	 }
	 else if(marks>70){
	 	cout<<"C";
	 }
	 else{
	 	cout<<"Pass";
	 }
	return 0;
}*/

int main(){
	 int a,b,c,d;
//	 cout<<"give 4 integers as input a,b,c,d"<<endl;
//	 cin>>a>>b>>c>>d;
//	 
//	 if(a>b && c>d){
//	 	cout<<"haha";
//	 }
//	 else if(a>b && c<d){
//	 	cout<<"hehe";
//	 }
//	 else{
//	 	cout<<"huhu";
//	 }
    cout<<"enter a int:";
    cin>>a;
    
    switch(a){  //to the condition in this paranthesis //it will first evaluate the value inside the switch paranthesis 
    	case 1:
    		cout<<"The value of a is 1";
    		break;
    	case 2:
    		cout<<"The value of a is 2";
    		break;
    	case 3:
    		cout<<"The value of a is 3";
    		break;	
		default:
		    cout<<"default will always be printed";
			break;		
	} 
	return 0;
}