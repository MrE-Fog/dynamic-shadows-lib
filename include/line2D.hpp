#ifndef __LINE2D_HPP__
#define __LINE2D_HPP__

#include "vec2f.hpp"

namespace ds
{

/**
 * @brief Class for representing 2D vectors (with float values).
 * 
 */
class line2D
{
public:
    point2D start; // (point2D = vec2f)
    point2D end;

    line2D() : start(point2D(0, 0)), end(point2D(0, 0)) {}
    line2D(point2D s, point2D e) : start(s), end(e) {}

}; // class line2D

/**
 * @brief Overload of operator<< for line2D class to allow to print it to std::cout.
 * 
 * @param out const osteam ref
 * @param l const line2D ref
 * @return std::ostream& output stream
 */
std::ostream & operator<<(std::ostream &out, const line2D &l);

/**
 * @brief Overloaded operator== for line2D class to allow eq comparison between instances.
 * 
 * @param left const line2D ref
 * @param right const line2D ref
 * @return true if the line2D instances is equal
 * @return false if the line2D instances are not equal
 */
bool operator==(const line2D &left, const line2D &right);


} // ### END OF NAMESPACE DS ###

#endif