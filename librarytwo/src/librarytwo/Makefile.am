NULL=

librarytwodir=$(libdir)

librarytwo_LTLIBRARIES = liblibrarytwo@PACKAGE_SUFFIX@.la

liblibrarytwo@PACKAGE_SUFFIX@_la_SOURCES=							\
	librarytwofunc.c												\
	$(NULL)

liblibrarytwo@PACKAGE_SUFFIX@_la_LIBADD=				\
	$(NULL)

librarytwoincludedir=$(includedir)/librarytwo@PACKAGE_SUFFIX@/librarytwo

librarytwoinclude_HEADERS=												\
	librarytwofunc.h													\
	$(NULL)

CLEANFILES=																\
	$(liblibrarytwo@PACKAGE_SUFFIX@_la_SOURCES:.c=.o)					\
	$(liblibrarytwo@PACKAGE_SUFFIX@_la_SOURCES:.c=.lo)					\
	liblibrarytwo@PACKAGE_SUFFIX@.la									\
	liblibrarytwo@PACKAGE_SUFFIX@.la									\
	.libs																\
	$(NULL)
