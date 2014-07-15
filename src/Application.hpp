#pragma once

#include <gui/core/Base.hpp>
#include <gui/gtk/Gtk.hpp>
#include <core/Core.hpp>
#include <memory>

class Application;

typedef std::shared_ptr<Application> app_ptr;

class Application
{
private:
	static app_ptr m_app;
	
	// Private Member Functions & Variables 
	core_ptr m_core;
	gui_ptr m_gui;

public:
	Application();
	static app_ptr getSingleton();

	// Getters
	core_ptr &getCore();

	// Public Member Functions & Variables
	int run(int argc, char **argv);
};

