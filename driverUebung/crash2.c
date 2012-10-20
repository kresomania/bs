#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h> /* printk() */ 

MODULE_LICENSE("Dual BSD/GPL");

void crash(void) {
  panic("miau miau miau");
  return 0;
}

module_init(crash);
