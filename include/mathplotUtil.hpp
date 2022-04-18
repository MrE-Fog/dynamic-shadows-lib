#ifndef __MATHPLOTCPP_UTIL_HPP__
#define __MATHPLOTCPP_UTIL_HPP__

#include "matplotlibcpp.h"
namespace plt = matplotlibcpp;

#include "math.hpp"
#include "vec2f.hpp"
#include "line2D.hpp"
#include "square2D.hpp"
#include "triangle2D.hpp"
#include "evenShape2D.hpp"

/**
 * @brief Overloaded plot for point2D (vec2f) class.
 * 
 * @param p const point2D ref
 * @param format std::string format string <marker><line><color>. Examle: "o--r" for red dashed line with o markers at points.
 */
void plot(const ds::point2D &p, std::string format)
{
    std::vector<float> x = {p.x};
    std::vector<float> y = {p.y};

    plt::plot(x, y, format);
}

/**
 * @brief Overloaded plot for point2D (vec2f) class. Takes a title for the legend.
 * 
 * @param p const point2D ref
 * @param format std::string format string <marker><line><color>. Examle: "o--r" for red dashed line with o markers at points.
 * @param title std::string legend title
 */
void plot(const ds::point2D &p, std::string format, std::string title)
{
    std::vector<float> x = {p.x};
    std::vector<float> y = {p.y};

    plt::named_plot(title, x, y, format);
}

/**
 * @brief Overloaded plot for line2D class.
 * 
 * @param l const ds::line2D ref
 * @param format std::string format string <marker><line><color>. Examle: "o--r" for red dashed line with o markers at points.
 */
void plot(const ds::line2D &l, std::string format)
{
    std::vector<float> x = {
        l.start.x,
        l.end.x
    };

    std::vector<float> y = {
        l.start.y,
        l.end.y
    };

    plt::plot(x, y, format);
}

/**
 * @brief Overloaded plot for line2D class. Takes a title for the plot legend.
 * 
 * @param l const ds::line2D ref
 * @param format std::string format string <marker><line><color>. Examle: "o--r" for red dashed line with o markers at points.
 * @param title std::string legend title
 */
void plot(const ds::line2D &l, std::string format, std::string title)
{
    std::vector<float> x = {
        l.start.x,
        l.end.x
    };

    std::vector<float> y = {
        l.start.y,
        l.end.y
    };

    plt::named_plot(title, x, y, format);
}

/**
 * @brief Overloaded plot for square2D class.
 * 
 * @param sq const ds::square2D ref
 * @param format std::string format string <marker><line><color>. Examle: "o--r" for red dashed line with o markers at points.
 */
void plot(const ds::square2D &sq, std::string format)
{
    auto top = ds::line2D(sq.topRight(), sq.topLeft());
    auto left = ds::line2D(sq.topLeft(), sq.bottomLeft());
    auto bottom = ds::line2D(sq.bottomLeft(), sq.bottomRight());
    auto right = ds::line2D(sq.bottomRight(), sq.topRight());

    plot(top, format);
    plot(left, format);
    plot(bottom, format);
    plot(right, format);
}

/**
 * @brief Overloaded plot for triangle2D class.
 * 
 * @param tri const ds::triangle2D ref
 * @param format std::string format string <marker><line><color>. Examle: "o--r" for red dashed line with o markers at points.
 */
void plot(const ds::triangle2D &tri, std::string format)
{
    auto left = ds::line2D(tri.top(), tri.left());
    auto bottom = ds::line2D(tri.left(), tri.right());
    auto right = ds::line2D(tri.right(), tri.top());

    plot(left, format);
    plot(bottom, format);
    plot(right, format);
}

void plot(const ds::evenShape2D &shape, std::string format)
{
    for (size_t i {1}; i < shape.m_size; i++)
    {
        plot(
            ds::line2D(
                shape.m_vertices[i-1],
                shape.m_vertices[i]
            ), format
        );

        plot(shape.m_vertices[i], ".r");
    }

    plot(
        ds::line2D(
            shape.m_vertices.back(),
            shape.m_vertices.front()
        ), format
    );
}

#endif