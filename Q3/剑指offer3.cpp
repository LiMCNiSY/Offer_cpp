#include<iostream>
using namespace std;

bool a(int numbers[],int length,int *duplication)
{
	if(length<=0||numbers==NULL)
	{
		return false;
	}
	for(int i=0;i<length;i++)
	{
		if(numbers[i]<0||numbers[i]>length-1)
		  return false;
	}
	for(int i=0;i<length;i++)
	{
		while(numbers[i]!=i)
		{
			if(numbers[i]==numbers[numbers[i]])
			{
				*duplication=numbers[i];
				return true;
			}
			int c=numbers[i];
			numbers[i]=numbers[c];
			numbers[c]=c;
		}
	}
	return false;
}
int main()
{
	int c,d;
	int *e;
	int numbers[c];
	cout<<"���뼸����";
	cin>>c;
	cout<<"����Ϊ"; 
	for(int i=0;i<c;i++)
	{
		cin>>numbers[i]; 
	} 
	if(a(numbers,c,e)!=0)
	  cout<<"���ظ�";
	else
	  cout<<"���ظ�";
	return 0;
	
}
