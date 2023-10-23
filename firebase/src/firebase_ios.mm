#if defined(DM_PLATFORM_IOS)

#include <dmsdk/sdk.h>
#include "firebase/app.h"

firebase::App* Platform_FirebaseInit(firebase::AppOptions* options)
{
	firebase::App* app = 0;

	if (!options)
	{
		app = firebase::App::Create();
	}
	else
	{
		app = firebase::App::Create(*options);
	}
	return app;
}


void Platform_FirebaseConfigure()
{
	[FIRApp configure];
}


#endif
