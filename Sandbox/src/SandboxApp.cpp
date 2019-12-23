#include <AquaMarine.h>

class Sandbox : public AquaMarine::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}

};


AquaMarine::Application* AquaMarine::CreateApplication() {
	return new Sandbox();
}