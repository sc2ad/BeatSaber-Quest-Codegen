// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HeadBodyOffsetSO
  class HeadBodyOffsetSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HeadBodyOffsetSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HeadBodyOffsetSO*, "", "HeadBodyOffsetSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HeadBodyOffsetSO
  // [TokenAttribute] Offset: FFFFFFFF
  class HeadBodyOffsetSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    public:
    // private UnityEngine.Vector3 _headNeckOffset
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 headNeckOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single _verticalOffset
    // Size: 0x4
    // Offset: 0x24
    float verticalOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Vector3 _headNeckOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__headNeckOffset();
    // Get instance field reference: private System.Single _verticalOffset
    [[deprecated("Use field access instead!")]] float& dyn__verticalOffset();
    // public UnityEngine.Vector3 get_headNeckOffset()
    // Offset: 0x13F1C64
    ::UnityEngine::Vector3 get_headNeckOffset();
    // public System.Single get_verticalOffset()
    // Offset: 0x13F1C70
    float get_verticalOffset();
    // public System.Void .ctor()
    // Offset: 0x13F1C78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HeadBodyOffsetSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HeadBodyOffsetSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HeadBodyOffsetSO*, creationType>()));
    }
  }; // HeadBodyOffsetSO
  #pragma pack(pop)
  static check_size<sizeof(HeadBodyOffsetSO), 36 + sizeof(float)> __GlobalNamespace_HeadBodyOffsetSOSizeCheck;
  static_assert(sizeof(HeadBodyOffsetSO) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HeadBodyOffsetSO::get_headNeckOffset
// Il2CppName: get_headNeckOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::HeadBodyOffsetSO::*)()>(&GlobalNamespace::HeadBodyOffsetSO::get_headNeckOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HeadBodyOffsetSO*), "get_headNeckOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HeadBodyOffsetSO::get_verticalOffset
// Il2CppName: get_verticalOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::HeadBodyOffsetSO::*)()>(&GlobalNamespace::HeadBodyOffsetSO::get_verticalOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HeadBodyOffsetSO*), "get_verticalOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HeadBodyOffsetSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
