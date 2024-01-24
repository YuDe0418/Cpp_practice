#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

string tb[8] = {"elder","nursy","kit","warrior","appentice","medicent","deputy","leader"};

struct st
{
    int type;
    int age;
    string name;
}arr[100005];

bool cmp(const st st1,st st2)
{
    if(st1.type != st2.type) return st1.type < st2.type;
    if(st1.age != st2.age)
    {
        if(st1.type == 5) return st1.age < st2.age;
        else st1.age > st2.age;
    }
    return st1.name < st2.name;
}


signed main(void)
{
    IO
    int n,m;
    while(cin >> n >> m)
    {
        int age;
        string name,type;
        for(int j=0;j<n;j++) 
        {
            cin >> name >> type >> age;
            for(int i=0;i<8;i++)
            {
                if(type == tb[i])
                {
                    arr[j].age = age;
                    arr[j].type = i+1;
                    arr[j].name = name;
                    break;
                }
            }
        }
        sort(arr,arr+n,cmp);
        for(int i=0;i<min(m,n);i++) cout << arr[i].name << endl;
    }

}