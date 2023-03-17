#pragma once
#include "Connection.h"
#include <vector>
#include <string>

class Proxy : public Subject
{
private:
	Connection* connection;
	vector<string> restricted = { "Google Chrome", "YouTube", "ChatGPT" };

	bool checkAccess(string website) const
	{
		for (auto elem : restricted)
		{
			if (elem == website)
				return false;
		}

		return true;
	}

	void logAccess() const
	{
		cout << "Proxy: logging the time of request." << endl;
	}

public:
	Proxy(Connection* _connection) :
		connection(new Connection(*_connection))
	{}

	~Proxy()
	{
		delete connection;
	}

	void request(string website) const override
	{
		if (this->checkAccess(website))
		{
			this->connection->request(website);
			this->logAccess();
		}
		else
		{
			cout << "Connection to " << website << " was restricted by proxy." << endl;
		}
	}
};