public class dataType{
    int age;
    String name;
    //method
    boolean equals(dataType obj)
    {
       if(this.age == obj.age && this.name ==obj.name)
       {
        return true;
       }
       return false;
    }
    public static void main(String[] str)
    {
        dataType obj1 = new dataType();
        dataType obj2 = new dataType();
        obj1.age = 19;
        obj1.name = "Arsh";
        obj2.age = 22;
        obj2.name = "Aditi Gedam";
        obj1 = obj2;
        if(obj1.equals(obj2))
        {
           System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }
       System.out.println(obj1.getClass());

        // final int a=10;
        // a++;
        // double d = 2.5*3.5;
        // a = b*(int)d;
        // float f = 10.5f;
        // boolean bool = (6<7);
        // sum();
        // if(bool)
        // {
        //   System.out.println(d);   
        // }
        // System.out.println(a); 

        //wrapper
        // int a = 5;
        // byte by = 5;
        // Integer i = Integer.valueOf(a);
        // Boolean b = Boolean.valueOf(true);
        // Character c = Character.valueOf('A');
        // Byte byt = Byte.valueOf(by);
        // Float f = Float.valueOf(2.3f);
        // Double d = Double.valueOf(2.3);
        // System.out.println(i +" " + b + " " + c); 
    }
}