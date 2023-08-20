#include<iostream>
using namespace std;
class avdhesh
{
    public:
    char student='A';
    int health=100;
    float cpi=9.5;
};
int main()
{
    avdhesh boy;
    cout<<"the health of this boy ="<<boy.health<<endl;
    cout<<"the cpi of this boy ="<<boy.cpi<<endl;
    cout<<"the grade  of this boy="<<boy.student<<endl;
    return 0;
}