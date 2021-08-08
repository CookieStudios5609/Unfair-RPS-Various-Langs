#include<stdio.h>
#include<string.h>

int main() {
    printf(" ____   __    ___  __ _    ____   __   ____  ____  ____    ____   ___  __  ____  ____   __  ____  ____  _   \n");
    printf("(  _ \\ /  \\  / __)(  / )  (  _ \\ / _\\ (  _ \\(  __)(  _ \\  / ___) / __)(  )/ ___)/ ___) /  \\(  _ \\/ ___)/ \\  \n");
    printf(" )   /(  O )( (__  )  (    ) __//    \\ ) __/ ) _)  )   /  \\___ \\( (__  )( \\___ \\\\___ \\(  O ))   /\\___ \\\\_/  \n");
    printf("(__\\_) \\__/  \\___)(__\\_)  (__)  \\_/\\_/(__)  (____)(__\\_)  (____/ \\___)(__)(____/(____/ \\__/(__\\_)(____/(_)  \n");
    printf("--------------------------------------------------------------------------------------------------------------------\n");
    printf("Welcome! To begin, type 'rock,' 'paper,' or 'scissors.'\n");
    char input[8];
    // I have no idea how to use C, or any of these languages, well. Unfair RPS is the equivalent of a "Hello world" for me,
    // I just like knowing the basics of printing and if statements in a few different langs. 
    // I have a feeling the statements below are bad code, and if they are, PLEASE inform me
    char rock[8] = "rock";
    char paper[8] = "paper";
    char scissors[8] = "scissors";
    // I hate this, and I hate strcmp
    scanf("%s", input);
    if (strcmp(rock, input) == 0) {printf("Paper! You lose.");}
    else if (strcmp(paper, input) == 0) {printf("Scissors! you lose.");}
    else if (strcmp(scissors, input) == 0) {printf("Rock! You lose.");}
    else {printf("Invalid input! You cheated, you lose.");}
}