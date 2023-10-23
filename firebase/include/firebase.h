#pragma once

#include <dmsdk/sdk.h>
#include "firebase/app.h"

firebase::App* Firebase_GetFirebaseApp();

firebase::App* Platform_FirebaseInit(firebase::AppOptions* options);

void Platform_FirebaseConfigure();
