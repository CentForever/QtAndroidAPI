#pragma once

#ifndef ORG_XML_SAX_HELPERS_ATTRIBUTELISTIMPL
#define ORG_XML_SAX_HELPERS_ATTRIBUTELISTIMPL

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::org::xml::sax::helpers
{
	class AttributeListImpl : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jstring getName(jint arg0);
		jint getLength();
		void clear();
		jstring getValue(jint arg0);
		jstring getValue(jstring arg0);
		jstring getType(jint arg0);
		jstring getType(jstring arg0);
		void addAttribute(jstring arg0, jstring arg1, jstring arg2);
		void setAttributeList(__jni_impl::__JniBaseClass arg0);
		void removeAttribute(jstring arg0);
	};
} // namespace __jni_impl::org::xml::sax::helpers


namespace __jni_impl::org::xml::sax::helpers
{
	// Fields
	
	// Constructors
	void AttributeListImpl::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.AttributeListImpl",
			"()V");
	}
	void AttributeListImpl::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.AttributeListImpl",
			"(Lorg/xml/sax/AttributeList;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jstring AttributeListImpl::getName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint AttributeListImpl::getLength()
	{
		return __thiz.callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	void AttributeListImpl::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jstring AttributeListImpl::getValue(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributeListImpl::getValue(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributeListImpl::getType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributeListImpl::getType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void AttributeListImpl::addAttribute(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"addAttribute",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void AttributeListImpl::setAttributeList(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAttributeList",
			"(Lorg/xml/sax/AttributeList;)V",
			arg0.__jniObject().object()
		);
	}
	void AttributeListImpl::removeAttribute(jstring arg0)
	{
		__thiz.callMethod<void>(
			"removeAttribute",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace __jni_impl::org::xml::sax::helpers

namespace org::xml::sax::helpers
{
	class AttributeListImpl : public __jni_impl::org::xml::sax::helpers::AttributeListImpl
	{
	public:
		AttributeListImpl(QAndroidJniObject obj) { __thiz = obj; }
		AttributeListImpl()
		{
			__constructor();
		}
		AttributeListImpl(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace org::xml::sax::helpers

#endif // ORG_XML_SAX_HELPERS_ATTRIBUTELISTIMPL

