#include<stdio.h>
#include<iostream>
#include<list>
using namespace std;
int main()
{
 int i;
 list<int> lv;
 list<int>::iterator li;

 lv.push_back(10);
 lv.push_back(50);
 lv.push_back(30);
 for(li=lv.begin();li!=lv.end();li++)
  {
  cout<<*li<<endl;
  
  }
 lv.sort();
 for(li=lv.begin();li!=lv.end();li++)
  {
  cout<<*li<<endl;
  
  }
 lv.reverse();
 for(li=lv.begin();li!=lv.end();li++)
  {
  cout<<*li<<endl;
  
  }
 lv.assign(6,7);
  lv.reverse();
 for(li=lv.begin();li!=lv.end();li++)
  {
  cout<<*li<<endl;
  
  }
 lv.
}