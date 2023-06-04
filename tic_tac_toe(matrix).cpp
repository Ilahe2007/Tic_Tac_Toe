#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	char a[3][3];
	ll c=0,d=0;
	for(ll i=1;i<=3;i++){
		for(ll j=1;j<=3;j++){
			a[i][j]='_';
			cout<<a[i][j];
		}cout<<endl;
	}
	while(true){
		if (d==0 and c!=9){
			ll n,m;
			cout<<"Enter two numbers between 1-3"<<endl;
			cin>>n>>m;
			if(n>3 or m>3){
				cout<<"This number is bigger than 3";
				cin>>n>>m;
			}else{
				c++;
				if (c%2!=0){
					if(a[n][m]!='o' and a[n][m]!='x'){
						a[n][m]='o';
					}else{
						cout<<"This spot is already taken choose another one:"<<endl;
						cin>>n>>m;
						a[n][m]='o';
					}
				}else{
					if(a[n][m]!='o' and a[n][m]!='x'){
						a[n][m]='x';
					}else{
						cout<<"This spot is already taken choose another one:"<<endl;
						cin>>n>>m;
						a[n][m]='x';
					}
				}for(ll i=1;i<=3;i++){
					if(d==0){
						for(ll j=1;j<=3;j++){
							if((a[i][j]=='x' and a[i+1][j+1]=='x' and a[j+2][j+2]=='x') or (a[i][j]=='x' and a[i][j+1]=='x' and a[i][j+2]=='x') or (a[i][j]=='x' and a[i+1][j]=='x' and a[i+2][j]=='x') or (a[3][1]=='x' and a[2][2]=='x' and a[1][3]=='x')){	
								cout<<"Player2 won";
								d++;
								break;
							}else if((a[i][j]=='o' and a[i+1][j+1]=='o' and a[j+2][j+2]=='o') or (a[i][j]=='o' and a[i][j+1]=='o' and a[i][j+2]=='o') or (a[i][j]=='o' and a[i+1][j]=='o' and a[i+2][j]=='o') or (a[3][1]=='o' and a[2][2]=='o' and a[1][3]=='o')){	
								cout<<"Player1 won";
								d++;
								break;
							}else{
								cout<<a[i][j];
							}	
						}cout<<endl;
					}else{
						if(c==9){
							cout<<"Tie"<<endl;						
						}else{
							break;
						}
					}
				}	
			}
		}else{
			break;	
		}
	}
}
