//Name:-Pratham Malhotra
//RollNo-:2010990543
//SetNo-:3
//Q2:-find a pair with given sum in it

#include <bits/stdc++.h>

using namespace std;

int main(){
int length=6; //length of array
int num[]={8,7,2,5,3,1,8};
int target=10;
bool flag=false;
map<int,int> mymap;
for(int i=0;i<length-1;i++)
{
    for(int j=i+1;j<length;j++)
    {
       


        if(num[i]+num[j]==target){
            flag=true;
        cout<<"Pair found ("<<num[i]<<","<<num[j]<<")"<<endl;
        }
    }

}
if(flag==false)
{
    cout<<"Pair not found";
}


}