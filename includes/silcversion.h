/*

  silcversion.h

  Author: Pekka Riikonen <priikone@silcnet.org>

  Copyright (C) 1997 - 2007 Pekka Riikonen

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; version 2 of the License.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

*/

#ifndef SILCVERSION_H
#define SILCVERSION_H

#ifdef __cplusplus
extern "C" {
#endif

/* Version check macro.  Use this to check that package is of specific
   version compile time.  Use the __SILC_XXX_VERSION below in comparison. */
#define SILC_VERSION(a, b, c) (((a) << 24) + ((b) << 16) + ((c) << 8))


#define SILC_VERSION_STRING "1.1.8"
#define SILC_DIST_VERSION_STRING "1.1.8"
#define SILC_PROTOCOL_VERSION_STRING "SILC-1.2-1.1.8 silc-client"
#define SILC_NAME "SILC Client"

/* SILC Protocol version number */
#define SILC_PROTOCOL_VERSION_CURRENT 12

/* SILC version string */
#define silc_version SILC_VERSION_STRING
#define silc_dist_version SILC_DIST_VERSION_STRING
#define silc_version_string SILC_PROTOCOL_VERSION_STRING
#define silc_name SILC_NAME
#define silc_fullname "Secure Internet Live Conferencing"

#ifdef __cplusplus
}
#endif

#endif /* SILCVERSION_H */
