#pragma once

#ifndef ANDROID_ICU_TEXT_SCIENTIFICNUMBERFORMATTER
#define ANDROID_ICU_TEXT_SCIENTIFICNUMBERFORMATTER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class DecimalFormat;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
}

namespace __jni_impl::android::icu::text
{
	class ScientificNumberFormatter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring format(jobject arg0);
		static QAndroidJniObject getSuperscriptInstance(__jni_impl::android::icu::text::DecimalFormat arg0);
		static QAndroidJniObject getSuperscriptInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getMarkupInstance(__jni_impl::android::icu::util::ULocale arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject getMarkupInstance(__jni_impl::android::icu::text::DecimalFormat arg0, jstring arg1, jstring arg2);
	};
} // namespace __jni_impl::android::icu::text

#include "DecimalFormat.hpp"
#include "../util/ULocale.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void ScientificNumberFormatter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.ScientificNumberFormatter",
			"(V)V");
	}
	
	// Methods
	jstring ScientificNumberFormatter::format(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject ScientificNumberFormatter::getSuperscriptInstance(__jni_impl::android::icu::text::DecimalFormat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ScientificNumberFormatter",
			"getSuperscriptInstance",
			"(Landroid/icu/text/DecimalFormat;)Landroid/icu/text/ScientificNumberFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ScientificNumberFormatter::getSuperscriptInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ScientificNumberFormatter",
			"getSuperscriptInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/ScientificNumberFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ScientificNumberFormatter::getMarkupInstance(__jni_impl::android::icu::util::ULocale arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ScientificNumberFormatter",
			"getMarkupInstance",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/ScientificNumberFormatter;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ScientificNumberFormatter::getMarkupInstance(__jni_impl::android::icu::text::DecimalFormat arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.ScientificNumberFormatter",
			"getMarkupInstance",
			"(Landroid/icu/text/DecimalFormat;Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/ScientificNumberFormatter;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class ScientificNumberFormatter : public __jni_impl::android::icu::text::ScientificNumberFormatter
	{
	public:
		ScientificNumberFormatter(QAndroidJniObject obj) { __thiz = obj; }
		ScientificNumberFormatter()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_SCIENTIFICNUMBERFORMATTER

