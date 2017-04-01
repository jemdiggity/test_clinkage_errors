# test_clinkage_erros
Bazel for GNU ARM Embedded Toolchain

#### Getting started:
```shell
$ ./install_tools.sh
$ ./configure.sh
$ ./build.sh
```

Weird errors when cross compiling.

Including header bar.h as "foo/bar.h" is ok, but including it as just "bar.h" results in "error: template with C linkage".
