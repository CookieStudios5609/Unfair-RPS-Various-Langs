using System;
namespace Name
{
    class RPS
{
    public static void Main(string[] args) {
        Console.WriteLine(@"  ____   __    ___  __ _    ____   __   ____  ____  ____    ____   ___  __  ____  ____   __  ____  ____  _   
 (  _ \ /  \  / __)(  / )  (  _ \ / _\ (  _ \(  __)(  _ \  / ___) / __)(  )/ ___)/ ___) /  \(  _ \/ ___)/ \  
  )   /(  O )( (__  )  (    ) __//    \ ) __/ ) _)  )   /  \___ \( (__  )( \___ \\___ \(  O ))   /\___ \\_/  
 (__\_) \__/  \___)(__\_)  (__)  \_/\_/(__)  (____)(__\_)  (____/ \___)(__)(____/(____/ \__/(__\_)(____/(_)  
 --------------------------------------------------------------------------------------------------------------------");
        Console.WriteLine("Welcome! To begin, type 'rock,' 'paper,' or 'scissors.'");
        string input = Console.ReadLine();
        if (input == "rock") {Console.WriteLine("Paper! You lose.");}
        else if (input == "paper") {Console.WriteLine("Scissors! You lose.");}
        else if (input == "scissors") {Console.WriteLine("Rock! You lose.");}
        else {Console.WriteLine("Invalid input! You cheated, you lose.");}
    }
}
}
