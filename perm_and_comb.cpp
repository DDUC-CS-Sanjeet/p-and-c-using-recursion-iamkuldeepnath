/*
KULDEEP NATH
19HCS4029
THIS PROGRAM WILL COMPUTE PERMUTATON AND COMBINATION OF 2 NUMBERS ENTERED BY THE USER...
*/
#include<iostream>
using namespace std;

// RECURSIVE FUNCTION TO CALCULATE PERMUTATION
int permutation(int n, int r)
{
	if(r==0)
		return 1;
	else
		return (n)*permutation(n-1,r-1);
}
 // RECURSIVE FUNCTOIN TO CALCULATE COMBINATOIN
int combination(int n, int r)
{
	if(r==0)
		return 1;
	else
		return ( 1.0*combination(n-1,r-1) )*n/r;
}

int main()
{
	cout<<"Enter 2 numbers (as \"nCr\" or like \"nPr\") : \n";
	int n,r;
	cin>>n>>r;
	
	try
	{
		if(n<0 || r<0 || n<r)
			throw "\nINVALID INPUT ....!!!!!!";
		
		else
		{
			cout<<"\n1. PERMUTATION";
			cout<<"\n2. COMBINATION";
			cout<<"\nENTER CHOICE.....";
			int choice;
			cin>>choice;
			switch(choice)
			{
				case 1:
					cout<<"\n#--------------------------------------------------------------------------#\n";
					cout<<"\n Permutation (" <<n<<"P"<<r<<" ): "<<permutation(n,r);
					break;
					
				case 2:
					cout<<"\n#--------------------------------------------------------------------------#\n";
					cout<<"\n Combination (" <<n<<"C"<<r<<" ): "<<combination(n,n-r);
					break;
					
				default:
					break;
			}
		}
		
	}
	
	catch (int a)
	{
		cout<<"\n#--------------------------------------------------------------------------#\n";
			cout<<"\n Permutation (" <<n<<"P"<<r<<" ): "<<a;
			cout<<"\n Combination (" <<n<<"C"<<r<<" ): "<<a;
	}
	
	catch (const char *a)
	{
		cout<<a;
	}
	
  return 0;
}
