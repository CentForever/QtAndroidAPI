#pragma once

#ifndef ANDROID_MEDIA_BROWSE_MEDIABROWSER_MEDIAITEM
#define ANDROID_MEDIA_BROWSE_MEDIABROWSER_MEDIAITEM

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaDescription;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::media::browse
{
	class MediaBrowser_MediaItem : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_BROWSABLE();
		static jint FLAG_PLAYABLE();
		
		// Constructors
		void __constructor(__jni_impl::android::media::MediaDescription arg0, jint arg1);
		
		// Methods
		jstring toString();
		jint getFlags();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jboolean isBrowsable();
		jboolean isPlayable();
		jstring getMediaId();
		QAndroidJniObject getDescription();
	};
} // namespace __jni_impl::android::media::browse

#include "../MediaDescription.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::media::browse
{
	// Fields
	QAndroidJniObject MediaBrowser_MediaItem::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.browse.MediaBrowser$MediaItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint MediaBrowser_MediaItem::FLAG_BROWSABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.browse.MediaBrowser$MediaItem",
			"FLAG_BROWSABLE"
		);
	}
	jint MediaBrowser_MediaItem::FLAG_PLAYABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.browse.MediaBrowser$MediaItem",
			"FLAG_PLAYABLE"
		);
	}
	
	// Constructors
	void MediaBrowser_MediaItem::__constructor(__jni_impl::android::media::MediaDescription arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.browse.MediaBrowser$MediaItem",
			"(Landroid/media/MediaDescription;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	jstring MediaBrowser_MediaItem::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaBrowser_MediaItem::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jint MediaBrowser_MediaItem::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void MediaBrowser_MediaItem::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean MediaBrowser_MediaItem::isBrowsable()
	{
		return __thiz.callMethod<jboolean>(
			"isBrowsable",
			"()Z"
		);
	}
	jboolean MediaBrowser_MediaItem::isPlayable()
	{
		return __thiz.callMethod<jboolean>(
			"isPlayable",
			"()Z"
		);
	}
	jstring MediaBrowser_MediaItem::getMediaId()
	{
		return __thiz.callObjectMethod(
			"getMediaId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaBrowser_MediaItem::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Landroid/media/MediaDescription;"
		);
	}
} // namespace __jni_impl::android::media::browse

namespace android::media::browse
{
	class MediaBrowser_MediaItem : public __jni_impl::android::media::browse::MediaBrowser_MediaItem
	{
	public:
		MediaBrowser_MediaItem(QAndroidJniObject obj) { __thiz = obj; }
		MediaBrowser_MediaItem(__jni_impl::android::media::MediaDescription arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media::browse

#endif // ANDROID_MEDIA_BROWSE_MEDIABROWSER_MEDIAITEM

