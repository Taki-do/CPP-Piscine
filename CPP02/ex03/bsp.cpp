/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:13:39 by taomalbe          #+#    #+#             */
/*   Updated: 2025/04/23 15:03:23 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float abs_f(float x)
{
    if (x < 0)
        return (-x);
    return (x);
}

Fixed tri_area(Point const a, Point const b, Point const c) {
    Fixed area(0.5f * abs_f((a.getx()*(b.gety() - c.gety()) +
                            b.getx()*(c.gety() - a.gety()) +
                            c.getx()*(a.gety() - b.gety())
                            ).toFloat())
                            );
    return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    Fixed abc = tri_area(a, b, c);
    Fixed abp = tri_area(a, b, point);
    Fixed bcp = tri_area(b, c, point);
    Fixed cap = tri_area(c, a, point);
    
    if ((abp != 0 && bcp != 0 && cap != 0) && ((abp + bcp + cap) == abc))
        return (true);
    return (false);
}