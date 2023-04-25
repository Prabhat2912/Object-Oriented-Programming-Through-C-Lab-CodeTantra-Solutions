// Implement displayToAvg function of Result class here
void Result:: displayTotAvg(){
	s1=m1+e1;
	s2=m2+e2;
	s3=m3+e3;
	cout<<"Three subject totals : "<<s1<<" "<<s2<<" "<<s3<<endl;
	tot=s1+s2+s3;
	cout<<"Total marks : "<<tot<<endl;
	avg=tot/3.0;
	cout<<"Average marks : "<<avg<<endl;
}