#pragma once

#ifdef AQMR_PLATFORM_WINDOWS

extern AquaMarine::Application* AquaMarine::CreateApplication();

int main(int argc, char** argv) { 
	printf("AquaMarine Engine");
	auto app = AquaMarine::CreateApplication();
	app->Run();
	delete app;

	return 0;
}

#endif
