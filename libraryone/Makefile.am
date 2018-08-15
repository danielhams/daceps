NULL=

SUBDIRS=							\
	.								\
	src								\
	$(NULL)

ACLOCAL_AMFLAGS=-I macros

pkgconfigdir=$(libdir)/pkgconfig

pkgconfig_DATA=liblibraryone@PACKAGE_SUFFIX@.pc

liblibraryone@PACKAGE_SUFFIX@.pc:	liblibraryone.pc
	cp $< $@

liblibraryoneincludedir=$(includedir)/libraryone@PACKAGE_SUFFIX@
liblibraryoneinclude_HEADERS=						\
	$(NULL)

EXTRA_DIST=											\
	liblibraryone.pc.in								\
	$(NULL)

CLEANFILES=											\
	liblibraryone@PACKAGE_SUFFIX@.pc				\
	$(NULL)

DISTCLEANFILES=$(CLEANFILES)						\
	$(NULL)
