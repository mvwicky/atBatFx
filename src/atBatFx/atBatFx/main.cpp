// At Bat Fx

#include <iostream>

#include "scrape.h"
#include "pitch.h"

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"

using namespace std;

sf::Vector2f adjLoc(sf::Vector2f, float, float);

int main(){
	unsigned int w_width(600), w_height(600); // window width and height
	float z_width(150), z_height(200);
	sf::Color grey(200, 200, 200);
	
	sf::RenderWindow window(sf::VideoMode(w_width, w_height), "At Bat F/x");
	
	sf::RectangleShape strikeZone(sf::Vector2f(z_width, z_height));
	strikeZone.setFillColor(grey);
	strikeZone.setOrigin(sf::Vector2f(z_width/2, z_height/2));
	strikeZone.setPosition((float)w_width/2, (float)w_height/2);

	pitch HJR_AP[5] = {pitch(90.8f, 109.87f, 163.19f, 10, 10, 2553.674f, TWO_SEAM_FB, BALL),
					   pitch(80.0f, 96.14f, 162.33f, 10, 10, 1781.791f, CHANGEUP, SWINGING_STRIKE),
					   pitch(90.7f, 73.82f, 165.78f, 10, 10, 3128.245f, TWO_SEAM_FB, CALLED_STRIKE),
					   pitch(76.4f, 112.45f, 208.09f, 10, 10, 1125.597f, CURVEBALL, BALL),
					   pitch(79.3f, 78.11f, 167.51f, 10, 10, 1673.452f, CHANGEUP, SWINGING_STRIKE)};


	while (window.isOpen()){
		sf::Event event;
		while (window.pollEvent(event)){
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		for (int i = 0; i < 5; i++)
			window.draw(HJR_AP[i].getPitch());

		window.draw(strikeZone);
		window.display();

	}
}

sf::Vector2f adjLoc(sf::Vector2f oLoc, float width=600.f, float height=600.f){
	return sf::Vector2f(0,0);
}