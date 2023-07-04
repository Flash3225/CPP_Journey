import java.util.Scanner;
import java.util.Arrays;

public class CBSEPercentage {
    public static void main(String args[]){
        System.out.println("Enter Your Marks: ");
    Scanner sc= new Scanner(System.in);
    int TotalMarks=0;
    byte[] SubjectMarks=new byte[5];

    for(int i=0; i <5 ; i++){
        System.out.print("Marks in Subject");
        System.out.println(i);
        SubjectMarks [i]= sc.nextByte(); 
        TotalMarks += SubjectMarks[i];
    }
    double Percentage = (double)TotalMarks/5;
    System.out.print("Your percentage in CBSE Boards is: ");
    System.out.print(Percentage);
    System.out.println("%");

    }
    
}
