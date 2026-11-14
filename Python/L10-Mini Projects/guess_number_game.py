import random #module that geneate a random thing


class GuessGame:

    def __init__(self, low=1, high=100):
        self.low = low
        self.high = high
        self.target = random.randint(low, high)# fnctn of random
        self.attempts = 0

    def check_guess(self, guess):
        self.attempts += 1
        if guess < self.target:
            return "Too low! Try again."
        elif guess > self.target:
            return "Too high! Try again."
        else:
            return f"Correct! You guessed it in {self.attempts} attempts."

    def play(self):
        print(f"Guess a number between {self.low} and {self.high}")
        while True:
            user_input = input("Enter your guess (or 'q' to quit): ")
            if user_input.lower() == "q":
                print(f"Game over! The number was {self.target}.")
                break
            if not user_input.isdigit(): # .isdigit() Checks if all characters are numbers (0–9).         .isalpha() Checks if all characters are letters (a–z).        .isalnum() Checks if all characters are letters or numbers.        .isspace() Checks if all characters are spaces.
                print("Please enter a valid number.")
                continue
            result = self.check_guess(int(user_input))
            print(result)
            if "Correct!" in result:
                break


game = GuessGame()
game.play()
