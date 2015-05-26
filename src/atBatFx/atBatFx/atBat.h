#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

#include "pitch.h"

enum result {IN_PLAY_OUTS, 
			 SINGLE,
			 DOUBLE,
			 TRIPLE,
			 HOME_RUN, 
			 SWINGING_STRIKEOUT,	
			 LOOKING_STRIKEOUT, 
			 BASE_ON_BALLS, 
			 HIT_BY_PITCH};

class atBat
{
public:
	atBat(void);
	atBat(int, int, result);
	~atBat(void);
};

