PHP_ARG_ENABLE(nitrophp, whether to enable nitrophp support, [ --enable-nitrophp   Enable nitrophp support])
if test "$PHP_NITROPHP" = "yes"; then
  AC_DEFINE(HAVE_NITROPHP, 1, [Whether you have nitrophp])
  PHP_NEW_EXTENSION(nitrophp, nitrophp.c, $ext_shared)
fi