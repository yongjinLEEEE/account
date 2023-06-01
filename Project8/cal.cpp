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

	void setter(int percent)
	{
		this->interrest = 1 + (float)percent/100;
		balance *= this->interrest;
	}

private:
	int balance;
	float interrest;
};
