#include <iostream>
#include <vector>
#include <map>
using namespace std;

void MapEmployee(vector<int> ids,vector<string> names)
{
        map<int,string> employees;
        for(int i=0;i<ids.size();i++)
            employees.insert(pair<int,string>(ids[i],names[i]));
        cout<<employees[4]<<endl;
}

int main()
{
    vector<int> ids;
    for(int i=0;i<10;i++)   
        ids.push_back(i);

    vector<string> names;
    for(int i=0;i<10;i++)
        names.push_back("Karim"+i);
    
    MapEmployee(ids,names);

}