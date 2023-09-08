#include<iostream>
#include<conio.h>
using namespace std;
class student
{int rollno;
 char name[20];
 int sem;
    char section;
    public:
void setdata()
    {cout<<"enter semester,rollno,name and section of student"<<endl;
        cin>>sem;
        cin>>rollno;
        cin.ignore();
        cin.getline(name,19);
        cin>>section;
        }
    void showdata()
    {cout<<"sem   roll no.   name    section\n";
        cout<<sem;
      if(sem==1)
        cout<<"st";
        else if(sem==2)
        cout<<"nd";
        else if(sem==3)
        cout<<"rd";
        else
        cout<<"th"; 
        cout<<"   "<<rollno<<"      "<<name<<"      "<<section<<endl;
    
}  void showonlydata()
    {cout<<sem;
      if(sem==1)
        cout<<"st";
        else if(sem==2)
        cout<<"nd";
        else if(sem==3)
        cout<<"rd";
        else
        cout<<"th"; 
        cout<<"   "<<rollno<<"      "<<name<<"      "<<section<<endl;
    
}
  /*  void showdata()
    {cout<<"\nsemester="<<sem;
        if(sem==1)
        cout<<"st";
        else if(sem==2)
        cout<<"nd";
        else if(sem==3)
        cout<<"rd";
        else
        cout<<"th";   
    cout<<"\nRoll no.="<<rollno<<"\nName="<<name<<"\nsection="<<section;}*/
            };
class record
{class node
 {public:
    student stu;
     node *next;
};
    node *start;
    public:
    record(){start=0;}
   void add_first()
    {node *p;
    p=new node;
    p->stu.setdata();
    p->next=start;
    start=p;
    }
   void add_last()
    {node *p,*t;
        p=new node;
    p->stu.setdata();
        p->next=0;
        if(start==0)
        start=p;
        else
        for(t=start;!t->next==0;t=t->next) { }
        t->next=p;  
    }
 
   void show_first()
    {start->stu.showdata();
    }
    void show_all_data()
    {node *t; 
        cout<<"sem   roll no.   name    section\n";
        cout<<"---   ---- ---   ----    -------\n";
        for(t=start;!(t->next==0);t=t->next)
        t->stu.showonlydata();
        t->stu.showonlydata();
    }
   void delete_first()
    {node *t;
     t= start;
        start=start->next;
      delete(t);
    }
   void delete_last();
};
int main()
{record r1;
 int choice,x;
    loop:
        {cout<<"enter your choice\n1.add new student record at start\n2.delete first student's record\n3.show first student's record\n4.show whole record\n5.add new student record at last"<<endl;
    cin>>choice;
    switch(choice)
    {case 1:
      r1.add_first();
      cout<<"\n1.continue\n2.exit"<<endl;
      cin>>x;
      if(x==1)
            goto loop;
      if(x==2)
            return(0);
     case 2:
      r1.delete_first();
      cout<<"\n1.continue\n2.exit";
      cin>>x;
      if(x==1)
            goto loop;
      if(x==2)
            return(0);
     case 3:
      r1.show_first(); cout<<"\n1.continue\n2.exit";
      cin>>x;
      if(x==1)
            goto loop;
      if(x==2)
            return(0);
     case 4:
      r1.show_all_data();
      cout<<"\n1.continue\n2.exit";
      cin>>x;
      if(x==1)
            goto loop;
      if(x==2)
            return(0);
     case 5:
       r1.add_last();
      cout<<"\n1.continue\n2.exit";
      cin>>x;
      if(x==1)
            goto loop;
      if(x==2)
            return(0);      
  }  /*student s;
s.setdata();
    s.showdata();*/
    }
}
