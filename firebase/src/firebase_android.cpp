#if defined(DM_PLATFORM_ANDROID)

#include <dmsdk/sdk.h>
#include "firebase/app.h"

firebase::App* Platform_FirebaseInit(firebase::AppOptions* options)
{
	JNIEnv* env = 0;
	dmGraphics::GetNativeAndroidJavaVM()->AttachCurrentThread(&env, NULL);
	
	firebase::App* app = 0;

	if (!options)
	{
		app = firebase::App::Create(env, dmGraphics::GetNativeAndroidActivity());
	}
	else
	{
		app = firebase::App::Create(*options, env, dmGraphics::GetNativeAndroidActivity());
	}
	return app;
}


void Platform_FirebaseConfigure()
{

}


#endif