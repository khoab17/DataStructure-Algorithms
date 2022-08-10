#include<bits/stdc++.h>
using namespace std;

class CityDetails{
    public:
    string name;
    int pop;
    string code;
    CityDetails(string n,int p,string c)
    {
        name=n;
        pop=p;
        code=c;
    }
};

int main()
{
    CityDetails dhaka("Dhaka",2000, "2131");
    CityDetails raj("Rajshahi",23000, "21531");
    CityDetails bar("Barishal",20400, "221631");

    unordered_map<string, CityDetails> cities;
    cities["Dhaka"]="dhaka";
    cities["Rajshahi"]="raj";
    cities["Barishal"]="bar";

    string p=cities["Dhaka"];
    cout<<p<<endl;

}