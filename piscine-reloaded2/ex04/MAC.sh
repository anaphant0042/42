# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alara-gu <alara-gu@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 16:35:57 by alara-gu          #+#    #+#              #
#    Updated: 2024/06/12 16:36:10 by alara-gu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
ifconfig -a | grep -ioE '([a-z0-9]{2}:){5}..'
