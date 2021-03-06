#pragma once

#ifndef JAVA_LANG_PROCESSBUILDER
#define JAVA_LANG_PROCESSBUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::lang
{
	class Process;
}
namespace __jni_impl::java::lang
{
	class ProcessBuilder_Redirect;
}

namespace __jni_impl::java::lang
{
	class ProcessBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jarray arg0);
		
		// Methods
		QAndroidJniObject directory(__jni_impl::java::io::File arg0);
		QAndroidJniObject directory();
		QAndroidJniObject start();
		QAndroidJniObject environment();
		QAndroidJniObject command();
		QAndroidJniObject command(jarray arg0);
		QAndroidJniObject command(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject redirectInput();
		QAndroidJniObject redirectInput(__jni_impl::java::io::File arg0);
		QAndroidJniObject redirectInput(__jni_impl::java::lang::ProcessBuilder_Redirect arg0);
		QAndroidJniObject redirectOutput(__jni_impl::java::lang::ProcessBuilder_Redirect arg0);
		QAndroidJniObject redirectOutput();
		QAndroidJniObject redirectOutput(__jni_impl::java::io::File arg0);
		QAndroidJniObject redirectError(__jni_impl::java::io::File arg0);
		QAndroidJniObject redirectError();
		QAndroidJniObject redirectError(__jni_impl::java::lang::ProcessBuilder_Redirect arg0);
		QAndroidJniObject redirectErrorStream(jboolean arg0);
		jboolean redirectErrorStream();
		QAndroidJniObject inheritIO();
		static QAndroidJniObject startPipeline(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::lang

#include "../io/File.hpp"
#include "Process.hpp"
#include "ProcessBuilder_Redirect.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void ProcessBuilder::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ProcessBuilder",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object());
	}
	void ProcessBuilder::__constructor(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ProcessBuilder",
			"([Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject ProcessBuilder::directory(__jni_impl::java::io::File arg0)
	{
		return __thiz.callObjectMethod(
			"directory",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ProcessBuilder::directory()
	{
		return __thiz.callObjectMethod(
			"directory",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject ProcessBuilder::start()
	{
		return __thiz.callObjectMethod(
			"start",
			"()Ljava/lang/Process;"
		);
	}
	QAndroidJniObject ProcessBuilder::environment()
	{
		return __thiz.callObjectMethod(
			"environment",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject ProcessBuilder::command()
	{
		return __thiz.callObjectMethod(
			"command",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject ProcessBuilder::command(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"command",
			"([Ljava/lang/String;)Ljava/lang/ProcessBuilder;",
			arg0
		);
	}
	QAndroidJniObject ProcessBuilder::command(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"command",
			"(Ljava/util/List;)Ljava/lang/ProcessBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ProcessBuilder::redirectInput()
	{
		return __thiz.callObjectMethod(
			"redirectInput",
			"()Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	QAndroidJniObject ProcessBuilder::redirectInput(__jni_impl::java::io::File arg0)
	{
		return __thiz.callObjectMethod(
			"redirectInput",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ProcessBuilder::redirectInput(__jni_impl::java::lang::ProcessBuilder_Redirect arg0)
	{
		return __thiz.callObjectMethod(
			"redirectInput",
			"(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ProcessBuilder::redirectOutput(__jni_impl::java::lang::ProcessBuilder_Redirect arg0)
	{
		return __thiz.callObjectMethod(
			"redirectOutput",
			"(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ProcessBuilder::redirectOutput()
	{
		return __thiz.callObjectMethod(
			"redirectOutput",
			"()Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	QAndroidJniObject ProcessBuilder::redirectOutput(__jni_impl::java::io::File arg0)
	{
		return __thiz.callObjectMethod(
			"redirectOutput",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ProcessBuilder::redirectError(__jni_impl::java::io::File arg0)
	{
		return __thiz.callObjectMethod(
			"redirectError",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ProcessBuilder::redirectError()
	{
		return __thiz.callObjectMethod(
			"redirectError",
			"()Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	QAndroidJniObject ProcessBuilder::redirectError(__jni_impl::java::lang::ProcessBuilder_Redirect arg0)
	{
		return __thiz.callObjectMethod(
			"redirectError",
			"(Ljava/lang/ProcessBuilder$Redirect;)Ljava/lang/ProcessBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ProcessBuilder::redirectErrorStream(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"redirectErrorStream",
			"(Z)Ljava/lang/ProcessBuilder;",
			arg0
		);
	}
	jboolean ProcessBuilder::redirectErrorStream()
	{
		return __thiz.callMethod<jboolean>(
			"redirectErrorStream",
			"()Z"
		);
	}
	QAndroidJniObject ProcessBuilder::inheritIO()
	{
		return __thiz.callObjectMethod(
			"inheritIO",
			"()Ljava/lang/ProcessBuilder;"
		);
	}
	QAndroidJniObject ProcessBuilder::startPipeline(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ProcessBuilder",
			"startPipeline",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ProcessBuilder : public __jni_impl::java::lang::ProcessBuilder
	{
	public:
		ProcessBuilder(QAndroidJniObject obj) { __thiz = obj; }
		ProcessBuilder(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		ProcessBuilder(jarray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_PROCESSBUILDER

