#ifndef WELL_H
#define WELL_H
class Well
{
	public:
		Well(r, d);
		float volume(radius, depth);
		float remaining(radius, fill);
		int rain(feet);
		int drink(gallon);
	protected:

	private:
		int radius;
		int depth;
		float fill;
};

#endif
