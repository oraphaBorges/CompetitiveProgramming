#include<iostream>
using namespace std;
int main(){
	int n;
	while(std::cin >> n){
		for (int i=1; i*i <= n ;++i)
			(i==1)? std::cout<< i*i : std::cout<<' '<< i*i;
		std::cout << "\n";
	}
}
