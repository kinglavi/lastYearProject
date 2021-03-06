/*
 * TurnLeft.h
 *
 *  Created on: Aug 4, 2015
 *      Author: colman
 */

#ifndef TURNLEFT_H_
#define TURNLEFT_H_

#include "Behavior.h"

class TurnLeft : public Behavior{
public:
	TurnLeft(Robot* robot);
	bool startCond();
	bool stopCond();
	void action();
	virtual ~TurnLeft();
};

#endif /* TURNLEFT_H_ */
