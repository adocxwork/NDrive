class BankAccount {
    String accountNumber;
    double balance;

    public BankAccount(String accountNumber, double balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    public void display() {
        System.out.println("Account: " + accountNumber + " Balance: $" + balance);
    }
}

class SavingsAccount extends BankAccount {
    double interestRate;

    public SavingsAccount(String accountNumber, double balance, double interestRate) {
        super(accountNumber, balance);
        this.interestRate = interestRate;
    }

    public void display() {
        super.display();
        System.out.println("Interest Rate: " + interestRate + "%");
    }

    public String getAccountDetails() {
        return super.accountNumber;
    }
}

public class Main {
    public static void main(String[] args) {
        BankAccount account = new BankAccount("123456789", 5000.00);
        account.display();

        System.out.println();

        SavingsAccount savingsAccount = new SavingsAccount("987654321", 10000.00, 5.0);
        savingsAccount.display();

        System.out.println("Account Number from SavingsAccount: " + savingsAccount.getAccountDetails());
    }
}
