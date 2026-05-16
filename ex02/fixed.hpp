/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchambos <lchambos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 15:22:33 by lchambos          #+#    #+#             */
/*   Updated: 2026/05/16 16:54:47 by lchambos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
  private:
	int _value;
	static const int _bits = 8;

  public:
	Fixed();
	~Fixed();
	Fixed(const int x);
	Fixed(const float x);
	Fixed(Fixed const &src);

	Fixed &operator=(Fixed const &src);

	int getRawBits(void) const;
	void setRawBits(const int raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif