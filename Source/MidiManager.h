/*
  ==============================================================================

    MidiManager.h
    Created: 4 Feb 2018 11:53:34am
    Author:  John Carlson

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class MidiManager : public MidiInputCallback
{
public:
	//==============================================================================
	MidiManager();
	~MidiManager() = default;

	//==============================================================================
	void handleIncomingMidiMessage(MidiInput *source, const MidiMessage &message) override;
	void handlePartialSysexMessage(MidiInput *source, const uint8 *messageData, int numBytesSoFar, double timestamp);

protected:
	//==============================================================================

private:
	//==============================================================================

};
