class BankAccount:
    def __init__(self, account_number, account_holder, initial_balance=0):
        self.account_number = account_number
        self.account_holder = account_holder
        self.balance = initial_balance

    def deposit(self, amount):
        self.balance += amount
        print(f"Deposited ${amount} to account {self.account_number}")

    def withdraw(self, amount):
        if amount > self.balance:
            print("Insufficient balance.")
        else:
            self.balance -= amount
            print(f"Withdrew ${amount} from account {self.account_number}.")

    def balance_enquiry(self):
        print(f"Account {self.account_number} balance: ${self.balance:.2f}")

a = BankAccount("12345678", "Aditya", 500)
a.deposit(200)
a.withdraw(100)
a.balance_enquiry()
a.withdraw(700)
