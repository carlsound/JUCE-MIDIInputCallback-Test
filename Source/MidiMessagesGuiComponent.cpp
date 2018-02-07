/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.2.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

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

    addAndMakeVisible (midi_messages_label_ = new Label ("MIDI Messages",
                                                         TRANS("MIDI Messages")));
    midi_messages_label_->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    midi_messages_label_->setJustificationType (Justification::topLeft);
    midi_messages_label_->setEditable (false, false, false);
    midi_messages_label_->setColour (TextEditor::textColourId, Colours::black);
    midi_messages_label_->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (400, 300);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

MidiMessagesGuiComponent::~MidiMessagesGuiComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    midi_messages_label_ = nullptr;


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

    midi_messages_label_->setBounds (0, 0, 400, 300);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

//==============================================================================
void MidiMessagesGuiComponent::handleIncomingMidiMessage(MidiInput * source, const MidiMessage & message)
{
}

void MidiMessagesGuiComponent::handlePartialSysexMessage(MidiInput * source, const uint8 * messageData, int numBytesSoFar, double timestamp)
{
}

//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]



#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MidiMessagesGuiComponent"
                 componentName="" parentClasses="public Component" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="400" initialHeight="300">
  <BACKGROUND backgroundColour="ff323e44"/>
  <LABEL name="MIDI Messages" id="a314df2c57cdf13f" memberName="midi_messages_label_"
         virtualName="" explicitFocusOrder="0" pos="0 0 400 300" edTextCol="ff000000"
         edBkgCol="0" labelText="MIDI Messages" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" kerning="0" bold="0" italic="0" justification="9"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
