#ifndef OOP_LAB5_HEXAGON_H
#define OOP_LAB5_HEXAGON_H

#include "point.h"
#include <cmath>

template <class T>
class Hexagon {
public:
	point<T> A, B, C, D, E, F;

	explicit Hexagon<T>(std::istream& is) {
		is >> A >> B >> C >> D >> E >> F;
	}

	Hexagon<T>() = default;

	double Area() {
		return (0.5 * abs(A.x * B.y + B.x * C.y + C.x * D.y + D.x * E.y + E.x * F.y + F.x * A.y
			- B.x * A.y - C.x * B.y - D.x * C.y - E.x * D.y - F.x * E.y - A.x * F.y));
	}

	void Print(std::ostream& os) {
		os << A << " " << B << " " << C << " " << D << " " << E << " " << F << std::endl;
	}

	void operator<< (std::ostream& os) {
		os << A << " " << B << " " << C << " " << D << " " << E << " " << F;
	}
};

#endif