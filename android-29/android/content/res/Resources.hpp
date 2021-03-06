#pragma once

#ifndef ANDROID_CONTENT_RES_RESOURCES
#define ANDROID_CONTENT_RES_RESOURCES

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class AssetManager;
}
namespace __jni_impl::android::util
{
	class DisplayMetrics;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}
namespace __jni_impl::android::util
{
	class TypedValue;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::graphics
{
	class Typeface;
}
namespace __jni_impl::android::content::res
{
	class TypedArray;
}
namespace __jni_impl::android::graphics
{
	class Movie;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::android::content::res
{
	class AssetFileDescriptor;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::content::res
{
	class Resources : public __JniBaseClass
	{
	public:
		// Fields
		static jint ID_NULL();
		
		// Constructors
		void __constructor(__jni_impl::android::content::res::AssetManager arg0, __jni_impl::android::util::DisplayMetrics arg1, __jni_impl::android::content::res::Configuration arg2);
		
		// Methods
		jboolean getBoolean(jint arg0);
		jfloat getFloat(jint arg0);
		void getValue(jint arg0, __jni_impl::android::util::TypedValue arg1, jboolean arg2);
		void getValue(jstring arg0, __jni_impl::android::util::TypedValue arg1, jboolean arg2);
		jint getInteger(jint arg0);
		void updateConfiguration(__jni_impl::android::content::res::Configuration arg0, __jni_impl::android::util::DisplayMetrics arg1);
		jstring getString(jint arg0, jobjectArray arg1);
		jstring getString(jint arg0);
		jarray getStringArray(jint arg0);
		jstring getText(jint arg0);
		jstring getText(jint arg0, jstring arg1);
		jint getIdentifier(jstring arg0, jstring arg1, jstring arg2);
		QAndroidJniObject getAssets();
		jint getColor(jint arg0);
		jint getColor(jint arg0, __jni_impl::android::content::res::Resources_Theme arg1);
		QAndroidJniObject getDrawable(jint arg0, __jni_impl::android::content::res::Resources_Theme arg1);
		QAndroidJniObject getDrawable(jint arg0);
		QAndroidJniObject getColorStateList(jint arg0, __jni_impl::android::content::res::Resources_Theme arg1);
		QAndroidJniObject getColorStateList(jint arg0);
		jintArray getIntArray(jint arg0);
		jstring getQuantityText(jint arg0, jint arg1);
		static QAndroidJniObject getSystem();
		QAndroidJniObject getFont(jint arg0);
		jstring getQuantityString(jint arg0, jint arg1);
		jstring getQuantityString(jint arg0, jint arg1, jobjectArray arg2);
		jarray getTextArray(jint arg0);
		QAndroidJniObject obtainTypedArray(jint arg0);
		jfloat getDimension(jint arg0);
		jint getDimensionPixelOffset(jint arg0);
		jint getDimensionPixelSize(jint arg0);
		jfloat getFraction(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject getDrawableForDensity(jint arg0, jint arg1, __jni_impl::android::content::res::Resources_Theme arg2);
		QAndroidJniObject getDrawableForDensity(jint arg0, jint arg1);
		QAndroidJniObject getMovie(jint arg0);
		QAndroidJniObject getLayout(jint arg0);
		QAndroidJniObject getAnimation(jint arg0);
		QAndroidJniObject getXml(jint arg0);
		QAndroidJniObject openRawResource(jint arg0);
		QAndroidJniObject openRawResource(jint arg0, __jni_impl::android::util::TypedValue arg1);
		QAndroidJniObject openRawResourceFd(jint arg0);
		void getValueForDensity(jint arg0, jint arg1, __jni_impl::android::util::TypedValue arg2, jboolean arg3);
		static jint getAttributeSetSourceResId(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject newTheme();
		QAndroidJniObject obtainAttributes(__jni_impl::__JniBaseClass arg0, jintArray arg1);
		QAndroidJniObject getDisplayMetrics();
		QAndroidJniObject getConfiguration();
		jstring getResourceName(jint arg0);
		jstring getResourcePackageName(jint arg0);
		jstring getResourceTypeName(jint arg0);
		jstring getResourceEntryName(jint arg0);
		void parseBundleExtras(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Bundle arg1);
		void parseBundleExtra(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Bundle arg2);
		void flushLayoutCache();
		void finishPreloading();
	};
} // namespace __jni_impl::android::content::res

#include "AssetManager.hpp"
#include "../../util/DisplayMetrics.hpp"
#include "Configuration.hpp"
#include "../../util/TypedValue.hpp"
#include "Resources_Theme.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "ColorStateList.hpp"
#include "../../graphics/Typeface.hpp"
#include "TypedArray.hpp"
#include "../../graphics/Movie.hpp"
#include "../../../java/io/InputStream.hpp"
#include "AssetFileDescriptor.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::content::res
{
	// Fields
	jint Resources::ID_NULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.res.Resources",
			"ID_NULL"
		);
	}
	
	// Constructors
	void Resources::__constructor(__jni_impl::android::content::res::AssetManager arg0, __jni_impl::android::util::DisplayMetrics arg1, __jni_impl::android::content::res::Configuration arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.res.Resources",
			"(Landroid/content/res/AssetManager;Landroid/util/DisplayMetrics;Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	
	// Methods
	jboolean Resources::getBoolean(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getBoolean",
			"(I)Z",
			arg0
		);
	}
	jfloat Resources::getFloat(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	void Resources::getValue(jint arg0, __jni_impl::android::util::TypedValue arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"getValue",
			"(ILandroid/util/TypedValue;Z)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Resources::getValue(jstring arg0, __jni_impl::android::util::TypedValue arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"getValue",
			"(Ljava/lang/String;Landroid/util/TypedValue;Z)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	jint Resources::getInteger(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getInteger",
			"(I)I",
			arg0
		);
	}
	void Resources::updateConfiguration(__jni_impl::android::content::res::Configuration arg0, __jni_impl::android::util::DisplayMetrics arg1)
	{
		__thiz.callMethod<void>(
			"updateConfiguration",
			"(Landroid/content/res/Configuration;Landroid/util/DisplayMetrics;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jstring Resources::getString(jint arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Resources::getString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jarray Resources::getStringArray(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getStringArray",
			"(I)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jstring Resources::getText(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring Resources::getText(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getText",
			"(ILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jint Resources::getIdentifier(jstring arg0, jstring arg1, jstring arg2)
	{
		return __thiz.callMethod<jint>(
			"getIdentifier",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Resources::getAssets()
	{
		return __thiz.callObjectMethod(
			"getAssets",
			"()Landroid/content/res/AssetManager;"
		);
	}
	jint Resources::getColor(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"(I)I",
			arg0
		);
	}
	jint Resources::getColor(jint arg0, __jni_impl::android::content::res::Resources_Theme arg1)
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"(ILandroid/content/res/Resources$Theme;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Resources::getDrawable(jint arg0, __jni_impl::android::content::res::Resources_Theme arg1)
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"(ILandroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Resources::getDrawable(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	QAndroidJniObject Resources::getColorStateList(jint arg0, __jni_impl::android::content::res::Resources_Theme arg1)
	{
		return __thiz.callObjectMethod(
			"getColorStateList",
			"(ILandroid/content/res/Resources$Theme;)Landroid/content/res/ColorStateList;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Resources::getColorStateList(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getColorStateList",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	jintArray Resources::getIntArray(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getIntArray",
			"(I)[I",
			arg0
		).object<jintArray>();
	}
	jstring Resources::getQuantityText(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getQuantityText",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	QAndroidJniObject Resources::getSystem()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.res.Resources",
			"getSystem",
			"()Landroid/content/res/Resources;"
		);
	}
	QAndroidJniObject Resources::getFont(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getFont",
			"(I)Landroid/graphics/Typeface;",
			arg0
		);
	}
	jstring Resources::getQuantityString(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getQuantityString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Resources::getQuantityString(jint arg0, jint arg1, jobjectArray arg2)
	{
		return __thiz.callObjectMethod(
			"getQuantityString",
			"(II[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jarray Resources::getTextArray(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTextArray",
			"(I)[Ljava/lang/CharSequence;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject Resources::obtainTypedArray(jint arg0)
	{
		return __thiz.callObjectMethod(
			"obtainTypedArray",
			"(I)Landroid/content/res/TypedArray;",
			arg0
		);
	}
	jfloat Resources::getDimension(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getDimension",
			"(I)F",
			arg0
		);
	}
	jint Resources::getDimensionPixelOffset(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getDimensionPixelOffset",
			"(I)I",
			arg0
		);
	}
	jint Resources::getDimensionPixelSize(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getDimensionPixelSize",
			"(I)I",
			arg0
		);
	}
	jfloat Resources::getFraction(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jfloat>(
			"getFraction",
			"(III)F",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Resources::getDrawableForDensity(jint arg0, jint arg1, __jni_impl::android::content::res::Resources_Theme arg2)
	{
		return __thiz.callObjectMethod(
			"getDrawableForDensity",
			"(IILandroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Resources::getDrawableForDensity(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getDrawableForDensity",
			"(II)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Resources::getMovie(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getMovie",
			"(I)Landroid/graphics/Movie;",
			arg0
		);
	}
	QAndroidJniObject Resources::getLayout(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLayout",
			"(I)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	QAndroidJniObject Resources::getAnimation(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAnimation",
			"(I)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	QAndroidJniObject Resources::getXml(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getXml",
			"(I)Landroid/content/res/XmlResourceParser;",
			arg0
		);
	}
	QAndroidJniObject Resources::openRawResource(jint arg0)
	{
		return __thiz.callObjectMethod(
			"openRawResource",
			"(I)Ljava/io/InputStream;",
			arg0
		);
	}
	QAndroidJniObject Resources::openRawResource(jint arg0, __jni_impl::android::util::TypedValue arg1)
	{
		return __thiz.callObjectMethod(
			"openRawResource",
			"(ILandroid/util/TypedValue;)Ljava/io/InputStream;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Resources::openRawResourceFd(jint arg0)
	{
		return __thiz.callObjectMethod(
			"openRawResourceFd",
			"(I)Landroid/content/res/AssetFileDescriptor;",
			arg0
		);
	}
	void Resources::getValueForDensity(jint arg0, jint arg1, __jni_impl::android::util::TypedValue arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
			"getValueForDensity",
			"(IILandroid/util/TypedValue;Z)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	jint Resources::getAttributeSetSourceResId(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.content.res.Resources",
			"getAttributeSetSourceResId",
			"(Landroid/util/AttributeSet;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Resources::newTheme()
	{
		return __thiz.callObjectMethod(
			"newTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	QAndroidJniObject Resources::obtainAttributes(__jni_impl::__JniBaseClass arg0, jintArray arg1)
	{
		return __thiz.callObjectMethod(
			"obtainAttributes",
			"(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Resources::getDisplayMetrics()
	{
		return __thiz.callObjectMethod(
			"getDisplayMetrics",
			"()Landroid/util/DisplayMetrics;"
		);
	}
	QAndroidJniObject Resources::getConfiguration()
	{
		return __thiz.callObjectMethod(
			"getConfiguration",
			"()Landroid/content/res/Configuration;"
		);
	}
	jstring Resources::getResourceName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getResourceName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Resources::getResourcePackageName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getResourcePackageName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Resources::getResourceTypeName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getResourceTypeName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Resources::getResourceEntryName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getResourceEntryName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void Resources::parseBundleExtras(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"parseBundleExtras",
			"(Landroid/content/res/XmlResourceParser;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Resources::parseBundleExtra(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"parseBundleExtra",
			"(Ljava/lang/String;Landroid/util/AttributeSet;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Resources::flushLayoutCache()
	{
		__thiz.callMethod<void>(
			"flushLayoutCache",
			"()V"
		);
	}
	void Resources::finishPreloading()
	{
		__thiz.callMethod<void>(
			"finishPreloading",
			"()V"
		);
	}
} // namespace __jni_impl::android::content::res

namespace android::content::res
{
	class Resources : public __jni_impl::android::content::res::Resources
	{
	public:
		Resources(QAndroidJniObject obj) { __thiz = obj; }
		Resources(__jni_impl::android::content::res::AssetManager arg0, __jni_impl::android::util::DisplayMetrics arg1, __jni_impl::android::content::res::Configuration arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::content::res

#endif // ANDROID_CONTENT_RES_RESOURCES

