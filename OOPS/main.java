class Person{
    public String firstName;
    public int id;

    Person(String firstName, int id){
        this.firstName= firstName;
        this.id= id;
    }
}
class Student extends Person{
    int testscore;
    Student(String firstName,int id,int testscore){
        super(firstName, id);
        this.testscore= testscore;
    }
    void display(){
        System.out.println("name " +  firstName);
        System.out.println("id "+  id);
         System.out.println("testcore "+  testscore);
    }
}
public class main{
    public static void main(String[] args) {
        Student s1= new Student("Aradhya",101,71);
        s1.display();
    }
}