#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; 
	cin>>n; // give input of number of kilometers
	string str;
	cin>>str;
	int mini = 0;
	int sedan = 0;
	int suvi = 0;
	//finding cost of mini 
	if(n > 75){
	mini = n*8;

	}
	if(n <= 75 && n >= 18){
	    
	mini = (n-18)*8;
	mini = mini + 200;
	}
	if(n < 18 && n >= 3){
	  
	    mini = (n-3)*10;
	    mini = mini + 50;
	}
	if(n < 3){
	    mini = 50;
	}
//finding cost of sedan
	if(n > 100){
	sedan = n*10;

	}
	if(n <= 100 && n >= 20){
	sedan = (n-20)*10;
	sedan +=  15*12;
	sedan += 80;
	}
if(n < 20 && n >= 5){
    sedan = (n-5)*12;
    sedan += 80;
}
if(n < 5){
    sedan = 80;
}
//finding cost of SUV
if(n <= 5){
    suvi = 100;
    
}
if(n > 5 && n < 15){
    suvi = (n-5)*15;
    suvi += 100;
}
if(n > 15){
    suvi = (n-20) * 12;
    suvi += 325;
}

cout<<"Mini - Rs. "<<mini<<", Sedan - Rs. "<<sedan<<", SUV - Rs. "<<suvi<<" ";
return 0;

}


