#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("Dual BSP/GPL");

void crash(void) {
  printk("<1> Ihhaaaaa I'm going to crash...");
  int *p;
  while(1) {
    p--;
    *p = 0;    
  }
}

module_init(crash);
