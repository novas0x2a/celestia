pkgdatadir = @datadir@/@PACKAGE@/data

## Only attempt to remake the Star Database if we have the HIPPARCOS sources
if ENABLE_HIPPARCOS
HIP_DAT = stars.dat
else
HIP_DAT =
endif

BUILT_SOURCES = $(HIP_DAT)

pkgdata_DATA = \
	asterisms.dat \
	boundaries.dat \
	hdxindex.dat \
	saoxindex.dat \
	starnames.dat \
	stars.dat \
	galaxies.dsc \
	globulars.dsc \
	asteroids.ssc \
	comets.ssc \
	earth_locs.ssc \
	eros_locs.ssc \
	extrasolar.ssc \
	gaspra_locs.ssc \
	ida_locs.ssc \
	itokawa_locs.ssc \
	jupitermoons_locs.ssc \
	mars_locs.ssc \
	marsmoons_locs.ssc \
	merc_locs.ssc \
	minormoons.ssc \
	moon_locs.ssc \
	neptunemoons_locs.ssc \
	numberedmoons.ssc \
	outersys.ssc \
	ring_locs.ssc \
	saturnmoons_locs.ssc \
	solarsys.ssc \
	uranusmoons_locs.ssc \
	venus_locs.ssc \
	world-capitals.ssc \
	charm2.stc \
	extrasolar.stc \
	nearstars.stc \
	revised.stc \
	spectbins.stc \
	visualbins.stc

EXTRA_DIST = \
	$(pkgdata_DATA) \
	stars.txt

MAINTAINERCLEANFILES = stars.dat

if ENABLE_HIPPARCOS
stars.dat: @HIPDIR@/hip_main.dat
	../src/buildstardb -q
endif
