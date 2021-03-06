#pragma once

#ifndef ANDROID_MEDIA_MIDI_MIDIDEVICE
#define ANDROID_MEDIA_MIDI_MIDIDEVICE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::midi
{
	class MidiInputPort;
}
namespace __jni_impl::android::media::midi
{
	class MidiOutputPort;
}
namespace __jni_impl::android::media::midi
{
	class MidiDevice_MidiConnection;
}
namespace __jni_impl::android::media::midi
{
	class MidiDeviceInfo;
}

namespace __jni_impl::android::media::midi
{
	class MidiDevice : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		void close();
		QAndroidJniObject openInputPort(jint arg0);
		QAndroidJniObject openOutputPort(jint arg0);
		QAndroidJniObject connectPorts(__jni_impl::android::media::midi::MidiInputPort arg0, jint arg1);
		QAndroidJniObject getInfo();
	};
} // namespace __jni_impl::android::media::midi

#include "MidiInputPort.hpp"
#include "MidiOutputPort.hpp"
#include "MidiDevice_MidiConnection.hpp"
#include "MidiDeviceInfo.hpp"

namespace __jni_impl::android::media::midi
{
	// Fields
	
	// Constructors
	void MidiDevice::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.midi.MidiDevice",
			"(V)V");
	}
	
	// Methods
	jstring MidiDevice::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MidiDevice::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject MidiDevice::openInputPort(jint arg0)
	{
		return __thiz.callObjectMethod(
			"openInputPort",
			"(I)Landroid/media/midi/MidiInputPort;",
			arg0
		);
	}
	QAndroidJniObject MidiDevice::openOutputPort(jint arg0)
	{
		return __thiz.callObjectMethod(
			"openOutputPort",
			"(I)Landroid/media/midi/MidiOutputPort;",
			arg0
		);
	}
	QAndroidJniObject MidiDevice::connectPorts(__jni_impl::android::media::midi::MidiInputPort arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"connectPorts",
			"(Landroid/media/midi/MidiInputPort;I)Landroid/media/midi/MidiDevice$MidiConnection;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject MidiDevice::getInfo()
	{
		return __thiz.callObjectMethod(
			"getInfo",
			"()Landroid/media/midi/MidiDeviceInfo;"
		);
	}
} // namespace __jni_impl::android::media::midi

namespace android::media::midi
{
	class MidiDevice : public __jni_impl::android::media::midi::MidiDevice
	{
	public:
		MidiDevice(QAndroidJniObject obj) { __thiz = obj; }
		MidiDevice()
		{
			__constructor();
		}
	};
} // namespace android::media::midi

#endif // ANDROID_MEDIA_MIDI_MIDIDEVICE

