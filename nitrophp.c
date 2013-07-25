#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "php.h"
#include "php_ini.h"
#include "php_nitrophp.h"
#include <openssl/rand.h>

static function_entry nitrophp_functions[] = {
    PHP_FE(hello_world, NULL)
    PHP_FE(large_random, NULL)
    {NULL, NULL, NULL}
};

zend_module_entry nitrophp_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
    PHP_NITROPHP_EXTNAME,
    nitrophp_functions,
    PHP_MINIT(nitrophp),
    PHP_MSHUTDOWN(nitrophp),
    NULL,
    NULL,
    NULL,
#if ZEND_MODULE_API_NO >= 20010901
    PHP_NITROPHP_VERSION,
#endif
    STANDARD_MODULE_PROPERTIES
};

PHP_INI_BEGIN()
PHP_INI_ENTRY("nitrophp.greeting", "Hello %s!", PHP_INI_ALL, NULL)
PHP_INI_END()

PHP_MINIT_FUNCTION(nitrophp)
{
    REGISTER_INI_ENTRIES();

    return SUCCESS;
}

PHP_MSHUTDOWN_FUNCTION(nitrophp)
{
    UNREGISTER_INI_ENTRIES();

    return SUCCESS;
}

#ifdef COMPILE_DL_NITROPHP
ZEND_GET_MODULE(nitrophp)
#endif

PHP_FUNCTION(hello_world)
{

}