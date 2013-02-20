/*
 * Copyright (c) 2013 Lawrence Livermore National Security. All rights reserved.
 *
 * This software is available to you under a choice of one of two
 * licenses.  You may choose to be licensed under the terms of the GNU
 * General Public License (GPL) Version 2, available from the file
 * COPYING in the main directory of this source tree, or the
 * OpenIB.org BSD license below:
 *
 *     Redistribution and use in source and binary forms, with or
 *     without modification, are permitted provided that the following
 *     conditions are met:
 *
 *      - Redistributions of source code must retain the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer.
 *
 *      - Redistributions in binary form must reproduce the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer in the documentation and/or other materials
 *        provided with the distribution.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#ifndef _PRINT_MAD_H_
#define _PRINT_MAD_H_

#define MAD_DUMP(file, b, s, fmt, ...) \
	mad_dump(file, b, s, "%s:%d " fmt, __FUNCTION__, __LINE__, ## __VA_ARGS__)
#define ATTR_DUMP(file, b, s, fmt, ...) \
	attr_dump(file, b, s, "%s:%d " fmt, __FUNCTION__, __LINE__, ## __VA_ARGS__)

void mad_dump(FILE * file, uint8_t *p, size_t size, char *msg, ...);
void attr_dump(FILE * file, uint8_t *p, size_t size, char *msg, ...);

#endif				/* _PRINT_MAD_H_ */
