#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

int __init ola_mundo(void)
{
  printk("<1>Hello world 1.\n");

  return 0;
}

void __exit adeus_mundo(void)
{
  printk(KERN_ALERT "Goodbye world 1.\n");
}

module_init(ola_mundo);
module_exit(adeus_mundo);