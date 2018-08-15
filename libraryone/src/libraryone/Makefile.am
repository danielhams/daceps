NULL=

libraryonedir=$(libdir)

libraryone_LTLIBRARIES = liblibraryone@PACKAGE_SUFFIX@.la

liblibraryone@PACKAGE_SUFFIX@_la_SOURCES=							\
	libraryonefuncs.c												\
	$(NULL)

liblibraryone@PACKAGE_SUFFIX@_la_LIBADD=				\
	$(NULL)

libraryoneincludedir=$(includedir)/libraryone@PACKAGE_SUFFIX@/libraryone

libraryoneinclude_HEADERS=												\
	libraryoneinterface.h													\
	$(NULL)

CLEANFILES=																\
	$(liblibraryone@PACKAGE_SUFFIX@_la_SOURCES:.c=.o)					\
	$(liblibraryone@PACKAGE_SUFFIX@_la_SOURCES:.c=.lo)					\
	liblibraryone@PACKAGE_SUFFIX@.la									\
	liblibraryone@PACKAGE_SUFFIX@.la									\
	.libs																\
	$(NULL)
