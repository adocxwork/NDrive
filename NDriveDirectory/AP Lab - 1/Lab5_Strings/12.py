def word_guessing_game():
    word_to_guess = "apple"
    word_length = len(word_to_guess)
    guessed_word = ['*' for i in range(word_length)]
    attempts_left = 6
    previous_guesses = []
    print(f"word is {''.join(guessed_word)} its length is {word_length}")
    while attempts_left > 0:
        print(f"\nYou have {attempts_left} attempts left")
        print(f"Previous guess: {''.join(previous_guesses)}")
        guess = input("Enter a char(lowercase): ").lower()
        if guess in previous_guesses:
            print("You've already guessed that character! Try again...")
            continue
        previous_guesses.append(guess)
        if guess in word_to_guess:
            print("Correct.")
            for i in range(word_length):
                if word_to_guess[i] == guess:
                    guessed_word[i] = guess
        else:
            print("Try again...")
            attempts_left -= 1
        print(f"word is {''.join(guessed_word)}")
        if ''.join(guessed_word) == word_to_guess:
            print("Congratulations! You got the word")
            break
    else:
        print(f"Sorry, you've run out of attempts! The word was '{word_to_guess}'.")
word_guessing_game()