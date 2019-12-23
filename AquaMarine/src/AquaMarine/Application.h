#pragma once

#include "Core.h"

namespace AquaMarine {
	class AQUAMARINE_API Application{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in Client.
	Application* CreateApplication();

}


