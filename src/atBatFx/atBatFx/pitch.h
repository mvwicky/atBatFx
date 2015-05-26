#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

enum type {FOUR_SEAM_FB, TWO_SEAM_FB, CUTTER, SPLITTER, FORKBALL, SINKER, SLIDER, CURVEBALL, KNUCKLE_CURVE, EEPHUS, CHANGEUP, SCREWBALL, KNUCKLEBALL, UNKNOWN};
enum des {BALL, CALLED_STRIKE, SWINGING_STRIKE, FOUL, IN_PLAY_OUTS, IN_PLAY_NO_OUTS, IN_PLAY_RUNS, NO_PITCH};

class pitch {
	float velocity, spin; 
	sf::Vector2f p_break, loc, adjLoc;
	type p_type;
	des p_des;
	sf::CircleShape p_graphic;
public:
	pitch(float, float, float, float ,float, float, type, des);
	pitch(void);
	~pitch(void);
	sf::CircleShape getPitch();
	sf::Vector2f getLoc();
};

