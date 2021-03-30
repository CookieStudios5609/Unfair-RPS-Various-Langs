import java.util.Scanner;
import java.awt.Toolkit;
public class RPS {
    public static void banner() {
        System.out.println(" ____  _____  ___  _  _      ____   __    ____  ____  ____      ___   ___  ____  ___  ___  _____  ____  ___ /\\");
        System.out.println("<  _ \\(  _  )/ __>( )/ )    (  _ \\ /__\\  (  _ \\( ___)(  _ \\    / __) / __>(_  _)/ __)/ __)(  _  )(  _ \\/ __))(");
        System.out.println(" )   / )<_>(( (__  )  (      )___//(__)\\  )___/ )__)  )   /    \\__ \\( (__  _)(_ \\__ \\\\__ \\ )(_)(  )   /\\__ \\/\\");
        System.out.println("<_>\\_>(_____)\\___>(_)\\_)    (__) (__)(__)(__)  (____)(_)\\_)    (___/ \\___>(____)(___/(___/(_____)(_)\\_)(___/()");
        System.out.println("--------------------------------------------------------------------------------------------------------------------");
    }
    public static void checker(String u) {
        Toolkit.getDefaultToolkit().beep();
        if (u.equals("rock")) {System.out.println("Paper! You lose.");}
        else if (u.equals("paper")) {System.out.println("Scissors! You lose.");}
        else if (u.equals("scissors")) {System.out.println("Rock! You lose.");}
        else {System.out.println("Invalid option! You cheated, you lose.");}
    }
    public static void main(String[] args) {
        banner();
        System.out.println("Welcome! To start, type 'rock,' 'paper,' or 'scissors.'");
        Scanner input = new Scanner(System.in);
        String u = input.nextLine(); 
        input.close();
        checker(u);
    }
}
