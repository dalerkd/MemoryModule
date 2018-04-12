Check EXE Why Error
============

通过增加断点来方便判断问题所在.

当你遇到一个损坏的exe或者dll的时候,你希望搞清楚那些错误弹窗的根本原因.

你需要更多信息.

可能是格式被破坏,也可能是缺失DLL。只要你使用本工程就能解决问题了。

1. 附带本程序会报错给你并告诉你关键信息。它发生在哪里。以及周围的值。比如第几个结构的格式出错和它的偏移。
2. 并会根据你附带的源码来提供更多信息:最好就符号文件+源码.
3. 异常的处理,友好一些.

为了实现以上目的,我需要完成如下工作:

1. 日志库的使用,以及更友好的日志输出.例如:不同颜色.
2. 符号文件分析或者其他更友好的方法
3. 大量的标注和信息获取.
4. 异常截获,让本程序能正常使用.













----------------------

The default windows API functions to load external libraries into a program
(`LoadLibrary`, `LoadLibraryEx`) only work with files on the filesystem.  It's
therefore impossible to load a DLL from memory.

But sometimes, you need exactly this functionality (e.g. you don't want to
distribute a lot of files or want to make disassembling harder).  Common
workarounds for this problems are to write the DLL into a temporary file
first and import it from there.  When the program terminates, the temporary
file gets deleted.

`MemoryModule` is a library that can be used to load a DLL completely from
memory - without storing on the disk first.

See `doc/readme.rst` for more informations about the format of a DLL file and
a tutorial how they can be loaded directly.
