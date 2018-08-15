NULL=

librarytwodir=$(libdir)

librarytwo_LTLIBRARIES = liblibrarytwo@PACKAGE_SUFFIX@.la

liblibrarytwo@PACKAGE_SUFFIX@_la_SOURCES=							\
	librarytwofuncs.c												\
	$(NULL)

liblibrarytwo@PACKAGE_SUFFIX@_la_CFLAGS=							\
	$(LIBRARYTWO_DEPS_CFLAGS)										\
	$(NULL)

liblibrarytwo@PACKAGE_SUFFIX@_la_LIBADD=							\
	$(LIBRARYTWO_DEPS_LIBS)											\
	$(NULL)

librarytwoincludedir=$(includedir)/librarytwo@PACKAGE_SUFFIX@/librarytwo

librarytwoinclude_HEADERS=												\
	librarytwointerface.h												\
	$(NULL)

CLEANFILES=																\
	$(liblibrarytwo@PACKAGE_SUFFIX@_la_SOURCES:.c=.o)					\
	$(liblibrarytwo@PACKAGE_SUFFIX@_la_SOURCES:.c=.lo)					\
	liblibrarytwo@PACKAGE_SUFFIX@.la									\
	liblibrarytwo@PACKAGE_SUFFIX@.la									\
	.libs																\
	$(NULL)
