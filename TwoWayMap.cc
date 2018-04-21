#include <iostream>
#include <map>
using namespace std;
#include "TwoWayMap.h"
bool TwoWayMap::setMapEntry(string s2,int n)
{
  bool modified = false;
  map<string,int>::iterator it;
  map<int,string>::iterator it1;

  it = s.find(s2);
  if(it!=s.end())
  {
    int t = s[s2];
    it1 =s1.find(t);
    s1.erase(it1);
    modified = true;
  }

  it1 = s1.find(n);
  if(it1!=s1.end())
  {
    string t = s1[n];
    it =s.find(t);
    s.erase(it);
    modified = true;
  }

  s[s2] = n;
  s1[n] = s2;
  return modified;

}
int TwoWayMap::getMapValue(string s2)
{
  return s[s2];
}
bool TwoWayMap::setMapEntry(int n,string s2)
{
  bool modified = false;
  map<string,int>::iterator it;
  map<int,string>::iterator it1;

  it = s.find(s2);
  if(it!=s.end())
  {
    int t = s[s2];
    it1 =s1.find(t);
    s1.erase(it1);
    modified = true;
  }

  it1 = s1.find(n);
  if(it1!=s1.end())
  {
    string t = s1[n];
    it =s.find(t);
    s.erase(it);
    modified = true;
  }

  s[s2] = n;
  s1[n] = s2;
  return modified;
}
string TwoWayMap::getMapValue(int n)
{
  return s1[n];
}

TwoWayMap::TwoWayMap() {

}
