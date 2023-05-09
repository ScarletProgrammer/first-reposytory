#include <iostream>
using namespace std;
int main(){
    vector<int> val(101); vector<int> primer; int f = 0;
    for(int i = 3; i < val.size(); ++i){
	    val[i] = i;
	for(val[i]; val[i]<val.size(); val = val+2){
	     for(int j = 3; j<=val[i]; j = j+2){
		  if(val[i]%j == 0){
		     if(val[i] == j){
			f = 1;
		  }else if(val[i] != j){
			  f = 0;
		  }
	     }
	}
	     if(f == 1){primer.push_back(val[i]);}
    }
    
}
