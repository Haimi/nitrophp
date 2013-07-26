#ifndef PHP_NITROPHP_H
#define PHP_NITROPHP_H 1

#define PHP_NITROPHP_VERSION "0.1"
#define PHP_NITROPHP_EXTNAME "nitrophp"

PHP_MINIT_FUNCTION(nitrophp);
PHP_MSHUTDOWN_FUNCTION(nitrophp);

PHP_FUNCTION(hello_world);

extern zend_module_entry nitrophp_module_entry;
#define phpext_nitrophp_ptr &nitrophp_module_entry

#endif