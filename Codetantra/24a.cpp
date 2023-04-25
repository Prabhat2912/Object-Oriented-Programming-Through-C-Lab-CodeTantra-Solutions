// Type your code in this file to complete the required functionality
void Student :: readData(){
	cout<<"Enter student id and name : ";
	cin>>id>>name;
}
void Student :: displayData(){
	cout<<"Id : "<<id<<endl;
	cout<<"Name : "<<name<<endl;
}
void Test :: readMarks(){
	cout<<"Enter three subjects marks : ";
	cin>>m1>>m2>>m3;
}
void Result :: displayTotAvgGrades()
{
	cout<<"Three subjects marks : "<<m1<<" "<<m2<<" "<<m3<<endl;
	float tot=m1+m2+m3;
	cout<<"Total marks : "<<tot<<endl;
	float avg= tot/3.0;
	cout<<"Average marks : "<<avg<<endl;
	
	if(avg>=75)
	{
		cout<<"Distinction"<<endl;
	}
	else if(avg>=60)
	{
		cout<<"First class"<<endl;
	}
	else if(avg>=50)
	{
		cout<<"Second class"<<endl;
	}
	else if(avg>=35)
	{
		cout<<"Third class"<<endl;
	}
	else
	{
		cout<<"Very poor in studies"<<endl;
	}
}