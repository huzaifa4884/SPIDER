#include<iostream>
#include<stdlib.h>
using namespace std;
//Aloo k parathay hein
//Garam garam aanday hein
//Hum tum ne khanay hein
//Baray majay anay hein
class sales
{
	private:
		float arr[3]
	public:
		
		
}
class publication
{
	private:
		string a;
		float price;
	public:
		publication()
		{
			cout<<"basse constructor chek "<<endl;
			a = "\0";
			price = 0;
		}
		virtual void get_data()
		{
			cout<<"Title: ";
			cin>>a;
			cout<<endl<<"price: ";
			cin>>price;
		}
		void put_data()
		{
			cout<<"Title: "<<a<<endl<<"price: "<<price<<endl;
		}
};
class book: public publication
{
	private:
		int pno;
	public:
		book()
		{
			cout<<"book constructor chek"<<endl;
			pno =0;
		}
		void get_data()
		{
			publication::get_data();
			cout<<"Give the page no. ";
			cin>>pno;
		}
		void put_data()
		{
			publication::put_data();
			cout<<"the page no. you gave is: "<<pno<<endl;
		}
};

class tape:  public publication
{
	private:
		float min;
	public:
		tape()
		{
			cout<<"audio constructor chek"<<endl;
			min = 0;
		}
		void get_data()
		{
			publication::get_data();
			cout<<"how many minute youv'e read: ";
			cin>>min;
		}
		void put_data()
		{
			publication::put_data();
			cout<<"starting from: "<<min<<"minutes"<<endl;
		}		
	
};
class disk: public publication
{
	private:
		char a[1];
		
	public:
		void get_data()
		{
			publication::get_data();
			cin>>"give disk type"<<a[0]<<endl;
		}
		void put_data()
		{
			publication::put_data();
			cout<<"disk type: "<<a[0]<<endl;
		}
};

int main()
{
	book b1;
	tape t1;
	disk d1;
	cout<<"book info"<<endl;
	b1.get_data();
	b1.put_data();
	cout << string(10, '\n');
	cout<<"now for audio"<<endl;
	t1.get_data();
	t1.put_data();
	cout << string(10, '\n');
	cout<<"now for disk"<<endl;
	d1.get_data();
	d1.put_data();
}
