#include<iostream>
using namespace std;
struct employee{
	char name[30];
	int salary;
	float time;
	
};

void display1(struct employee r1){
	
	if(r1.time>=8){
	cout<<"##########################################"<<endl;
	cout<<" employe name : "<<r1.name<<endl;
	cout<<" hours work per day : "<<r1.time<<endl;
	cout<<" final salary : "<<r1.salary+1000;
	cout<<"\n******************************************"<<endl;
}
else if(r1.time>=10){
	cout<<"##########################################"<<endl;
	cout<<" employe name : "<<r1.name<<endl;
	cout<<" hours work per day : "<<r1.time<<endl;
	cout<<" final salary : "<<r1.salary+2000;
	cout<<"\n******************************************"<<endl;
}
else if(r1.time>=12){
	cout<<"##########################################"<<endl;
	cout<<" employe name : "<<r1.name<<endl;
	cout<<" hours work per day : "<<r1.time<<endl;
	cout<<" final salary : "<<r1.salary+2000;
	cout<<"\n******************************************"<<endl;
}
else
cout<<"error";

}

void display2(struct employee r2){
	
	if(r2.time>=8){
	cout<<" employe name : "<<r2.name<<endl;
	cout<<" hours work per day : "<<r2.time<<endl;
	cout<<" final salary : "<<r2.salary+1000;
	cout<<"\n******************************************"<<endl;
    }
     else if(r2.time>=10){
	cout<<" employe name : "<<r2.name<<endl;
	cout<<" hours work per day : "<<r2.time<<endl;
	cout<<" final salary : "<<r2.salary+2000;
	cout<<"\n******************************************"<<endl;
    }
    else if(r2.time>=12){
    cout<<" employe name : "<<r2.name<<endl;
	cout<<" hours work per day : "<<r2.time<<endl;
	cout<<" final salary : "<<r2.salary+2000;
	cout<<"\n******************************************"<<endl;
    }
	else
    cout<<"error";
}
	
int main(){
	employee employe1,employe2;
	cout<<" name of employe1 : ";
	cin>>employe1.name;
	cout<<" salary? : ";
	cin>>employe1.salary;
	cout<<" hours of work per day? : ";
	cin>>employe1.time;
	cout<<" name of employe2 : ";
	cin>>employe2.name;
	cout<<" salary? : ";
	cin>>employe2.salary;
	cout<<" hours of work per day? : ";
	cin>>employe2.time;
	display1(employe1);
	display2(employe2);
	return 0;	
}
	
