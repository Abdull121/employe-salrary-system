#include<iostream>
using namespace std;
struct employee{
	string name[10];
	int salary[10],time[10];
	
};

void employee_condition(struct employee c1){
	for(int i=0;i<2;i++){
		cout<<" employe name : "<<c1.name[i]<<endl;
		cout<<" hours of work per day : "<<c1.time[i]<<endl;
		if(c1.time[i]==8){
 		cout<<" final salrary : "<<c1.salary[i]+1000<<endl;
	 }
	 else if(c1.time[i]==10){
 		cout<<" final salrary : "<<c1.salary[i]+2000<<endl;
	 }
	 else if(c1.time[i]>=10){
 		cout<<" final salrary : "<<c1.salary[i]+3000<<endl;
	 }
	 cout<<"\n****************************\n";
	 
	}
			
}
int main(){
 employee employe1;
 for(int i=0;i<2;i++){
 	cout<<" employe name : ";
 	cin>>employe1.name[i];
 	cout<<" hours of work per day : ";
 	cin>>employe1.time[i];
 	cout<<" employe salrary : ";
 	cin>>employe1.salary[i];
 
 }
 cout<<"**********************************\n";
 employee_condition(employe1);
 
 return 0;
	
}
