#include <iostream>
#include <cmath> 
using namespace std;
// this programmed by <<Alaa Mohammed Ali Ghaleb>>.
int main()
 {int cho;
 cout<<" Hello \n";
 cout<<"idea of this program is how to use";
 cout<<" DECISION AND REPEAT INSTRUCTIONS in c++ language\n";
 cout<<"1:if......else statemant"<<endl;
 cout<<"2:switch......case statament"<<endl;
 cout<<"3:condipion operation"<<endl;
 cout<<"4:while statement"<<endl;
 cout<<"5:do......while statment"<<endl;
 cout<<"6:for statment"<<endl;
 cin>>cho;
 switch(cho)
 {case 1:/* the idea of doing this part of the main program:
                  is to solve the following equations:
             D=3X^3-2X+5     IF(X>8)
             D=sqrt(x^2-9)   IF(4<=X<=8)
             D=|X-7|         IF(X<4)     */
 { int x;
 float y;
 cout<<"please enter the value of x"<<endl;
 cin>>x;
 if(x>8)
 y=(3*pow(x,3)-2*x+5);
 else if(x<4)
 y=abs(x-7);
 else(x<8 && x>4);
 y=(sqrt(pow(x,2))-9);
 cout<<"y="<<y;}break;
 case 2:/*the idea of doing this part of the main program: 
 is to perform four math operations{+'-'*'/} to namber  A AND B.*/
 {float a,b;
 char op;
 cout<<"please enter the value of a:"<<endl;
 cin>>a;
 cout<<"please enter the value of b:"<<endl;
 cin>>b;
 cout<<"please enter the operation you want  "<<endl;
 cin>>op;
 switch(op)
 {case '+':cout<<a<<"+"<<b<<"="<<a+b<<endl;break;
 case '-':cout<<a<<"-"<<b<<"="<<a-b<<endl;break;
 case '*':cout<<a<<"*"<<b<<"="<<a*b<<endl;break;
 case '/':cout<<a<<"/"<<b<<"="<<a/b<<endl;break;
 default:cout<<"erorr";}} break;
 case 3:/*the idea of doing this part of the main program:
                is to solve the following equations:
         Z=5A^2+3B/A       IF(A>B)
         Z=B^2-3A          IF(A<B) */ 
 { float z;
 int a,b;
 cout<<"please enter the value a and b \n";
 cin>>a>>b;
 z=(a>=b)?(5*pow(a,2)+3*b/a):(pow(b,2)*3*a);
 cout<<"z="<<z;break;}	
 case 4:/*the idea of doing this part of the main program:
             prints the entry number and stops at zero */
 {double n;
 cout<<"please enter the namber"<<endl;
 cin>>n;
 while(n!=0)
 {cout<<"n="<<n<<endl;
 cin>>n;}}
 break;
 case 5: /* the idea of doing this part of the main program:
    prints a averge of five intergers numbers within a range(1 to 100) */
 {int x;
 	int i=0;
 	int sum=0;
 	float avg;
 	do{cout<<"enter the namber"<<i+1<<endl;
 	cin>>x;
 	if(x<=1|| x>=100 )
 	break;
 	sum+=x;
 	i++ ;}
 	while(i<5);
 	if(i!=5)
 	cout<<"you have added namber out of the accessing  range\n";
 	else
 	{
	 avg=sum/5;
 	cout<<"the averge between 5 nambers is ="<<avg;}}break;
 	case 6: /*the idea of doing this part of the main program:
	                  is to find a factorial for any namber */
	 { double m=1;
 	int n;
 	cout<<"please enter the namber which you want find its factorial ";
 	cin>>n;
 	for(int i=1; i<=n; i++ )
 	m*=i;
 	cout<<"multe="<<m;}break;
 	default :cout<<"erorr"; } 
	 return 0;
	 }

