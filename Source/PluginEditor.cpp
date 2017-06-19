/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
PluginAudioProcessorEditor::PluginAudioProcessorEditor (PluginAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    //[Constructor_pre] You can add your own custom stuff here..
  /*  addAndMakeVisible (distSlider = new Slider ("dist Slider"));
    thresholdSlider->setRange (-20, 0, 0.01);
    thresholdSlider->setSliderStyle (Slider::RotaryHorizontalVerticalDrag);
    thresholdSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    thresholdSlider->setColour (Slider::backgroundColourId, Colours::white);
    thresholdSlider->setColour (Slider::thumbColourId, Colours::white);
    thresholdSlider->setColour (Slider::trackColourId, Colours::white);
    thresholdSlider->setColour (Slider::rotarySliderFillColourId, Colours::white);
    thresholdSlider->setColour (Slider::rotarySliderOutlineColourId, Colours::chartreuse);
    thresholdSlider->addListener (this);

    addAndMakeVisible (driveSlider = new Slider ("drive Slider"));
    thresholdSlider->setRange (-20, 0, 0.01);
    thresholdSlider->setSliderStyle (Slider::RotaryHorizontalVerticalDrag);
    thresholdSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    thresholdSlider->setColour (Slider::backgroundColourId, Colours::white);
    thresholdSlider->setColour (Slider::thumbColourId, Colours::white);
    thresholdSlider->setColour (Slider::trackColourId, Colours::white);
    thresholdSlider->setColour (Slider::rotarySliderFillColourId, Colours::white);
    thresholdSlider->setColour (Slider::rotarySliderOutlineColourId, Colours::chartreuse);
    thresholdSlider->addListener (this);

    addAndMakeVisible (modeSlider = new Slider ("Threshold Slider"));
    thresholdSlider->setRange (-20, 0, 0.01);
    thresholdSlider->setSliderStyle (Slider::RotaryHorizontalVerticalDrag);
    thresholdSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    thresholdSlider->setColour (Slider::backgroundColourId, Colours::white);
    thresholdSlider->setColour (Slider::thumbColourId, Colours::white);
    thresholdSlider->setColour (Slider::trackColourId, Colours::white);
    thresholdSlider->setColour (Slider::rotarySliderFillColourId, Colours::white);
    thresholdSlider->setColour (Slider::rotarySliderOutlineColourId, Colours::chartreuse);
    thresholdSlider->addListener (this);
	*/
    //labels
    /*addAndMakeVisible (modeLabel = new Label ("Mode Label",
                                               TRANS("Mode")));
    ratioLabel->setFont (Font (16.00f, Font::plain));
    ratioLabel->setJustificationType (Justification::centred);
    ratioLabel->setEditable (false, false, false);
    ratioLabel->setColour (Label::textColourId, Colours::white);
    ratioLabel->setColour (TextEditor::textColourId, Colours::black);
    ratioLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (driveLabel = new Label ("drive Label",
                                               TRANS("Drive")));
    ratioLabel->setFont (Font (16.00f, Font::plain));
    ratioLabel->setJustificationType (Justification::centred);
    ratioLabel->setEditable (false, false, false);
    ratioLabel->setColour (Label::textColourId, Colours::white);
    ratioLabel->setColour (TextEditor::textColourId, Colours::black);
    ratioLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (distLabel = new Label ("dist Label",
                                               TRANS("Disto")));
    ratioLabel->setFont (Font (16.00f, Font::plain));
    ratioLabel->setJustificationType (Justification::centred);
    ratioLabel->setEditable (false, false, false);
    ratioLabel->setColour (Label::textColourId, Colours::white);
    ratioLabel->setColour (TextEditor::textColourId, Colours::black);
    ratioLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
	*/

    //[/Constructor_pre]

    addAndMakeVisible (thresholdSlider = new Slider ("Threshold Slider"));
    thresholdSlider->setRange (-20, 0, 0.01);
    thresholdSlider->setSliderStyle (Slider::RotaryHorizontalVerticalDrag);
    thresholdSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    thresholdSlider->setColour (Slider::backgroundColourId, Colours::white);
    thresholdSlider->setColour (Slider::thumbColourId, Colours::white);
    thresholdSlider->setColour (Slider::trackColourId, Colours::white);
    thresholdSlider->setColour (Slider::rotarySliderFillColourId, Colours::white);
    thresholdSlider->setColour (Slider::rotarySliderOutlineColourId, Colours::chartreuse);
    thresholdSlider->addListener (this);

    addAndMakeVisible (ratioSlider = new Slider ("Ratio Slider"));
    ratioSlider->setRange (1, 10, 0.01);
    ratioSlider->setSliderStyle (Slider::RotaryHorizontalVerticalDrag);
    ratioSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    ratioSlider->setColour (Slider::thumbColourId, Colours::white);
    ratioSlider->setColour (Slider::trackColourId, Colours::white);
    ratioSlider->setColour (Slider::rotarySliderFillColourId, Colours::white);
    ratioSlider->setColour (Slider::rotarySliderOutlineColourId, Colours::chartreuse);
    ratioSlider->addListener (this);

    addAndMakeVisible (ratioLabel = new Label ("Ratio Label",
                                               TRANS("Ratio")));
    ratioLabel->setFont (Font (16.00f, Font::plain));
    ratioLabel->setJustificationType (Justification::centred);
    ratioLabel->setEditable (false, false, false);
    ratioLabel->setColour (Label::textColourId, Colours::white);
    ratioLabel->setColour (TextEditor::textColourId, Colours::black);
    ratioLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (thresholdLabel = new Label ("Threshold Label",
                                                   TRANS("Threshold")));
    thresholdLabel->setFont (Font (16.00f, Font::plain));
    thresholdLabel->setJustificationType (Justification::centred);
    thresholdLabel->setEditable (false, false, false);
    thresholdLabel->setColour (Label::textColourId, Colours::white);
    thresholdLabel->setColour (TextEditor::textColourId, Colours::black);
    thresholdLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (attackSlider = new Slider ("Attack Slider"));
    attackSlider->setRange (0, 100, 0.01);
    attackSlider->setSliderStyle (Slider::RotaryHorizontalVerticalDrag);
    attackSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    attackSlider->setColour (Slider::thumbColourId, Colours::white);
    attackSlider->setColour (Slider::trackColourId, Colours::white);
    attackSlider->setColour (Slider::rotarySliderFillColourId, Colours::white);
    attackSlider->setColour (Slider::rotarySliderOutlineColourId, Colours::chartreuse);
    attackSlider->addListener (this);

    addAndMakeVisible (attackLabel = new Label ("Attack Label",
                                                TRANS("Attack")));
    attackLabel->setFont (Font (16.00f, Font::plain));
    attackLabel->setJustificationType (Justification::centred);
    attackLabel->setEditable (false, false, false);
    attackLabel->setColour (Label::textColourId, Colours::white);
    attackLabel->setColour (TextEditor::textColourId, Colours::black);
    attackLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (releaseSlider = new Slider ("Release Slider"));
    releaseSlider->setRange (0, 1000, 0.01);
    releaseSlider->setSliderStyle (Slider::RotaryHorizontalVerticalDrag);
    releaseSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    releaseSlider->setColour (Slider::thumbColourId, Colours::white);
    releaseSlider->setColour (Slider::trackColourId, Colours::white);
    releaseSlider->setColour (Slider::rotarySliderFillColourId, Colours::white);
    releaseSlider->setColour (Slider::rotarySliderOutlineColourId, Colours::chartreuse);
    releaseSlider->addListener (this);

    addAndMakeVisible (releaseLabel = new Label ("Release Label",
                                                 TRANS("Release")));
    releaseLabel->setFont (Font (16.00f, Font::plain));
    releaseLabel->setJustificationType (Justification::centred);
    releaseLabel->setEditable (false, false, false);
    releaseLabel->setColour (Label::textColourId, Colours::white);
    releaseLabel->setColour (TextEditor::textColourId, Colours::black);
    releaseLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (mixSlider = new Slider ("mixSlider"));
    mixSlider->setRange (0, 10, 0);
    mixSlider->setSliderStyle (Slider::LinearHorizontal);
    mixSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    mixSlider->addListener (this);

    addAndMakeVisible (mixLabel = new TextEditor ("mixLabel"));
    mixLabel->setMultiLine (false);
    mixLabel->setReturnKeyStartsNewLine (false);
    mixLabel->setReadOnly (false);
    mixLabel->setScrollbarsShown (true);
    mixLabel->setCaretVisible (true);
    mixLabel->setPopupMenuEnabled (true);
    mixLabel->setText (TRANS("dry/wet\n"));

    addAndMakeVisible (distSlider = new Slider ("distSlider"));
    distSlider->setRange (0, 10, 0);
    distSlider->setSliderStyle (Slider::LinearHorizontal);
    distSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    distSlider->addListener (this);

    addAndMakeVisible (driveSlider = new Slider ("driveSlider"));
    driveSlider->setRange (0, 10, 0);
    driveSlider->setSliderStyle (Slider::LinearHorizontal);
    driveSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    driveSlider->addListener (this);

    addAndMakeVisible (modeSlider = new Slider ("modeSlider"));
    modeSlider->setRange (0, 10, 0);
    modeSlider->setSliderStyle (Slider::LinearHorizontal);
    modeSlider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    modeSlider->addListener (this);

    addAndMakeVisible (distLabel = new TextEditor ("distLabel"));
    distLabel->setMultiLine (false);
    distLabel->setReturnKeyStartsNewLine (false);
    distLabel->setReadOnly (false);
    distLabel->setScrollbarsShown (true);
    distLabel->setCaretVisible (true);
    distLabel->setPopupMenuEnabled (true);
    distLabel->setText (TRANS("Distortion"));

    addAndMakeVisible (driveLabel = new TextEditor ("driveLabel"));
    driveLabel->setMultiLine (false);
    driveLabel->setReturnKeyStartsNewLine (false);
    driveLabel->setReadOnly (false);
    driveLabel->setScrollbarsShown (true);
    driveLabel->setCaretVisible (true);
    driveLabel->setPopupMenuEnabled (true);
    driveLabel->setText (TRANS("Drive\n"));

    addAndMakeVisible (modeLabel = new TextEditor ("modeLabel"));
    modeLabel->setMultiLine (false);
    modeLabel->setReturnKeyStartsNewLine (false);
    modeLabel->setReadOnly (false);
    modeLabel->setScrollbarsShown (true);
    modeLabel->setCaretVisible (true);
    modeLabel->setPopupMenuEnabled (true);
    modeLabel->setText (TRANS("Drive\n"));


    //[UserPreSize]
    // Add any other settings not offered by GUI editor here, else they'll be deleted
	//these add double click functionality, double clicking resets position
    thresholdSlider ->setDoubleClickReturnValue(true, processor.DEFAULT_THRESHOLD);
    ratioSlider     ->setDoubleClickReturnValue(true, processor.DEFAULT_RATIO);
    attackSlider    ->setDoubleClickReturnValue(true, processor.DEFAULT_ATTACK * 1000.f);
    releaseSlider   ->setDoubleClickReturnValue(true, processor.DEFAULT_RELEASE * 1000.f);
	distSlider		->setDoubleClickReturnValue(true, processor.DEFAULT_DISTTHRESHOLD);
	driveSlider		->setDoubleClickReturnValue(true, processor.DEFAULT_DRIVE);
	mixSlider		->setDoubleClickReturnValue(true, processor.DEFAULT_MIX);

    thresholdSlider ->setTextValueSuffix("dB");
    ratioSlider     ->setTextValueSuffix(":1");
    attackSlider    ->setTextValueSuffix("ms");
    releaseSlider   ->setTextValueSuffix("ms");
	//subject to delete
	distSlider		->setTextValueSuffix("...");
	driveSlider		->setTextValueSuffix("...");
	mixSlider		->setTextValueSuffix("...");

    //[/UserPreSize]

    setSize (300, 400);


    //[Constructor] You can add your own custom stuff here..
    startTimer (50);
    //[/Constructor]
}

PluginAudioProcessorEditor::~PluginAudioProcessorEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..

   thresholdSlider = nullptr;
    ratioSlider = nullptr;
    ratioLabel = nullptr;
    thresholdLabel = nullptr;
    attackSlider = nullptr;
    attackLabel = nullptr;
    releaseSlider = nullptr;
    releaseLabel = nullptr;
    //slider = nullptr;
    //textEditor = nullptr;
	modeSlider = nullptr;
	distSlider = nullptr;
	driveSlider = nullptr;
	modeLabel = nullptr;
	distLabel = nullptr;
	driveLabel = nullptr;

    //[/Destructor_pre]

    thresholdSlider = nullptr;
    ratioSlider = nullptr;
    ratioLabel = nullptr;
    thresholdLabel = nullptr;
    attackSlider = nullptr;
    attackLabel = nullptr;
    releaseSlider = nullptr;
    releaseLabel = nullptr;
    mixSlider = nullptr;
    mixLabel = nullptr;
    distSlider = nullptr;
    driveSlider = nullptr;
    modeSlider = nullptr;
    distLabel = nullptr;
    driveLabel = nullptr;
    modeLabel = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    deleteAllChildren();    // Just in case you miss something (maybe unneeded)
    //[/Destructor]
}

//==============================================================================
void PluginAudioProcessorEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff010000));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void PluginAudioProcessorEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..


   /* thresholdSlider->setBounds (8, 40, 80, 88);
    ratioSlider->setBounds (8, 168, 80, 88);
    ratioLabel->setBounds (8, 136, 80, 24);
    thresholdLabel->setBounds (8, 8, 80, 24);
    attackSlider->setBounds (104, 40, 80, 88);
    attackLabel->setBounds (104, 8, 80, 24);
    releaseSlider->setBounds (104, 168, 80, 88);
    releaseLabel->setBounds (104, 136, 80, 24);
    slider->setBounds (16, 288, 150, 24);
    textEditor->setBounds (176, 288, 150, 24);
    mixSlider->setBounds (176, 288, 150, 24);
    driveSlider->setBounds (176, 288, 150, 24);
    modeButton->setBounds (176, 288, 150, 24);
    distSlider->setBounds (176, 288, 150, 24);
    distLabel->setBounds (60, 288, 150, 24);
    mixLabel->setBounds (80, 288, 150, 24);
    modeLabel->setBounds (65, 288, 150, 24);
    driveLabel->setBounds (76, 288, 150, 24); */

    //[/UserPreResize]

    thresholdSlider->setBounds (8, 40, 80, 88);
    ratioSlider->setBounds (8, 168, 80, 88);
    ratioLabel->setBounds (8, 136, 80, 24);
    thresholdLabel->setBounds (8, 8, 80, 24);
    attackSlider->setBounds (104, 40, 80, 88);
    attackLabel->setBounds (104, 8, 80, 24);
    releaseSlider->setBounds (104, 168, 80, 88);
    releaseLabel->setBounds (104, 136, 80, 24);
    mixSlider->setBounds (16, 288, 150, 24);
    mixLabel->setBounds (176, 288, 150, 24);
    distSlider->setBounds (16, 328, 150, 24);
    driveSlider->setBounds (16, 368, 150, 24);
    modeSlider->setBounds (16, 408, 150, 24);
    distLabel->setBounds (176, 328, 150, 24);
    driveLabel->setBounds (176, 368, 150, 24);
    modeLabel->setBounds (176, 408, 150, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void PluginAudioProcessorEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == thresholdSlider)
    {
        //[UserSliderCode_thresholdSlider] -- add your slider handling code here..
        normalizedValue = processor.userParams[processor.threshold].setWithUparam(sliderThatWasMoved->getValue());
        processor.setParameterNotifyingHost(processor.threshold, normalizedValue);
        //[/UserSliderCode_thresholdSlider]
    }
    else if (sliderThatWasMoved == ratioSlider)
    {
        //[UserSliderCode_ratioSlider] -- add your slider handling code here..
        normalizedValue = processor.userParams[processor.ratio].setWithUparam(sliderThatWasMoved->getValue());
        processor.setParameterNotifyingHost(processor.ratio, normalizedValue);
        //[/UserSliderCode_ratioSlider]
    }
    else if (sliderThatWasMoved == attackSlider)
    {
        //[UserSliderCode_attackSlider] -- add your slider handling code here..
        // Must convert to seconds before sending to processor
        normalizedValue = processor.userParams[processor.attack].setWithUparam(sliderThatWasMoved->getValue() / 1000.f);
        processor.setParameterNotifyingHost(processor.attack, normalizedValue);
        //[/UserSliderCode_attackSlider]
    }
    else if (sliderThatWasMoved == releaseSlider)
    {
        //[UserSliderCode_releaseSlider] -- add your slider handling code here..
        // Must convert to seconds before sending to processor
        normalizedValue = processor.userParams[processor.release].setWithUparam(sliderThatWasMoved->getValue() / 1000.f);
        processor.setParameterNotifyingHost(processor.release, normalizedValue);
        //[/UserSliderCode_releaseSlider]
    }
    else if (sliderThatWasMoved == mixSlider)
    {
        //[UserSliderCode_mixSlider] -- add your slider handling code here..
        normalizedValue = processor.userParams[processor.release].setWithUparam(sliderThatWasMoved->getValue() / 1000.f);
        processor.setParameterNotifyingHost(processor.release, normalizedValue);
        //[/UserSliderCode_mixSlider]
    }
    else if (sliderThatWasMoved == distSlider)
    {
        //[UserSliderCode_distSlider] -- add your slider handling code here..
        //[/UserSliderCode_distSlider]
    }
    else if (sliderThatWasMoved == driveSlider)
    {
        //[UserSliderCode_driveSlider] -- add your slider handling code here..
        //[/UserSliderCode_driveSlider]
    }
    else if (sliderThatWasMoved == modeSlider)
    {
        //[UserSliderCode_modeSlider] -- add your slider handling code here..
        //[/UserSliderCode_modeSlider]
    }

    //[UsersliderValueChanged_Post]
    else if (sliderThatWasMoved == driveSlider)
    {
        //[UserSliderCode_ratioSlider] -- add your slider handling code here..
        normalizedValue = processor.userParams[processor.ratio].setWithUparam(sliderThatWasMoved->getValue());
        processor.setParameterNotifyingHost(processor.ratio, normalizedValue);
        //[/UserSliderCode_ratioSlider]
    }
	else if (sliderThatWasMoved == distSlider)
	{
		//[UserSliderCode_attackSlider] -- add your slider handling code here..
		// Must convert to seconds before sending to processor
		normalizedValue = processor.userParams[processor.attack].setWithUparam(sliderThatWasMoved->getValue() / 1000.f);
		processor.setParameterNotifyingHost(processor.attack, normalizedValue);
		//[/UserSliderCode_attackSlider]
	}
	else if (sliderThatWasMoved == mixSlider)
	{
		//[UserSliderCode_attackSlider] -- add your slider handling code here..
		// Must convert to seconds before sending to processor
		normalizedValue = processor.userParams[processor.attack].setWithUparam(sliderThatWasMoved->getValue() / 1000.f);
		processor.setParameterNotifyingHost(processor.attack, normalizedValue);
	}
		//[/UserSliderCode_attackSlider]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void PluginAudioProcessorEditor::timerCallback() {
    // Set UI values to match any changes made by host automation
    // Timer conflicts cause UI stuttering, this is due to the values not being mapped back

    thresholdSlider ->setValue(processor.userParams[processor.threshold].getUparamVal(), dontSendNotification);
    ratioSlider     ->setValue(processor.userParams[processor.ratio].getUparamVal(), dontSendNotification);
    // Must convert to milliseconds before updating GUI
    attackSlider    ->setValue(processor.userParams[processor.attack].getUparamVal() * 1000.f, dontSendNotification);
    releaseSlider   ->setValue(processor.userParams[processor.release].getUparamVal() * 1000.f, dontSendNotification);
	distSlider		->setValue(processor.userParams[processor.distthreshold].getUparamVal() * 1000.f, dontSendNotification);
	driveSlider		->setValue(processor.userParams[processor.drive].getUparamVal() * 1000.f, dontSendNotification);
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="PluginAudioProcessorEditor"
                 componentName="" parentClasses="public AudioProcessorEditor, public Timer"
                 constructorParams="PluginAudioProcessor&amp; p" variableInitialisers="AudioProcessorEditor (&amp;p), processor (p)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="300" initialHeight="400">
  <BACKGROUND backgroundColour="ff010000"/>
  <SLIDER name="Threshold Slider" id="1e116366caad33a9" memberName="thresholdSlider"
          virtualName="" explicitFocusOrder="0" pos="8 40 80 88" bkgcol="ffffffff"
          thumbcol="ffffffff" trackcol="ffffffff" rotarysliderfill="ffffffff"
          rotaryslideroutline="ff7fff00" min="-20" max="0" int="0.010000000000000000208"
          style="RotaryHorizontalVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="Ratio Slider" id="fa177f4e096ea6ca" memberName="ratioSlider"
          virtualName="" explicitFocusOrder="0" pos="8 168 80 88" thumbcol="ffffffff"
          trackcol="ffffffff" rotarysliderfill="ffffffff" rotaryslideroutline="ff7fff00"
          min="1" max="10" int="0.010000000000000000208" style="RotaryHorizontalVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="Ratio Label" id="f294c64e2fc7b65a" memberName="ratioLabel"
         virtualName="" explicitFocusOrder="0" pos="8 136 80 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Ratio" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="16" bold="0" italic="0" justification="36"/>
  <LABEL name="Threshold Label" id="fb70f7ef7b840df7" memberName="thresholdLabel"
         virtualName="" explicitFocusOrder="0" pos="8 8 80 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Threshold" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="16" bold="0" italic="0" justification="36"/>
  <SLIDER name="Attack Slider" id="fbc71e13665cf008" memberName="attackSlider"
          virtualName="" explicitFocusOrder="0" pos="104 40 80 88" thumbcol="ffffffff"
          trackcol="ffffffff" rotarysliderfill="ffffffff" rotaryslideroutline="ff7fff00"
          min="0" max="100" int="0.010000000000000000208" style="RotaryHorizontalVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="Attack Label" id="7d7c9a4fc245a53" memberName="attackLabel"
         virtualName="" explicitFocusOrder="0" pos="104 8 80 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Attack" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="16" bold="0" italic="0" justification="36"/>
  <SLIDER name="Release Slider" id="a213a9ca4aa20bd9" memberName="releaseSlider"
          virtualName="" explicitFocusOrder="0" pos="104 168 80 88" thumbcol="ffffffff"
          trackcol="ffffffff" rotarysliderfill="ffffffff" rotaryslideroutline="ff7fff00"
          min="0" max="1000" int="0.010000000000000000208" style="RotaryHorizontalVerticalDrag"
          textBoxPos="TextBoxBelow" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="Release Label" id="41968c8967492114" memberName="releaseLabel"
         virtualName="" explicitFocusOrder="0" pos="104 136 80 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Release" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="16" bold="0" italic="0" justification="36"/>
  <SLIDER name="mixSlider" id="b62450b400d2b9ec" memberName="mixSlider"
          virtualName="" explicitFocusOrder="0" pos="16 288 150 24" min="0"
          max="10" int="0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <TEXTEDITOR name="mixLabel" id="5cd3dde1f4408833" memberName="mixLabel" virtualName=""
              explicitFocusOrder="0" pos="176 288 150 24" initialText="dry/wet&#10;"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <SLIDER name="distSlider" id="91d2d5a2580ba92f" memberName="distSlider"
          virtualName="" explicitFocusOrder="0" pos="16 328 150 24" min="0"
          max="10" int="0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="driveSlider" id="aeea53e4473ce099" memberName="driveSlider"
          virtualName="" explicitFocusOrder="0" pos="16 368 150 24" min="0"
          max="10" int="0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="modeSlider" id="3a4b65fabf8a1e02" memberName="modeSlider"
          virtualName="" explicitFocusOrder="0" pos="16 408 150 24" min="0"
          max="10" int="0" style="LinearHorizontal" textBoxPos="TextBoxLeft"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <TEXTEDITOR name="distLabel" id="108905b02273d32a" memberName="distLabel"
              virtualName="" explicitFocusOrder="0" pos="176 328 150 24" initialText="Distortion"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="driveLabel" id="b61a180c103e03a8" memberName="driveLabel"
              virtualName="" explicitFocusOrder="0" pos="176 368 150 24" initialText="Drive&#10;"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="modeLabel" id="3c9bd99d1b3917a9" memberName="modeLabel"
              virtualName="" explicitFocusOrder="0" pos="176 408 150 24" initialText="Drive&#10;"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
