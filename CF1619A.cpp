//noob
#include<bits/stdc++.h>
using namespace std;
#define                f1(x) for(int i = 0 ; i < (x) ; i++)
#define                f2(x) for(int j = 0 ; j < (x) ; j++)
#define                pb push_back
#define                mp make_pair
#define                in insert


void solve(){
	string s;
	cin >> s;
	if(s.length() % 2 == 0){
		int mid = s.length()/2;
		int signal = 0;

		int loop = mid;
		for(int i = 0; i < loop; i++){
			if(s[i] == s[mid])mid++;
			else {
				signal = 1;
				break;
			}
		}
		if(signal == 0) cout << "YES" << endl;
		else cout << "NO" << endl;

	}
	else cout << "NO" << endl;


	
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
//freopen("output.txt","w",stdout);
#endif 
int testCase = 1;
cin >> testCase;
while(testCase--)
solve();
  return 0;
}