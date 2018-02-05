/*
  ==============================================================================

    MidiManager.cpp
    Created: 4 Feb 2018 11:53:34am
    Author:  John Carlson

  ==============================================================================
*/

#include "MidiManager.h"

//==============================================================================

MidiManager::MidiManager()
{
}

void MidiManager::handleIncomingMidiMessage(MidiInput * source, const MidiMessage & message)
{
}

void MidiManager::handlePartialSysexMessage(MidiInput * source, const uint8 * messageData, int numBytesSoFar, double timestamp)
{
}
