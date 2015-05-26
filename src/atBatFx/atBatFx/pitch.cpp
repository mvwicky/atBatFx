#include "pitch.h"


pitch::pitch(float velo, float xl, float yl, float xb,float yb, float s, type t, des d){
	velocity = velo;
	loc = sf::Vector2f(xl, yl);
	p_break = sf::Vector2f(xb, yb);
	spin = s;
	p_type = t;
	p_des = d;

	p_graphic.setRadius(4);
	p_graphic.setOrigin(sf::Vector2f(2, 2));
	p_graphic.setPosition(loc);
	switch (p_des)
	{
	case BALL:
		p_graphic.setFillColor(sf::Color::Green);
		break;
	case CALLED_STRIKE:
		p_graphic.setFillColor(sf::Color::Red);
		break;
	case SWINGING_STRIKE:
		p_graphic.setFillColor(sf::Color::Red);
		break;
	case FOUL:
		p_graphic.setFillColor(sf::Color::Red);
		break;
	case IN_PLAY_OUTS:
		p_graphic.setFillColor(sf::Color::Blue);
		break;
	case IN_PLAY_NO_OUTS:
		p_graphic.setFillColor(sf::Color::Blue);
		break;
	case IN_PLAY_RUNS:
		p_graphic.setFillColor(sf::Color::Blue);
		break;
	case NO_PITCH:
		break;
	default:
		break;
	}

}

pitch::pitch(void){

}


pitch::~pitch(void)
{
}

sf::CircleShape pitch::getPitch(){
	return p_graphic;
}

sf::Vector2f pitch::getLoc(){
	return loc;
}