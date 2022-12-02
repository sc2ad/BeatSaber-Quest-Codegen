// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EaseType
  struct EaseType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Interpolation
  class Interpolation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Interpolation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Interpolation*, "", "Interpolation");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Interpolation
  // [TokenAttribute] Offset: FFFFFFFF
  class Interpolation : public ::Il2CppObject {
    public:
    // static public System.Single Interpolate(System.Single t, EaseType easeType)
    // Offset: 0x1602A1C
    static float Interpolate(float t, ::GlobalNamespace::EaseType easeType);
  }; // Interpolation
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Interpolation::Interpolate
// Il2CppName: Interpolate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, ::GlobalNamespace::EaseType)>(&GlobalNamespace::Interpolation::Interpolate)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* easeType = &::il2cpp_utils::GetClassFromName("", "EaseType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Interpolation*), "Interpolate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, easeType});
  }
};
