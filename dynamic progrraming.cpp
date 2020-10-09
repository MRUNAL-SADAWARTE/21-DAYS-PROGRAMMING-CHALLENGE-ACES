#include <iostream>
using namespace std;
int f(int n){
	if (n==0){
		return 0;
	}else if (n==1){
		return 1;
	}else{
		return f(n-1)+f(n-2);
	}
}
int main()
{
	for (int i=0;i<11;i++){
		cout<<f(i)<<" ";
	}
}
