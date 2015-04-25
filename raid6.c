/*
       raid6.c
 
 
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   You should have received a copy of the GNU General Public License
   (for example /usr/src/linux/COPYING); if not, write to the Free
 */
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include "raid6.h"

/*
 * function prototypes
*/
static void __init raid6_init(void);
static void raid6_exit(void);


/*
 * function definitions
*/
static void __init raid6_init(void) {
}

static void raid6_exit(void) {
}


module_init(raid6_init);
module_exit(raid6_exit);
MODULE_LICENSE("GPL")
MODULE_DESCRIPTION("RAID6 double-parity Redundant Array of Individual Disk's (RAID)");MODULE_ALIAS("raid6");
