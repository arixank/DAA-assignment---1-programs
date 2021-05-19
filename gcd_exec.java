
import java.util.Scanner;

public class gcd_exec {
    public static void main(String[] args) {
        // for clearing console
        System.out.print("\033[H\033[2J");
        System.out.flush();

        System.out.println(" Program to find GCD \n");
        Scanner input = new Scanner(System.in);
        System.out.print(" \nEnter first number to find GCD: ");
        int number1 = Integer.parseInt(input.nextLine());
        System.out.print("Enter Second number to find GCD: ");
        int number2 = Integer.parseInt(input.nextLine());
        System.out.println("GCD of two numbers " + number1 + " and " + number2 + " is: " + find_GCD(number1 , number2));
        input.close();
    }

    private static int find_GCD(int number1, int number2) {
        
        if(number2 == 0){
            return number1;
        }
        return find_GCD(number2, number1 % number2);
    }
}
