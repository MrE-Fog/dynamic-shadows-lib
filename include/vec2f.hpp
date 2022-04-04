#ifndef __VEC2F_HPP__
#define __VEC2F_HPP__

#include <iostream>
#include <vector>

#include "math.hpp"

namespace ds {

class vec2f {

public:
    float x;
    float y;

    vec2f() : x(0.f), y(0.f) {}
    vec2f(float x_value, float y_value) : x(x_value), y(y_value) {}
};

/* ### Aliases ### */
using point2D = vec2f;

/* ### Vector Functions ### */

/**
 * @brief Overload of << operator for vec2f class to allow for printing it to std::cout.
 * 
 * @param out std::ostream reference (&)
 * @param v const vec2f ref
 * @return std::ostream& out
 */
std::ostream & operator<<(std::ostream &out, const vec2f &v);

/**
 * @brief Overload of == operator for vec2f class to allow equal checks.
 * 
 * @param left const vec2f ref
 * @param right const vec2f ref
 * @return true if left and right are equal
 * @return false if left and right is not equal
 */
bool operator==(const vec2f &left, const vec2f &right);

/**
 * @brief Overload of + operator for vec2f class to allow for vector addition.
 * 
 * @param left const vec2f ref
 * @param right const vec2f ref
 * @return vec2f sum of vectors left and right
 */
vec2f operator+(const vec2f &left, const vec2f &right);

/**
 * @brief Overload of - operator for vec2f class to allow for vector subtraction.
 * 
 * @param left const vec2f ref
 * @param right const vec2f ref
 * @return vec2f difference between vectors left and right
 */
vec2f operator-(const vec2f &left, const vec2f &right);

/**
 * @brief Overload of * operator for vec2f class to allow for scalar multiplication.
 * 
 * @param vec const vec2f ref
 * @param scalar float const ref
 * @return vec2f scalar product of vec
 */
vec2f operator*(const vec2f &vec, const float &scalar);

/**
 * @brief Overload of * operator for vec2f class to allow for scalar multiplication with a vector.
 * 
 * @param scalar float const ref
 * @param vec const vec2f ref
 * @return vec2f product vector
 */
vec2f operator*(const float &scalar, const vec2f &vec);

/**
 * @brief Overload of / operator for vec2f class to allow for scalar division. Division by 0 results in runtime errro.
 * 
 * @param vec const vec2f ref
 * @param scalar float const ref
 * @return vec2f quotient vector
 */
vec2f operator/(const vec2f &vec, const float &scalar);

/**
 * @brief Calculates the dot product of two vectors.
 * 
 * @param left const vec2f ref
 * @param right const vec2f ref
 * @return float dot product
 */
float dot(const vec2f &left, const vec2f &right);

/**
 * @brief Calculates the magnitude of a vector (Relative to [0 0]).
 * 
 * @param v const vec2f ref
 * @return float the vectors magnitude
 */
float magnitude(const vec2f &v);

/**
 * @brief Calculate the normal of a vector (Relative to [0 0]).
 * 
 * @param v const vec2f ref
 * @return vec2f the vectors normal
 */
vec2f normal(const vec2f &v);

/**
 * @brief Calculates the unit vector of a vec2f.
 * 
 * @param v const vec2f ref
 * @return vec2f unit vector
 */
vec2f unitVector(const vec2f &v);

/**
 * @brief Flips the vectors x-value.
 * 
 * @param v const vec2f ref
 * @return vec2f flipped vector
 */
vec2f flipX(const vec2f &v);

/**
 * @brief Flips the vectors y-value.
 * 
 * @param v const vec2f ref
 * @return vec2f flipped vector
 */
vec2f flipY(const vec2f &v);

/**
 * @brief Flips the vector around both x and y-axis.
 * 
 * @param v const vec2f ref
 * @return vec2f flipped vector
 */
vec2f flip(const vec2f &v);

/* ### 2D Space Functions ### */

/**
 * @brief Calculates the distance between to point2D (length of vec2f).
 * 
 * @param start const point2D (vec2f alias) ref
 * @param end const point2D (vec2f alias) ref
 * @return float magnitude (Distance between them in a 2D plane).
 */
float distance(const point2D &start, const point2D &end);

/**
 * @brief Flips a vectors x-value in 2D space. (In relation to the starting point).
 * 
 * @param start const point2D ref
 * @param end const point2D ref
 * @return point2D flipped end point
 */
point2D flipX(const point2D &start, const point2D &end);

/**
 * @brief Flips a vectors y-value in 2D space. (In relation to the starting point).
 * 
 * @param start const point2D ref
 * @param end const point2D ref
 * @return point2D flipped end point
 */
point2D flipY(const point2D &start, const point2D &end);

/**
 * @brief Flips a vector in 2D space. (In relation to the starting point).
 * 
 * @param start const point2D ref
 * @param end const point2D ref
 * @return point2D flipped end point
 */
point2D flip(const point2D &start, const point2D &end);


} // End of namespace ds


#endif