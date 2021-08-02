#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
ofstream wfile;
struct bookproberity
{
string name,author,ISBN,booktype;
int date;
float price;
};
void sorting(int z,bookproberity arr[0])
{
    for(int i=0;i<z;i++)
        {
            wfile<<setw(20)<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<<setprecision(1);
            wfile<<arr[i].name;
        }
}
int main()
{
    int size=0;
    
    wfile.open("booksfile.txt",ios::out);
    cout<<"\n\n\t\t\tWelcome to Book manage tool \n\n*****************************************************************\n\n";
   cout<<"How many books you want to store : \t";cin>>size;
   bookproberity book[size];
    for(int i=0 ; i<size ;i++)
    {
        cout<<"Enter the book number "<<i+1<<" name :\t";
        while(cin>>book[i].name)
        {
            wfile<<"\n"<<book[i].name<<setw(10)<<setiosflags(ios::fixed)<<endl;
            break;
        }
        cout<<"Enter the book number "<<i+1<<" author name :\t";
        while(cin>>book[i].author)
        {
            wfile<<"\n"<<setw(10)<<setiosflags(ios::fixed)<<book[i].author;
            break;
        }
        
        
    }
    
}