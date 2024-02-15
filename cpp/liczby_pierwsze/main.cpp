#include <iostream>

using namespace std;

int main(){
	int liczby_pierwsze[1000];
	for(int i=2;i<1001;i++){
	for(int x=0;x<1000;x++){

	liczby_pierwsze[x]=i;
    }};
	for(int y=0;y<1000;y++){
	cout<<liczby_pierwsze[y]<<",";
};
	return 0;
}
