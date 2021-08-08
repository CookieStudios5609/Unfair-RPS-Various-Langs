console.log(" ____   __    ___  __ _    ____   __   ____  ____  ____    ____   ___  __  ____  ____   __  ____  ____  _   \n\
(  _ \\ /  \\  / __)(  / )  (  _ \\ / _\\ (  _ \\(  __)(  _ \\  / ___) / __)(  )/ ___)/ ___) /  \\(  _ \\/ ___)/ \\  \n\
 )   /(  O )( (__  )  (    ) __//    \\ ) __/ ) _)  )   /  \\___ \\( (__  )( \\___ \\\\___ \\(  O ))   /\\___ \\\\_/  \n\
(__\\_) \\__/  \\___)(__\\_)  (__)  \\_/\\_/(__)  (____)(__\\_)  (____/ \\___)(__)(____/(____/ \\__/(__\\_)(____/(_)  \n\
--------------------------------------------------------------------------------------------------------------------");
// This feels wrong.
const linereader = require('readline');

const user_input_gatherer_interface = linereader.createInterface({
  input: process.stdin,
  output: process.stdout
});

user_input_gatherer_interface.question("Welcome! To start, type 'rock,' 'paper,' or 'scissors.'\n", (user_input) => {
    if (user_input === "rock") {console.log("Paper! You lose.")}
    else if (user_input === "paper") {console.log("Scissors! You lose.")}
    else if (user_input === "scissors") {console.log("Rock! You lose.")}
    else {console.log("Invalid input! You cheated, you lose.")}
    user_input_gatherer_interface.close();
    process.exit();
})