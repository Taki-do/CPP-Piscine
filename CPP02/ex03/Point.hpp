/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:16:07 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/23 14:51:57 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const float fx, const float fy);
        Point(const Point& other);
        Point& operator=(const Point& other);
        ~Point();
        Fixed getx() const;
        Fixed gety() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif