#include "crow.h"
#include <iostream>
#include "sum.h"


int main(){
	crow::SimpleApp app;

	CROW_ROUTE(app, "/<double>/<double>")([](const crow::request& request, double a, double b){
		std::cout << sum(a, b) << std::endl;
		return "0";
	});

	app.port(5004).run();

	return 0;
}
