#include <iostream>
#include <map>
class TwoWayMap
{
private:
std::map<std::string,int> s;
std::map<int,std::string>s1;
std::string s2;
int n;
public:
bool setMapEntry(std::string,int);
bool setMapEntry(int,std::string);
std::string getMapValue(int);
int getMapValue(std::string);
TwoWayMap();
};
