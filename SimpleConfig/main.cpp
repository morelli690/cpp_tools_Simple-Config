#include "config.h"
bool bhop = false;
void set_config(Config *config) {
	
	config->open();
	config->set<bool>("BHOP", bhop);
	//Do all your stuff here
	config->close();
}

void read_config(Config* config) {
	if (config->get<bool>("BHOP"))
		std::cout << "Bhop activated" << std::endl;
}

int main() {

	Config* r6config = new Config("Clout.cfg");
	//set_config(r6config); //Do that if user presses "Set config"
	read_config(r6config); //On "Load config"
	system("pause");
}