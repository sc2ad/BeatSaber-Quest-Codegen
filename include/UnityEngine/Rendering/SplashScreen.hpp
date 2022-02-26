// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: SplashScreen
  class SplashScreen;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::SplashScreen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SplashScreen*, "UnityEngine.Rendering", "SplashScreen");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.SplashScreen
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 11A79EC
  class SplashScreen : public ::Il2CppObject {
    public:
    // static public System.Boolean get_isFinished()
    // Offset: 0x20D1E34
    static bool get_isFinished();
  }; // UnityEngine.Rendering.SplashScreen
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::SplashScreen::get_isFinished
// Il2CppName: get_isFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Rendering::SplashScreen::get_isFinished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SplashScreen*), "get_isFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
