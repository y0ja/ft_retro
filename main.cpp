/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: y0ja <y0ja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 18:01:40 by y0ja              #+#    #+#             */
/*   Updated: 2015/11/07 07:38:46 by y0ja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <curses.h>
#include "Env.class.hpp"
#include "GameEntity.class.hpp"
#include "Enemy.class.hpp"
#include "Player.class.hpp"
#include "HUD.class.hpp"

int			main(void) {
	Env		env;

	while (77) {
		if (env.updateAll() == -1)
			break ;
	}
	return (0);
}
