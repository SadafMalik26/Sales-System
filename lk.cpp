#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class admin
{
	string username,password,un,pw;
public:
bool loggedin()
{
	
	cout<<"\n\t\tenter username :";
	cin>>username;
	cout<<"\n\t\tenter password :";
	cin>>password;
	ifstream read ("text.txt");
	getline(read,un);
	getline(read,pw);
	if(un == username && pw == password)
	{
	return true;
	}
	else

	{

	return false;

	}

}};


class item
{
    private:
        char name[50];
        int code[20];
        float price[20];
        int z;
    public:
        void ADD();
        void dell();
        void sell();
        void display();
        void initial(){z=0;}

};
     void item :: ADD()
       {
    
    cout<<"enter the item code: ";
    cin>>code[z];
    cout<<"enter the price of the item: ";
cin>>price[z];
    cout<<"enter the item category: ";
    cin>>name[z];
    cout<<"item added";
    z++;
       }


       void item :: dell()
       {
     int i,j;

cout<<"\nplease enter the item code:";
     cin>>i;
     for(j=0;j<code[z];j++)
    {
      if(code[j]==i)
      {
        
   cout<<"\nthe item is deleted from the list.";
}
   else
   {
   	cout<<"item not found";
   }
        break;
      }
    }
       

      void item :: sell()
      {
    char a;
    int k,l;
    float total_price=0;

    cout<<"\nenter the item code:";
    cin>>k;
    for(l=0;l<z;l++)
    {
      if (code[l]==k)
      {
        if(price[l]==0)
        {
     cout<<"\nsorry.there is no item left in this category.";
     cout<<"\ndo you want to buy another item? y\\n";
          cin>>a;
          if (a=='y')
          {
   cout<<"\nenter the item code:";
        cin>>k;
        l=-1;
          }
          else if (a=='y')
          {
   cout<<"\nenter the item code:";
        cin>>k;
        l=-1;
          }
          else
          {
        if (total_price!=0)
        {
     cout<<"\nyour total price is: ";
     cout<<total_price<<" taka."<<"\nthank you.";
        }
   cout<<"bye...bye...";
        break;
          }
        }
        else
        {
     cout<<"item category is: "<<name[l];
     cout<<"\nitem price is   : "<<price[l]<<"tk.";
          total_price+=price[l];
          price[l]=0;
     cout<<"\ndo you want to buy another item:y\\n";
          cin>>a;
          if (a=='y')
          {
   cout<<"\nenter the item code:";
        cin>>k;
        l=-1;
          }
          else if (a=='y')
          {
   cout<<"\nenter the item code:";
        cin>>k;
        l=-1;
          }
          else
          { 
   cout<<"\nyour total price is: ";
   cout<<total_price<<"taka."<<"\nthank you.";
        break;
          }
        }
      }
    }
    getch();
    }

    void item :: display()
     {
       int m,n=1;

       for(m=0;m<z;m++)
      {
   cout<<n<<".item category is: "<<name[m];
   cout<<"\n  item code is    : "<<code[m];
   cout<<"\n  item price is   : "<<price[m]<<"tk.";
        n++;
       }
      
      }
class menu:public item
{
	private:
		int i;
	public:
void go()
{
initial();
    {
 cout<<"\n   what do you want to do?";
 cout<<"\n1: add a new item.";
 cout<<"\n2: delete an item.";
 cout<<"\n3: sale an item.";
 cout<<"\n4: display all items.";
 cout<<"\n5: exit";
 cout<<"\n\n choose a number:";
      cin>>i;

      switch(i)
      {
        case 1:
        {
        ADD();
          break;
        }
        case 2:
        {
          dell();
          break;
        }
        case 3:
        {
          sell();
          break;
        }
        case 4:
        {
        display();
          break;
        }

           case 5:
        {
     cout<<"good bye! thank you.";
          break;
        }
      }
      if (i>5||i<1)
       cout<<"wrong choice";
       
    }
    getch();
}};

 int main ()
   {
   	system ("cls");
menu m1 ;
admin obj;

	int choice;

	cout<<"\n\n\t\t\t\t======welcome======"<<endl;

	cout<<"\n\n\t\t\t\t====please login===="<<endl;

	cout<<"\n\t\t\t************************\n";

	cout<<"\n\t\t\t1: register\n\n\t\t\t2: login\n\n\t\t\tyour choice:";cin >> choice;

	system("cls");

	cout<<"\n\t\t\t************************\n";

	

	if(choice == 1)

	{

		string username,password;

		cout<<"\n\tselect a username: ";cin>>username;

		cout<<"\n\tselect a password: ";cin>>password;

		ofstream file;

		file.open("text.txt");

		file << username << endl << password;

		file.close();

		system("cls");

	}

	else if(choice == 2)

	{

		bool status = obj.loggedin();

		if(!status)

		{

			cout<<"\n\t\tfalse login!"<<endl;

			system("pause");

			exit(0);

		}

		else

		{

			cout<<"\n\t\tsuccessfully logged in !"<<endl;

			system("pause");

			system("cls");
			m1.go();

		}}
   return 0;
		}

    

