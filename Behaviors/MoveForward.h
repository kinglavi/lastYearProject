/*
 * MoveForward.h
 *
 *  Created on: May 26, 2015
 *      Author: colman
 */

#ifndef MOVEFORWARD_H_
#define MOVEFORWARD_H_

#include "Behavior.h"

class MoveForward : public Behavior {
public:
	MoveForward(Robot *robot);
	virtual bool startCond();
	virtual bool stopCond();
	virtual void action();
};

#endif /* MOVEFORWARD_H_ */
