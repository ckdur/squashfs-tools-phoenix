#ifndef THREAD_H
#define THREAD_H
/*
 * Squashfs
 *
 * Copyright (c) 2024
 * Phillip Lougher <phillip@squashfs.org.uk>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * thread.h
 */

#define TRUE 1
#define FALSE 0

struct thread {
	int	type;
	int	state;
};

#define THREAD_BLOCK	1
#define THREAD_FRAGMENT	2
#define THREAD_ACTIVE	3
#define THREAD_IDLE	4

extern int get_thread(int type);
#endif
