#pragma once

#ifndef ANDROID_ICU_TEXT_COLLATOR
#define ANDROID_ICU_TEXT_COLLATOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::android::icu::util
{
	class VersionInfo;
}
namespace __jni_impl::android::icu::text
{
	class CollationKey;
}
namespace __jni_impl::android::icu::text
{
	class UnicodeSet;
}

namespace __jni_impl::android::icu::text
{
	class Collator : public __JniBaseClass
	{
	public:
		// Fields
		static jint CANONICAL_DECOMPOSITION();
		static jint FULL_DECOMPOSITION();
		static jint IDENTICAL();
		static jint NO_DECOMPOSITION();
		static jint PRIMARY();
		static jint QUATERNARY();
		static jint SECONDARY();
		static jint TERTIARY();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jstring arg0, jstring arg1);
		jboolean equals(jobject arg0);
		jint hashCode();
		jobject clone();
		jint compare(jobject arg0, jobject arg1);
		jint compare(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance();
		jboolean isFrozen();
		QAndroidJniObject freeze();
		static jarray getAvailableLocales();
		QAndroidJniObject getVersion();
		static jstring getDisplayName(__jni_impl::java::util::Locale arg0, __jni_impl::java::util::Locale arg1);
		static jstring getDisplayName(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::util::ULocale arg1);
		static jstring getDisplayName(__jni_impl::java::util::Locale arg0);
		static jstring getDisplayName(__jni_impl::android::icu::util::ULocale arg0);
		static jarray getKeywords();
		QAndroidJniObject getCollationKey(jstring arg0);
		void setStrength(jint arg0);
		QAndroidJniObject cloneAsThawed();
		void setDecomposition(jint arg0);
		QAndroidJniObject setMaxVariable(jint arg0);
		jint getMaxVariable();
		void setReorderCodes(jintArray arg0);
		QAndroidJniObject getTailoredSet();
		jint getStrength();
		jint getDecomposition();
		jint getVariableTop();
		jintArray getReorderCodes();
		QAndroidJniObject getUCAVersion();
		static jarray getAvailableULocales();
		static jarray getKeywordValues(jstring arg0);
		static jarray getKeywordValuesForLocale(jstring arg0, __jni_impl::android::icu::util::ULocale arg1, jboolean arg2);
		static QAndroidJniObject getFunctionalEquivalent(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		static QAndroidJniObject getFunctionalEquivalent(jstring arg0, __jni_impl::android::icu::util::ULocale arg1, jbooleanArray arg2);
		static jintArray getEquivalentReorderCodes(jint arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "../../../java/util/Locale.hpp"
#include "../util/ULocale.hpp"
#include "../util/VersionInfo.hpp"
#include "CollationKey.hpp"
#include "UnicodeSet.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	jint Collator::CANONICAL_DECOMPOSITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Collator",
			"CANONICAL_DECOMPOSITION"
		);
	}
	jint Collator::FULL_DECOMPOSITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Collator",
			"FULL_DECOMPOSITION"
		);
	}
	jint Collator::IDENTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Collator",
			"IDENTICAL"
		);
	}
	jint Collator::NO_DECOMPOSITION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Collator",
			"NO_DECOMPOSITION"
		);
	}
	jint Collator::PRIMARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Collator",
			"PRIMARY"
		);
	}
	jint Collator::QUATERNARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Collator",
			"QUATERNARY"
		);
	}
	jint Collator::SECONDARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Collator",
			"SECONDARY"
		);
	}
	jint Collator::TERTIARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.Collator",
			"TERTIARY"
		);
	}
	
	// Constructors
	void Collator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.Collator",
			"(V)V");
	}
	
	// Methods
	jboolean Collator::equals(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jboolean Collator::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Collator::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject Collator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Collator::compare(jobject arg0, jobject arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljava/lang/Object;Ljava/lang/Object;)I",
			arg0,
			arg1
		);
	}
	jint Collator::compare(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"compare",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Collator::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/Collator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collator::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/Collator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Collator::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getInstance",
			"()Landroid/icu/text/Collator;"
		);
	}
	jboolean Collator::isFrozen()
	{
		return __thiz.callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	QAndroidJniObject Collator::freeze()
	{
		return __thiz.callObjectMethod(
			"freeze",
			"()Landroid/icu/text/Collator;"
		);
	}
	jarray Collator::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	QAndroidJniObject Collator::getVersion()
	{
		return __thiz.callObjectMethod(
			"getVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	jstring Collator::getDisplayName(__jni_impl::java::util::Locale arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getDisplayName",
			"(Ljava/util/Locale;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring Collator::getDisplayName(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getDisplayName",
			"(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring Collator::getDisplayName(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Collator::getDisplayName(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getDisplayName",
			"(Landroid/icu/util/ULocale;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jarray Collator::getKeywords()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getKeywords",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject Collator::getCollationKey(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCollationKey",
			"(Ljava/lang/String;)Landroid/icu/text/CollationKey;",
			arg0
		);
	}
	void Collator::setStrength(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStrength",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject Collator::cloneAsThawed()
	{
		return __thiz.callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/Collator;"
		);
	}
	void Collator::setDecomposition(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDecomposition",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject Collator::setMaxVariable(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMaxVariable",
			"(I)Landroid/icu/text/Collator;",
			arg0
		);
	}
	jint Collator::getMaxVariable()
	{
		return __thiz.callMethod<jint>(
			"getMaxVariable",
			"()I"
		);
	}
	void Collator::setReorderCodes(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"setReorderCodes",
			"([I)V",
			arg0
		);
	}
	QAndroidJniObject Collator::getTailoredSet()
	{
		return __thiz.callObjectMethod(
			"getTailoredSet",
			"()Landroid/icu/text/UnicodeSet;"
		);
	}
	jint Collator::getStrength()
	{
		return __thiz.callMethod<jint>(
			"getStrength",
			"()I"
		);
	}
	jint Collator::getDecomposition()
	{
		return __thiz.callMethod<jint>(
			"getDecomposition",
			"()I"
		);
	}
	jint Collator::getVariableTop()
	{
		return __thiz.callMethod<jint>(
			"getVariableTop",
			"()I"
		);
	}
	jintArray Collator::getReorderCodes()
	{
		return __thiz.callObjectMethod(
			"getReorderCodes",
			"()[I"
		).object<jintArray>();
	}
	QAndroidJniObject Collator::getUCAVersion()
	{
		return __thiz.callObjectMethod(
			"getUCAVersion",
			"()Landroid/icu/util/VersionInfo;"
		);
	}
	jarray Collator::getAvailableULocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getAvailableULocales",
			"()[Landroid/icu/util/ULocale;"
		).object<jarray>();
	}
	jarray Collator::getKeywordValues(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getKeywordValues",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jarray Collator::getKeywordValuesForLocale(jstring arg0, __jni_impl::android::icu::util::ULocale arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getKeywordValuesForLocale",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;Z)[Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		).object<jarray>();
	}
	QAndroidJniObject Collator::getFunctionalEquivalent(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getFunctionalEquivalent",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Collator::getFunctionalEquivalent(jstring arg0, __jni_impl::android::icu::util::ULocale arg1, jbooleanArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getFunctionalEquivalent",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	jintArray Collator::getEquivalentReorderCodes(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Collator",
			"getEquivalentReorderCodes",
			"(I)[I",
			arg0
		).object<jintArray>();
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class Collator : public __jni_impl::android::icu::text::Collator
	{
	public:
		Collator(QAndroidJniObject obj) { __thiz = obj; }
		Collator()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_COLLATOR

