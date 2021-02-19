/**
 Copyright (c) 2014, Oracle and/or its affiliates. All rights reserved.

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License, version 2.0,
 as published by the Free Software Foundation.

 This program is also distributed with certain software (including
 but not limited to OpenSSL) that is licensed under separate terms,
 as designated in a particular file or component or in included license
 documentation.  The authors of MySQL hereby grant you an additional
 permission to link the program and your derivative works with the
 separately licensed software that they have included with MySQL.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License, version 2.0, for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA */

#ifndef BAPI_CONFIG_INCLUDED
#define BAPI_CONFIG_INCLUDED
/* Headers we may use */
#define HAVE_STDINT_H 1
/* #undef HAVE_ENDIAN_H */
/* Symbols we may use */
/* #undef IS_BIG_ENDIAN */
/* #undef HAVE_LE64TOH */
/* #undef HAVE_LE32TOH */
/* #undef HAVE_LE16TOH */
/* #undef HAVE_STRNDUP */
/* #undef HAVE_ENDIAN_CONVERSION_MACROS */
#define SIZEOF_LONG_LONG   8
#define HAVE_LONG_LONG 1
#define SIZEOF_LONG 4
#define HAVE_LONG 1
#define SIZEOF_INT 4
#define HAVE_INT 1

#endif
