#!/usr/bin/env bash

set -eu

INNAME=${1-test.hep.gz}
OUTNAME=${2-delphes_output.root}
CARD=cards/delphes_card_ATLAS.tcl

function check-input() {
    if [[ ! -f $INNAME ]] ; then
	echo "no input file ${INNAME}... quitting" >&2
	return 1
    fi
}

check-input $INNAME
check-input $CARD

gunzip $INNAME -c | ./DelphesSTDHEP $CARD $OUTNAME -