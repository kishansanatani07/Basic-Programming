#getter & setter decorator


class BankAccount:

    def __init__(self, balance):
        self._balance = balance

    # Getter: Displays the balance cleanly
    @property
    def balance(self):
        return f"${self._balance}"

    # Setter: Blocks negative numbers before saving
    @balance.setter
    def balance(self, amount):
        if amount < 0:
            print("Error: Balance cannot be negative.")
        else:
            self._balance = amount


acc = BankAccount(500)
print(acc.balance)  # Output: $500

acc.balance = 1200  # Valid update
print(acc.balance)  # Output: $1200

acc.balance = -50  # Output: Error: Balance cannot be negative.
