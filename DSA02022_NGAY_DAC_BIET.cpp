#include <bits/stdc++.h> 
using namespace std; 
bool ok; int a[9]; 
void ktao(){ 
	for(int i = 1; i <= 8; i++){ 
		a[i] = 0; 
	}
} 
void sinh(){ 
	int i = 8; 
	while(i > 0 && a[i] == 2){ 
		a[i] = 0; 
		i--; 
	} 
	if(i == 0){ 
		ok = false; 
	} 
	else{ 
		a[i] = 2; 
	} 
} 
int main(){ 
	ktao(); 
	ok = true; 
	while(ok){ 
		// khong co ngay 00 va thang 20 , 22 va nam 0XXX
		if((a[2] != 0 || a[1] != 0) && a[3] != 2 && a[5] != 0 && a[4] != 0){ 
			for(int i = 1; i <= 8; i++){ 
				if(i == 2 || i == 4){ 
					cout << a[i] << "/"; 
				}
				else{ 
					cout << a[i]; 
				} 
			} 
			cout << endl; 
		} 
		sinh(); 
	} 
}
