<?php
$choices = array('rock', 'paper', 'scissors');
$computer_choice = $choices[rand(0,2)];

echo "Choose rock, paper, or scissors: ";
$user_choice = strtolower(trim(fgets(STDIN)));

if ($user_choice == $computer_choice) {
    echo "It's a draw!\n";
} else if ($user_choice == 'rock' && $computer_choice == 'scissors' ||
           $user_choice == 'paper' && $computer_choice == 'rock' ||
           $user_choice == 'scissors' && $computer_choice == 'paper') {
    echo "Congratulations! You won! The computer chose $computer_choice.\n";
} else {
    echo "Sorry, you lost. The Computer chose $computer_choice.\n";
}
?>
