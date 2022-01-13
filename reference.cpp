#include<iostream>
using namespace std;
int main(){
	int x=6;
	int &y=x;
	cout<<x<<endl;
	cout<<y<<endl;
	x++;
	y++;
	cout<<x<<" "<<y;
}
