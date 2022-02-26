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
  // Forward declaring type: ColorType
  struct ColorType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColorTypeExtensions
  class ColorTypeExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ColorTypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorTypeExtensions*, "", "ColorTypeExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ColorTypeExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ColorTypeExtensions : public ::Il2CppObject {
    public:
    // static public ColorType Opposite(ColorType colorType)
    // Offset: 0x2A4B440
    static ::GlobalNamespace::ColorType Opposite(::GlobalNamespace::ColorType colorType);
  }; // ColorTypeExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorTypeExtensions::Opposite
// Il2CppName: Opposite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorType (*)(::GlobalNamespace::ColorType)>(&GlobalNamespace::ColorTypeExtensions::Opposite)> {
  static const MethodInfo* get() {
    static auto* colorType = &::il2cpp_utils::GetClassFromName("", "ColorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorTypeExtensions*), "Opposite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorType});
  }
};
