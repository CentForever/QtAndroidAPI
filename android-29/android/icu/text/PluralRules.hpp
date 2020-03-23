#pragma once

#ifndef ANDROID_ICU_TEXT_PLURALRULES
#define ANDROID_ICU_TEXT_PLURALRULES

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::text
{
	class PluralRules_PluralType;
}

namespace __jni_impl::android::icu::text
{
	class PluralRules : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DEFAULT();
		static QAndroidJniObject KEYWORD_FEW();
		static QAndroidJniObject KEYWORD_MANY();
		static QAndroidJniObject KEYWORD_ONE();
		static QAndroidJniObject KEYWORD_OTHER();
		static QAndroidJniObject KEYWORD_TWO();
		static QAndroidJniObject KEYWORD_ZERO();
		static jdouble NO_UNIQUE_VALUE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jboolean equals(__jni_impl::android::icu::text::PluralRules arg0);
		QAndroidJniObject toString();
		jint hashCode();
		static QAndroidJniObject parseDescription(jstring arg0);
		static QAndroidJniObject createRules(jstring arg0);
		jdouble getUniqueKeywordValue(jstring arg0);
		QAndroidJniObject getAllKeywordValues(jstring arg0);
		QAndroidJniObject getSamples(jstring arg0);
		QAndroidJniObject select(jdouble arg0);
		static QAndroidJniObject forLocale(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject forLocale(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject forLocale(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::PluralRules_PluralType arg1);
		static QAndroidJniObject forLocale(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::PluralRules_PluralType arg1);
		QAndroidJniObject getKeywords();
	};
} // namespace __jni_impl::android::icu::text

#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "PluralRules_PluralType.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject PluralRules::DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules",
			"DEFAULT",
			"Landroid/icu/text/PluralRules;");
	}
	QAndroidJniObject PluralRules::KEYWORD_FEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_FEW",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PluralRules::KEYWORD_MANY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_MANY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PluralRules::KEYWORD_ONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_ONE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PluralRules::KEYWORD_OTHER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_OTHER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PluralRules::KEYWORD_TWO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_TWO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PluralRules::KEYWORD_ZERO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.PluralRules",
			"KEYWORD_ZERO",
			"Ljava/lang/String;");
	}
	jdouble PluralRules::NO_UNIQUE_VALUE()
	{
		return QAndroidJniObject::getStaticField<jdouble>(
			"android.icu.text.PluralRules",
			"NO_UNIQUE_VALUE");
	}
	
	// Constructors
	void PluralRules::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralRules",
			"(V)V");
	}
	
	// Methods
	jboolean PluralRules::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jboolean PluralRules::equals(__jni_impl::android::icu::text::PluralRules arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Landroid/icu/text/PluralRules;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PluralRules::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint PluralRules::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject PluralRules::parseDescription(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"parseDescription",
			"(Ljava/lang/String;)Landroid/icu/text/PluralRules;",
			arg0);
	}
	QAndroidJniObject PluralRules::createRules(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"createRules",
			"(Ljava/lang/String;)Landroid/icu/text/PluralRules;",
			arg0);
	}
	jdouble PluralRules::getUniqueKeywordValue(jstring arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getUniqueKeywordValue",
			"(Ljava/lang/String;)D",
			arg0);
	}
	QAndroidJniObject PluralRules::getAllKeywordValues(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAllKeywordValues",
			"(Ljava/lang/String;)Ljava/util/Collection;",
			arg0);
	}
	QAndroidJniObject PluralRules::getSamples(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSamples",
			"(Ljava/lang/String;)Ljava/util/Collection;",
			arg0);
	}
	QAndroidJniObject PluralRules::select(jdouble arg0)
	{
		return __thiz.callObjectMethod(
			"select",
			"(D)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject PluralRules::forLocale(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/PluralRules;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PluralRules::forLocale(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Ljava/util/Locale;)Landroid/icu/text/PluralRules;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PluralRules::forLocale(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::PluralRules_PluralType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;)Landroid/icu/text/PluralRules;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject PluralRules::forLocale(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::PluralRules_PluralType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.PluralRules",
			"forLocale",
			"(Ljava/util/Locale;Landroid/icu/text/PluralRules$PluralType;)Landroid/icu/text/PluralRules;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject PluralRules::getKeywords()
	{
		return __thiz.callObjectMethod(
			"getKeywords",
			"()Ljava/util/Set;");
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class PluralRules : public __jni_impl::android::icu::text::PluralRules
	{
	public:
		PluralRules(QAndroidJniObject obj) { __thiz = obj; }
		PluralRules()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_PLURALRULES
