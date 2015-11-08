/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jripoute <jripoute@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 06:39:04 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/08 03:58:01 by jripoute         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.class.hpp"

Player::Player( int posX, int posY ) :
	GameEntity(posX, posY),
	life(5),
	shoots(0),
	kills(0),
	ammo(0),
	_respawnX(posX),
	_respawnY(posY)
{
	return ;
}

Player::Player( Player const & src ) : GameEntity(0, 0) {
	*this = src;
}

Player::~Player( void ) {
	return ;
}

Player &		Player::operator=( Player const & src ) {
	GameEntity::operator=(src);
	return *this;
}

void			Player::getKilled(void) {
	this->life -= 1;
	if (this->life < 0) {
		endwin();
		std::cout <<
		"Kills : " << this->kills << std::endl <<
		"Shoots : " << this->shoots << std::endl;
 		exit(0);
	}
	this->_posX = this->_respawnX;
	this->_posY = this->_respawnY;
}
