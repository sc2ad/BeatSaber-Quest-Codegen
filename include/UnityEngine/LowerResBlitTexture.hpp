// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LowerResBlitTexture
  class LowerResBlitTexture;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::LowerResBlitTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowerResBlitTexture*, "UnityEngine", "LowerResBlitTexture");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.LowerResBlitTexture
  // [TokenAttribute] Offset: FFFFFFFF
  class LowerResBlitTexture : public ::UnityEngine::Object {
    public:
    // System.Void LowerResBlitTextureDontStripMe()
    // Offset: 0x20CA8C8
    void LowerResBlitTextureDontStripMe();
  }; // UnityEngine.LowerResBlitTexture
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::LowerResBlitTexture::LowerResBlitTextureDontStripMe
// Il2CppName: LowerResBlitTextureDontStripMe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LowerResBlitTexture::*)()>(&UnityEngine::LowerResBlitTexture::LowerResBlitTextureDontStripMe)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LowerResBlitTexture*), "LowerResBlitTextureDontStripMe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
