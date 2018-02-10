/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.2.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "MidiMessagesGuiComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MidiMessagesGuiComponent::MidiMessagesGuiComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (midi_messages_text_editor_ = new TextEditor ("MIDI Messages"));
    midi_messages_text_editor_->setMultiLine (true);
    midi_messages_text_editor_->setReturnKeyStartsNewLine (true);
    midi_messages_text_editor_->setReadOnly (true);
    midi_messages_text_editor_->setScrollbarsShown (true);
    midi_messages_text_editor_->setCaretVisible (false);
    midi_messages_text_editor_->setPopupMenuEnabled (false);
    midi_messages_text_editor_->setText (TRANS("MIDI Messages"));

    midi_messages_text_editor_->setBounds (0, 0, 400, 300);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (400, 300);


    //[Constructor] You can add your own custom stuff here..
    sample_rate_ = 44100;
    midi_message_collector_.reset(sample_rate_);
    //[/Constructor]
}

MidiMessagesGuiComponent::~MidiMessagesGuiComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    midi_messages_text_editor_ = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MidiMessagesGuiComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MidiMessagesGuiComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

MidiInputCallback * MidiMessagesGuiComponent::getMIdiInputCallback()
{
	return this;
}

void MidiMessagesGuiComponent::setLabel(String message)
{
	midi_messages_text_editor_->setText((midi_messages_text_editor_->getText() + '\n' + message), sendNotification);
}

void MidiMessagesGuiComponent::setSampleRate(double sampleRate)
{
    sample_rate_ = sampleRate;
    midi_message_collector_.reset(sample_rate_);
}

void MidiMessagesGuiComponent::handleIncomingMidiMessage(MidiInput * source, const MidiMessage & message)
{
	midi_message_collector_.addMessageToQueue(message);
	//
    const MessageManagerLock mmLock;
    //
    String description = message.getDescription();
    //
    std::cout << description;
	setLabel(description);
}

void MidiMessagesGuiComponent::handlePartialSysexMessage(MidiInput * source, const uint8 * messageData, int numBytesSoFar, double timestamp)
{
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MidiMessagesGuiComponent"
                 componentName="" parentClasses="public Component, MidiInputCallback"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="400"
                 initialHeight="300">
  <BACKGROUND backgroundColour="ff323e44"/>
  <TEXTEDITOR name="MIDI Messages" id="a343f87b2c91e9a5" memberName="midi_messages_text_editor_"
              virtualName="" explicitFocusOrder="0" pos="0 0 400 300" initialText="MIDI Messages"
              multiline="1" retKeyStartsLine="1" readonly="1" scrollbars="1"
              caret="0" popupmenu="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
