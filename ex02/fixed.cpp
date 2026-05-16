/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchambos <lchambos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 16:49:41 by lchambos          #+#    #+#             */
/*   Updated: 2026/05/16 17:31:31 by lchambos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int x)
{
	std::cout << "Int constructor called." << std::endl;
	this->_value = x << this->_bits;
	return;
}

Fixed::Fixed(const float x)
{
	std::cout << "Float constructor called." << std::endl;
	this->_value = roundf(x * (1 << this->_bits));
	return;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other)
		this->_value = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
	return ;
}

float Fixed::toFloat(void) const
{
    return (float)this->_value / (float)(1 << this->_bits);
}

int Fixed::toInt(void) const
{
    return roundf(this->_value / (1 << this->_bits));
}

std::ostream	&operator<<(std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return o;
}
