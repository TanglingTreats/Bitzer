#include <Bitzer.h>

class Sandbox : public Bitzer::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Bitzer::Application* Bitzer::CreateApplication()
{
	return new Sandbox();
}