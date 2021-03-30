@echo off
ECHO  ____   __    ___  __ _    ____   __   ____  ____  ____    ____   ___  __  ____  ____   __  ____  ____  _   
ECHO (  _ \ /  \  / __)(  / )  (  _ \ / _\ (  _ \(  __)(  _ \  / ___) / __)(  )/ ___)/ ___) /  \(  _ \/ ___)/ \  
ECHO  )   /(  O )( (__  )  (    ) __//    \ ) __/ ) _)  )   /  \___ \( (__  )( \___ \\___ \(  O ))   /\___ \\_/  
ECHO (__\_) \__/  \___)(__\_)  (__)  \_/\_/(__)  (____)(__\_)  (____/ \___)(__)(____/(____/ \__/(__\_)(____/(_)  
ECHO --------------------------------------------------------------------------------------------------------------------
SET /P input= Welcome! To start, type 'rock,' 'paper,' or 'scissors.'
IF "%input%"=="rock" (GOTO :rock)
IF "%input%"=="paper" (GOTO :paper)
IF "%input%"=="scissors" (GOTO :scissors) else (GOTO :fail)
GOTO :end

:rock
ECHO Paper! You lose.
GOTO :end

:paper
ECHO Scissors! You lose.
GOTO :end

:scissors
ECHO Rock! You lose.
GOTO :end

:fail
ECHO Invalid input! You cheated, you lose.
GOTO :end

:end
PAUSE