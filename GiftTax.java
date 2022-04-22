
import java.sql.SQLOutput;
import java.util.Scanner;

public class GiftTax {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Value of gift?");
        double gift = scan.nextDouble();
        double tax;
        if (gift < 5000) {
            System.out.println("No tax!");
        } else if (gift <= 25000) {
            tax = 100 + (gift - 5000)*0.08;
            System.out.println("Tax: " + tax);
        } else if (gift <= 55000) {
            tax = 1700 + (gift - 25000)*.10;
            System.out.println("Tax: " + tax);
        } else if (gift <= 200000) {
            tax = 4700 + (gift - 55000)*.12;
            System.out.println("Tax: " + tax);
        } else if (gift <= 1000000) {
            tax = 22100 + (gift - 200000)*.15;
            System.out.println("Tax: " + tax);
        } else if (gift > 1000000) {
            tax = 142100 + (gift - 1000000)*.17;
            System.out.println("Tax: " + tax);
        }
    }
}
