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
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Apun.o \
	${OBJECTDIR}/For.o \
	${OBJECTDIR}/Funcion.o \
	${OBJECTDIR}/If.o \
	${OBJECTDIR}/Menú.o \
	${OBJECTDIR}/apuntador\ 2.o \
	${OBJECTDIR}/array\ char.o \
	${OBJECTDIR}/array\ tabla.o \
	${OBJECTDIR}/array.o \
	${OBJECTDIR}/compras.o \
	${OBJECTDIR}/do\ while.o \
	${OBJECTDIR}/funcion\ 2.o \
	${OBJECTDIR}/i\ f.o \
	${OBJECTDIR}/if\ 2.o \
	${OBJECTDIR}/sueldo.o \
	${OBJECTDIR}/suma\ con\ apuntador.o \
	${OBJECTDIR}/switch.o \
	${OBJECTDIR}/tienda.o \
	${OBJECTDIR}/while.o


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

${OBJECTDIR}/Apun.o: Apun.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Apun.o Apun.c

${OBJECTDIR}/For.o: For.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/For.o For.c

${OBJECTDIR}/Funcion.o: Funcion.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Funcion.o Funcion.c

${OBJECTDIR}/If.o: If.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/If.o If.c

${OBJECTDIR}/Menú.o: Menú.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Menú.o Menú.c

.NO_PARALLEL:${OBJECTDIR}/apuntador\ 2.o
${OBJECTDIR}/apuntador\ 2.o: apuntador\ 2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/apuntador\ 2.o apuntador\ 2.c

.NO_PARALLEL:${OBJECTDIR}/array\ char.o
${OBJECTDIR}/array\ char.o: array\ char.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/array\ char.o array\ char.c

.NO_PARALLEL:${OBJECTDIR}/array\ tabla.o
${OBJECTDIR}/array\ tabla.o: array\ tabla.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/array\ tabla.o array\ tabla.c

${OBJECTDIR}/array.o: array.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/array.o array.c

${OBJECTDIR}/compras.o: compras.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/compras.o compras.c

.NO_PARALLEL:${OBJECTDIR}/do\ while.o
${OBJECTDIR}/do\ while.o: do\ while.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/do\ while.o do\ while.c

.NO_PARALLEL:${OBJECTDIR}/funcion\ 2.o
${OBJECTDIR}/funcion\ 2.o: funcion\ 2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funcion\ 2.o funcion\ 2.c

.NO_PARALLEL:${OBJECTDIR}/i\ f.o
${OBJECTDIR}/i\ f.o: i\ f.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/i\ f.o i\ f.c

.NO_PARALLEL:${OBJECTDIR}/if\ 2.o
${OBJECTDIR}/if\ 2.o: if\ 2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/if\ 2.o if\ 2.c

${OBJECTDIR}/sueldo.o: sueldo.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sueldo.o sueldo.c

.NO_PARALLEL:${OBJECTDIR}/suma\ con\ apuntador.o
${OBJECTDIR}/suma\ con\ apuntador.o: suma\ con\ apuntador.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/suma\ con\ apuntador.o suma\ con\ apuntador.c

${OBJECTDIR}/switch.o: switch.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/switch.o switch.c

${OBJECTDIR}/tienda.o: tienda.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tienda.o tienda.c

${OBJECTDIR}/while.o: while.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/while.o while.c

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
