/* NetworkManager system settings service
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Copyright (C) 2008 Red Hat, Inc.
 */

#ifndef __NMS_IFCFG_RH_READER_H__
#define __NMS_IFCFG_RH_READER_H__

#include "nm-connection.h"

NMConnection *connection_from_file (const char *filename,
                                    char **out_unhandled,
                                    GError **error,
                                    gboolean *out_ignore_error);

NMConnection *nmtst_connection_from_file (const char *filename,
                                          const char *network_file,
                                          const char *test_type,
                                          char **out_unhandled,
                                          GError **error);

#endif  /* __NMS_IFCFG_RH_READER_H__ */
