#pragma once
#include "ElectricElement.h"

//
//The Resistance element is made of the nodes it connects to, the inheritance
//from the ElectricElement and its form of stamp.
//

class Resistance : public ElectricElement {

public:
	Resistance(double Value, int Node1, int Node2);
	void stamp(Circuit& circuit) override;
	void stampRightHand(Circuit& circuit) override;

private:
	int nodes[2];
};
