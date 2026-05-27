#include <iostream>
using namespace std;

int main()
	{
		int number;
		cout<<"enter an  integer";
		cin>>number;
		
		if(number>=0)/*if is a first condition which means that when we enter a number greater or equal to 0 then it will show you entered a positive  integer 
		after compiling and running	which is a first condition. */
		
		
		cout<<"you entered a postive integer "<<" number" <<endl; /* jub hum number ko darmyan me se remove karte hy to hame run karne k bad koye integer likhne phar hame wo
		number sow nahi karega bulke sirf inter a positive or negative integer show karega. */
	
		
		else /* else is a second condition which means that when we enter a number less than 0 i-e -1'-2'-3 then it will show  you entered a negative integer 
		 after compiling and running whoch is a second condition.*/
		
         cout<<"you entered a negative integer "<<number<<endl;
     
     return 0;
}
		
