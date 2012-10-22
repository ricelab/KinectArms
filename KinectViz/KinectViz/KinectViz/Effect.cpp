#include "Effect.h"


namespace KinectViz {

Effect::Effect() :
	enabled(false),
	minHeight(0),
	maxHeight(std::numeric_limits<int>::max())
{
}

Effect::~Effect() {
}

}