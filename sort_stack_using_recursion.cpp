#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void insert(stack<int> s, int temp)
{
  if(s.size() == 0 || s.top() <= temp) 
  {
    s.push(temp);
    return;
  }
  
  int ele = s.top();
  s.pop();
  insert(s, temp);
  
  s.push(ele);
}


void sort(stack<int> s)
{
  if(s.size() == 0) 
  {
    return;
  }
  
  int temp = s.top();
  s.pop();
  sort(s);
  
  insert(s, temp);
  
}


int main() 
{
    // sort a stack using recursion
    // IBH
    
    stack<int> s;
    for(int i=0;i<4;i++) 
    {
      int temp;
      cin >> temp;
      
      s.push(temp);
    }
    
    sort(s);
    
    while(s.size() != 0)
    {
      cout << s.top() << " ";
      s.pop();
    }
    
    
    
    return 0;
}