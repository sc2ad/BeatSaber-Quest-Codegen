// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Vrcamera
  class Vrcamera : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Vrcamera
    Vrcamera() noexcept {}
    // static public System.Void SetGetSurfaceUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<System.String> callback)
    // Offset: 0x23B3518
    static void SetGetSurfaceUpdateNotificationCallback(typename Oculus::Platform::Message_1<::Il2CppString*>::Callback* callback);
  }; // Oculus.Platform.Vrcamera
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Vrcamera*, "Oculus.Platform", "Vrcamera");
// Writing MetadataGetter for method: Oculus::Platform::Vrcamera::SetGetSurfaceUpdateNotificationCallback
// Il2CppName: SetGetSurfaceUpdateNotificationCallback
// Cannot perform method pointer template specialization from operators!