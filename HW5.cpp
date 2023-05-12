#include<iostream>
#include<algorithm>

int main(){
	int n;
	int arr[20];
	int i=0;
	while(i<10){
		
		std::cin>>arr[i];
		i++;
	}
	for(int a=0;a<10;a++){
  		for(int b=0;b+1<10;b++){
		  
  		if(arr[b]>arr[b+1]){
  			int c=arr[b];
  			arr[b]=arr[b+1];
  			arr[b+1]=c;
  		
  		}
		  }
	  }
 	for(int a=0;a<10;a++){
 		std::cout<<arr[a];
	 }
  	
}
