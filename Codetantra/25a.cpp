// Type your code here to complete the functionality
void Student :: readData(){
	cout<<"Enter student id and name : ";
	cin>>id>>name;
	
}
void Student :: displayData(){
	cout<<"Id : "<<id<<endl;
	cout<<"Name : "<<name<<endl;
}
void Marks :: readMarks(){
	cout<<"Enter three subjects marks : ";
	cin>>m1>>m2>>m3;
	
}
void Marks::displayTotAvgMarks(){
	cout<<"Three subjects marks : "<<m1<<" "<<m2<<" "<<m3<<endl;
	total=m1+m2+m3;
	cout<<"Total marks : "<<total<<endl;
	avg=total/3.0;
	cout<<"Average marks : "<<avg<<endl;
}
int main(){
	Student s1;
	Marks m1;
	s1.readData();
	m1.readMarks();
	s1.displayData();
	m1.displayTotAvgMarks();
	return 0;
}