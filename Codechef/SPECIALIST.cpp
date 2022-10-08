#include <iostream>

#include<cmath>

#include<algorithm>

using namespace std;

int main() {

	// your code goes here	int t;

	cin>>t;

	while(t--){

	    int x,y,z,max1;

	    cin>>x>>y>>z;

	    

	    if(x>y &&x>z){

	        max1=x;

	    }

	    else if(y>x&&y>z){

	        max1=y;

	    }else if(z>x&&z>y){

	        max1=z;

	    }

	    

	    

	    if(x==max1){

	        cout<<"Setter"<<endl;

	    }

	    else if(y==max1){

	        cout<<"Tester"<<endl;

	    }

	    else{

	        cout<<"Editorialist"<<endl;

	    }

	    

	}

	return 0;

}

        
