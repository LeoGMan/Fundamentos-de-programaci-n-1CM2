#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=c++
CXX=c++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Arreglo\ Num\ min\ y\ max.o \
	${OBJECTDIR}/Arreglo\ Promedio.o \
	${OBJECTDIR}/Arreglo\ metodo\ de\ burbuja.o \
	${OBJECTDIR}/Arreglo\ scan.o \
	${OBJECTDIR}/arreglo\ burbuja\ mejorada.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos-de-programaci-n-1cm2.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos-de-programaci-n-1cm2.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos-de-programaci-n-1cm2 ${OBJECTFILES} ${LDLIBSOPTIONS}

.NO_PARALLEL:${OBJECTDIR}/Arreglo\ Num\ min\ y\ max.o
${OBJECTDIR}/Arreglo\ Num\ min\ y\ max.o: Arreglo\ Num\ min\ y\ max.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arreglo\ Num\ min\ y\ max.o Arreglo\ Num\ min\ y\ max.c

.NO_PARALLEL:${OBJECTDIR}/Arreglo\ Promedio.o
${OBJECTDIR}/Arreglo\ Promedio.o: Arreglo\ Promedio.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arreglo\ Promedio.o Arreglo\ Promedio.c

.NO_PARALLEL:${OBJECTDIR}/Arreglo\ metodo\ de\ burbuja.o
${OBJECTDIR}/Arreglo\ metodo\ de\ burbuja.o: Arreglo\ metodo\ de\ burbuja.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arreglo\ metodo\ de\ burbuja.o Arreglo\ metodo\ de\ burbuja.c

.NO_PARALLEL:${OBJECTDIR}/Arreglo\ scan.o
${OBJECTDIR}/Arreglo\ scan.o: Arreglo\ scan.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arreglo\ scan.o Arreglo\ scan.c

.NO_PARALLEL:${OBJECTDIR}/arreglo\ burbuja\ mejorada.o
${OBJECTDIR}/arreglo\ burbuja\ mejorada.o: arreglo\ burbuja\ mejorada.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/arreglo\ burbuja\ mejorada.o arreglo\ burbuja\ mejorada.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
