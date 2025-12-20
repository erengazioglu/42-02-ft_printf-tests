# FT_PRINTF Tests

Rudimentary testing repo for ft_printf (42 cursus project).

## How the Makefile works

`cc -DUSE_CUSTOM src/int_bonus.c src/run_test.c ../02-ft_printf/libftprintf.a`

The `-DUSE_CUSTOM` will define a `USE_CUSTOM` flag for the final executable.  
So when you compile with `-DUSE_CUSTOM` it will use `ft_printf`, otherwise it'll use `printf`.