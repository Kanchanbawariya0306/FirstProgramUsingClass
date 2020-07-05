 #include<iostream.h>
 #include<conio.h> 
         
  class student
{
  int roll;
  char grade;
  float per;

 public:
   void get();
   void show();
};

   void student::get()
{
   cout<<"Enter roll,grade and per";
   cin>>roll>>grade>>per;
}
   void student::show()
{
   cout<<roll<<","<<grade<<","<<per;
   cout<<endl;
}

    int main()
 {
     student S;
     clrscr();
     S.get();
     S.show();
     getch();
     return 0;
 }