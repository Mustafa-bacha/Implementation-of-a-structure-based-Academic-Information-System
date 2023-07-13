#include <iostream>
#include <string>
using namespace std;
struct course{
    int ID;
    string coursename;
    string teacher;
    int fee;
    int credithrs;
    int used=0;
    
    void printall()
    {
    cout<<"ID:"<<ID<<endl;
    cout<<"Coursename:"<<coursename<<endl;
    cout<<"Teacher:"<<teacher<<endl;
    cout<<"Fee:"<<fee<<endl;
    cout<<"Credithrs:"<<credithrs<<endl;
}
};

struct courselist
{
    course courselist[5];
    int course_count=0;
    void printall()
    {
        cout<<"List of course added:"<<endl;
        for (int i = 0; i < 5; i++) 
        {
            if (courselist[i].used == 1)
            {
                cout << "Index " << i + 1 << " :-" << endl<<endl;
                courselist[i].printall();
                cout <<endl<<endl;
            }
            
        }
    }
    void newcourse()
    {
           {
        int i;
        if ( course_count >= 5)
        {
            cout<<"Maximum number of course have been entered."<<endl;
        }
        else
        {

            cout<<"Choose an index to input this course"<<endl;
            cin>>i;
            if (i >= 5 || i < 0)
            {
                cout<<"You can only choose from index 0 to 4"<<endl;
            }
            else
            {
                if (courselist[i].used == 0)
                {
                    cout<<"Enter course name"<<endl;
                    cin>>courselist[i].coursename;
                    cout<<"Enter course ID"<<endl;
                    cin>>courselist[i].ID;
                    cout<<"Enter teacher name"<<endl;
                    cin>>courselist[i].teacher;
                    cout<<"Enter course fee"<<endl;
                    cin>>courselist[i].fee;
                    cout<<"Enter credit hours"<<endl;
                    cin>>courselist[i].credithrs;
                    courselist[i].used = 1;
                    course_count++;
                }
                else
                    cout<<"This index is already in use"<<endl;
            }
                
        }
            }
    }
    void ascending(){
        int temp;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5-i-1; j++)
            {
                if (courselist[j].ID > courselist[j+1].ID)
                {
                    course temp = courselist[j];
                    courselist[j] = courselist[j + 1];
                    courselist[j + 1] = temp;
                }
            }
        }
        cout<<"\tAll course have been sorted in ascending order"<<endl<<endl;
    }
    void descending(){
        int temp;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5-i-1; j++)
            {
                if (courselist[j].ID < courselist[j+1].ID)
                {
                    course temp = courselist[j];
                    courselist[j] = courselist[j + 1];
                    courselist[j + 1] = temp;
                }
            }
        }
        cout<<"\tAll course have been sorted in descending order"<<endl<<endl;
    }
    void deleteall()
    {
       for (int i = 0; i < 5; i++)
        {
            courselist[i].used = 0;
            course_count--;
        }
        cout<<"\tAll course have been deleted"<<endl<<endl;
    }
    
 };
struct student
{
    int id;
    string stdname;
    int used = 0;
    int rollno;
    void printall()
    {
        cout<<id<<endl;
        cout<<stdname<<endl;
        cout<<rollno;
    }
};
struct studentlist
{
  student stdlist[5]; 
  int student_count = 0;
  void printall()
  {
      cout<<"List of students added:"<<endl;
        for (int i = 0; i < 5; i++) 
        {
            if (stdlist[i].used == 1)
            {
                cout << "Index " << i + 1 << " :-" << endl<<endl;
                stdlist[i].printall();
                cout <<endl<<endl;
            }
            
        }
  }
  void add()
  {
      int i;
        if ( student_count >= 5)
        {
            cout<<"Maximum number of students have been entered."<<endl;
        }
        else
        {
            cout<<"Choose an index to input this student"<<endl;
            cin>>i;
            if (i >= 5 || i < 0)
            {
                cout<<"You can only choose from index 0 to 4"<<endl;
            }
            else if (stdlist[i].used == 0)
            {
                cout<<"Enter student ID"<<endl;
                cin>>stdlist[i].id;
                cout<<"Enter student name"<<endl;
                cin>>stdlist[i].stdname;
                cout<<"Enter roll no"<<endl;
                cin>>stdlist[i].rollno;
                stdlist[i].used = 1;
                student_count++;
            }
            else
                cout<<"This index is already in use"<<endl;
        }

  }
  void remove(){
      for (int i = 0; i < 5; i++)
        {
            stdlist[i].used = 0;
            student_count--;
        }
        cout<<"\tAll student information has been deleted"<<endl<<endl;
  }
};

int main() {
    courselist list;
    studentlist std;
    int n;
    while(true)
    {
   cout<<" *************************************"<<endl;
   cout<<"*             Main Menu               *"<<endl;
   cout<<"*                                     *"<<endl;
   cout<<"* 1.  Add New Student                 *"<<endl;
   cout<<"* 2.  Delete Existing Student         *"<<endl;
   cout<<"* 3.  Show all Students               *"<<endl;
   cout<<"* 4.  Add New Course                  *"<<endl;
   cout<<"* 5.  Delete Existing Course          *"<<endl;
   cout<<"* 6.  Show Particular Course          *"<<endl;
   cout<<"* 7.  Show all Course                 *"<<endl;
   cout<<"* 8.  Sort Course in Ascending Order  *"<<endl;
   cout<<"* 9.  Sort Course in Descending Order *"<<endl;
   cout<<"* 10. Exit                            *"<<endl;
   cout<<" *************************************"<<endl;
   cout<<"Choose any of the following Function:";
   cin>>n;
  switch(n){
      case 1:
      {
           std.add();
           break;
      }
      case 2:
       {
           std.remove();
           break;
       }   
      case 3:
      {
          std.printall();
          break;
      }
       
      case 4:
      {
          list.newcourse();
          break;
      }
       
      case 5:
       {
           list.deleteall();
           break;
       }
      case 6:
       {
            int i;
            cout<<"Enter the index for the paricular course"<<endl;
            cin>>i;
            list.courselist[i].printall();
           break;
       }
      case 7:
       {
           std.printall();
           break;
       }
      case 8:
       {
           list.ascending();
           break;
       }
      case 9:
       {
            list.descending();
           break;
       }
      case 10:
      cout<<"Thanku for using ";
      return 0;
      default:
      cout<<"This is invalid";
  }
}
    return 0;
}