#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t-- >0){
	    char ch;
	    cin>>ch;
	    ch = tolower(ch);
	    if (ch == 'b'){
	        cout<<"BattleShip"<<endl;
	    }
	    else if(ch == 'c'){
	        cout<<"Cruiser"<<endl;
	    }
	    else if(ch == 'd'){
	        cout<<"Destroyer"<<endl;
	    }
	    else{
	        cout<<"Frigate"<<endl;
	    }
	}
	return 0;
}
