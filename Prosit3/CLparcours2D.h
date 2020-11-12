
#include "CLparcours.h"
class CLparcours2D :
    public CLparcours
{
public:
	CLparcours2D();
	CLparcours2D(int);
	CLparcours2D(CLparcours2D const& copie);
	void message(void);
	void calculDistance(void);
};
