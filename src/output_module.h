/* output_module.h - Output module interface definition
 *
 * Copyright (C) 2007   Ivo Clarysse
 *
 * This file is part of GMediaRender.
 *
 * GMediaRender is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * GMediaRender is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GMediaRender; if not, write to the Free Software 
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, 
 * MA 02110-1301, USA.
 *
 */ 

#ifndef _OUTPUT_MODULE_H

#define _OUTPUT_MODULE_H

struct output_module {
        const char *shortname;
        const char *description;
	int (*add_options)(GOptionContext *ctx);
	int (*init)(void);
	void (*set_uri)(const char *uri);
	int (*play)(void);
	int (*stop)(void);
	int (*pause)(void);
	int (*loop)(void);
};

#endif

