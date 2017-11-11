/*
 * MMT - Project 1 - Socket Programming
 * HTTP Download Client
 *
 * 15CNTN  - Team 0xff
 * Members:
 * 1512284 - Ha Tan Linh
 * 1512387 - Do Thanh Nhon
 * 1512491 - Nguyen Thanh Tan
 *
 * Interface: Host Name;
 */

/*
 * Getting host name from URL.
 */
#ifndef GHOST_H__
#define GHOST_H__

/*
 * Get the Host address from the given URL
 *
 * Return 1 on success
 * or 0 if failed
 */
int get_host_name(const char *URL, char *host_name);

#endif