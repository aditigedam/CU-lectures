// import java.util.*;

class Student 
{
  // data members
  int roll = 111;
  String name;
  String department;
  String college;

  // methods
    Student()
    {
        this.department = "CSE";
    }
    public static void main(String[] args)
    {
       // create objects
       Student s1 = new Student();
       java.util.ArrayList a = ;
    //    s1.roll = 328;
    //    s1.name = "Aditi Gedam";
    //    s1.department = "CSE";
    //    Student s2 = new Student();
    //    s2.roll = 112;
    //    s2.name = "Aman";
    //    s2.department = "CSE";

       //print
       System.out.print("Name: " + s1.name + "\n"+
       "Roll: " + s1.roll + "\n" +
       "Department: " + s1.department + "\n");

    //  System.out.print(new Student().roll);

    }
}