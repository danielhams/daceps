NULL=

SUBDIRS=							\
	.								\
	src								\
	$(NULL)

ACLOCAL_AMFLAGS=-I macros

pkgconfigdir=$(libdir)/pkgconfig

pkgconfig_DATA=liblibrarytwo@PACKAGE_SUFFIX@.pc

liblibrarytwo@PACKAGE_SUFFIX@.pc:	liblibrarytwo.pc
	cp $< $@

liblibrarytwoincludedir=$(includedir)/librarytwo@PACKAGE_SUFFIX@
liblibrarytwoinclude_HEADERS=						\
	$(NULL)

EXTRA_DIST=											\
	liblibrarytwo.pc.in								\
	$(NULL)

CLEANFILES=											\
	liblibrarytwo@PACKAGE_SUFFIX@.pc				\
	$(NULL)

DISTCLEANFILES=$(CLEANFILES)						\
	$(NULL)
