// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MipMapBiasSpriteSetter
  class MipMapBiasSpriteSetter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MipMapBiasSpriteSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MipMapBiasSpriteSetter*, "", "MipMapBiasSpriteSetter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: MipMapBiasSpriteSetter
  // [TokenAttribute] Offset: FFFFFFFF
  class MipMapBiasSpriteSetter : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Sprite[] _sprites
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Sprite*> sprites;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Sprite*>) == 0x8);
    // private System.Single _mipMapBias
    // Size: 0x4
    // Offset: 0x20
    float mipMapBias;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Sprite[] _sprites
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Sprite*>& dyn__sprites();
    // Get instance field reference: private System.Single _mipMapBias
    [[deprecated("Use field access instead!")]] float& dyn__mipMapBias();
    // public System.Void .ctor()
    // Offset: 0x16039D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MipMapBiasSpriteSetter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MipMapBiasSpriteSetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MipMapBiasSpriteSetter*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1603948
    void Start();
  }; // MipMapBiasSpriteSetter
  #pragma pack(pop)
  static check_size<sizeof(MipMapBiasSpriteSetter), 32 + sizeof(float)> __GlobalNamespace_MipMapBiasSpriteSetterSizeCheck;
  static_assert(sizeof(MipMapBiasSpriteSetter) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MipMapBiasSpriteSetter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MipMapBiasSpriteSetter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MipMapBiasSpriteSetter::*)()>(&GlobalNamespace::MipMapBiasSpriteSetter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MipMapBiasSpriteSetter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
