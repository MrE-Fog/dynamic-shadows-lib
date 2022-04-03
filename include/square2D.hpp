#ifndef __SQUARE2D_HPP__
#define __SQUARE2D_HPP__

#include "line2D.hpp"

namespace ds
{

class square2D
{
public:
    vec2f m_center;
    float m_radius;

private:
    std::vector<point2D> m_corners;

public:
    // Constructor
    square2D(vec2f center, float radius);

    /**
     * @brief Accessor for the squares top right corner.
     * 
     * @return const point2D& top right corner of the square.
     */
    const point2D & topRight() const;

    /**
     * @brief Accessor for the squares top left corner.
     * 
     * @return const point2D& top left corner of the square.
     */
    const point2D & topLeft() const;

    /**
     * @brief Accessor for the squares bottom left corner.
     * 
     * @return const point2D& bottom left corner of the square.
     */
    const point2D & bottomLeft() const;
    
    /**
     * @brief Accessor for the squares bottom right corner.
     * 
     * @return const point2D& bottom right corner of the square.
     */
    const point2D & bottomRight() const;

    /**
     * @brief Accessor for the squares corners.
     * 
     * @return const std::vector<point2D>& of corners. TL-> TR -> BR -> TL
     */
    const std::vector<point2D> & corners() const;
};

/**
 * @brief Overloaded << operator for square2D class.
 * 
 * @param out std::ostream out stream
 * @param sq const ds::square2D ref
 * @return std::ostream& out stream
 */
std::ostream & operator<<(std::ostream &out, const square2D &sq);


} // namespace ds

#endif