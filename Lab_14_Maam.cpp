#include <iostream>
#include<fstream>
using namespace std;
int main()
{
   fstream ffile1,ffile2,ffile3;
	int n, count;
	ffile1.open("Country.txt",ios::out);
	ffile2.open("Capital.txt",ios::out);
	if(!ffile1)
	{
		cout<<"Error occured in creating the country file\n";
	}
	if(!ffile2)
	{
		cout<<"Error occured in creating the capital file\n";
	}
	cout<<"Enter the number of entries: \n";
	cin>>n;
	cout<<"Enter the names of the countries and their respective capitals for "<<n<<" entries\n";
	string country,capital;
	for (int i = 0; i < n; i++)
	{
		cin>>country>>capital;
		ffile1<<country<<endl;
		ffile2<<capital<<endl;
	}
	ffile1.close();
	ffile2.close();
	ffile1.open("Country.txt",ios::in);
	ffile2.open("Capital.txt",ios::in);
	ffile3.open("Data.txt",ios::out);
	if(!ffile1)
	{
		cout<<"Errror occured in opening the country file\n";
	}
	if(!ffile2)
	{
		cout<<"Errror occured in opening the capital file\n";
	}
	if(!ffile3)
	{
		cout<<"Errror occured in creating the Info file\n";
	}
	count = n;
	while(count--)
	{
		ffile1>>country;
		ffile2>>capital;
		ffile3<<country<<" "<<capital<<"\n";
	}
	count=n;
	ffile1.close();
	ffile2.close();
	ffile3.close();
	ffile3.open("Data.txt",ios::in);

	cout<<"\nData in the file is:\n";
	if(!ffile3)
	{
		cout<<"Errror occured in opening the Info file\n";
	}
	while(count--)
	{
		ffile3>>country>>capital;
		cout<<country<<" "<<capital<<endl;
		}
	ffile3.close();
	return 0;
}