#include <iostream>
#include <stack>  
using namespace std;

int a[1000000];
int t = 0;

void push(int x)
{
  
  a[t] = x;
  t++;
  
}

bool empty()
{
  return (t==0);
}

int pop()
{   
    
      t--;
      return a[t]; 
    
}
int back()
{
  return a[t-1];
}

int size()
{
  return t;
}

void clear()
{
  t=0;
  
}

int main()
{ 
  while(1){
    string s;
    cin>>s;

    if(s=="push")
    {
      int x;
      cin>>x;
      push(x);
      cout<<"ok"<<endl;

    }
    if(s=="pop")
    { 

      if(!empty())
      {
       cout<<pop()<<endl; 
      }
      else
      {
        cout<<"error"<<endl;
      }
      
    }
    if(s=="back")
    {
      if(!empty())
      {
       cout<<back()<<endl; 
      }
      else
      {
        cout<<"error"<<endl;
      }
      
    }
    if(s=="size")
    {
      cout<<size()<<endl;
    }
    if(s=="clear")
    {
      clear();
      cout<<"ok"<<endl;
    }
    if(s== "exit")
    {
      cout<<"bye";
      break;
    }
  }
  
    return 0;
}