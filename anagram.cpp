#include<cstring>
#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;
bool isana(char str1[] , char str2[])
{
	int a[256]={0};
	int b[256]={0};
	int i=0;
	if(strlen(str1)!=strlen(str2))
		return false;
	else if(strlen(str1)==strlen(str2))
	{
		for(i=0;i<strlen(str1);i++)
		{
			a[int(tolower(str1[i]))]++;
			b[int(tolower(str2[i]))]++;
		}
		for(i=0;i<256;i++)
		{
			if(a[i]!=b[i])
				return false;
		}
		return true;

	}
}
int main()
{
char test1[256];
char test2[256];
cin.getline(test1,256);
cin.getline(test2,256);
if(isana(test1,test2))
	cout<<"voila";
else
	cout<<"not";
}
