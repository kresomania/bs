#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h> /* printk() */ 

MODULE_LICENSE("Dual BSD/GPL");

void crash(void) {
  printk("<1> Ihaaaa\n");
  int *p;
  while(1) {
    p--;
    *p = NULL;
  }
}

module_init(crash);
