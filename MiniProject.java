import java.util.Scanner;
import java.lang.Math;

public class MiniProject{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int mynumber= (int)(Math.random()*100);
        int usernumber=0;
        do{
            System.out.println("Guess My Number: ");
            usernumber= sc.nextInt();
            if(usernumber==mynumber){
                System.out.println("YAAY.... YOU HAVE CORRECTLY GUESSED MY NUMBER!");
                      break;
                }
              else if(usernumber<mynumber){
                  System.out.println("Your Number is way smaller, try again: ");
              }
              else{
              System.out.println("Your Number is way larger, try again: ");
              }
        }
        while(usernumber>=0);
        System.out.println("My Number Was: ");
        System.out.println(mynumber);
      }
}