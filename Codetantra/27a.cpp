// Write your code here to meet the functional rquirements
// of the problem
template<typename T,int size>
class MySequence{
 private:
  T arr[size];
 public:
   void setMember(int index, T value)
   {
   	arr[index]=value;
   }
   
   T getMember(int index){
   	return arr[index];
   }
   void showElements(int count){
   	for(int i=0; i<count; i++){
   		cout<<arr[i]<<" ";
   	}
   	cout<<endl;
   }
};