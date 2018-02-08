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
    midi_message_collector_.addMessageToQueue(message);
    //
    midi_messages_label_->setText((midi_messages_label_->getText() + '\n' + message.getDescription()), sendNotification);
    //
    if (DEBUG)
    {
        std::cout << message.getDescription();
    }
}

void MidiManager::handlePartialSysexMessage(MidiInput * source, const uint8 * messageData, int numBytesSoFar, double timestamp)
{
}
