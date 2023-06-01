class Account
{
public:
	explicit Account(int money)
		: balance(money)
	{
	}

	int getBalance()
	{
		return balance;
	}

	void deposit(int money)
	{
		balance += money;
	}

	void withdraw(int money)
	{
		balance -= money;
	}

	void bogli(int percent)
	{
		balance *= 1 + (float)percent / 100;
	}

private:
	int balance;
};
