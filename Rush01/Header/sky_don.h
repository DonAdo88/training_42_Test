/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   sky_don.h                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/30 09:31:57 by username         #+#    #+#              */
/*   Updated: 2026/08/30 10:29:13 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKY_DON_H
# define SKY_DON_H
int	count_visible_left(int *row, int size);
int	count_visible_right(int *row, int size);
int	is_valid_row(int *row, int size);
//int is_valid_col(int *row, int size);
int	match_clues(int *row, int size, int left, int right);

#endif
