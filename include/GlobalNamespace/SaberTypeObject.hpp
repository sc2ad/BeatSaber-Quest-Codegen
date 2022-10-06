// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SaberTypeObject
  class SaberTypeObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SaberTypeObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberTypeObject*, "", "SaberTypeObject");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: SaberTypeObject
  // [TokenAttribute] Offset: FFFFFFFF
  class SaberTypeObject : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private SaberType _saberType
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::SaberType saberType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberType) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private SaberType _saberType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SaberType& dyn__saberType();
    // public SaberType get_saberType()
    // Offset: 0x149A74C
    ::GlobalNamespace::SaberType get_saberType();
    // public System.Void .ctor()
    // Offset: 0x149A754
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberTypeObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SaberTypeObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberTypeObject*, creationType>()));
    }
  }; // SaberTypeObject
  #pragma pack(pop)
  static check_size<sizeof(SaberTypeObject), 24 + sizeof(::GlobalNamespace::SaberType)> __GlobalNamespace_SaberTypeObjectSizeCheck;
  static_assert(sizeof(SaberTypeObject) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberTypeObject::get_saberType
// Il2CppName: get_saberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SaberType (GlobalNamespace::SaberTypeObject::*)()>(&GlobalNamespace::SaberTypeObject::get_saberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTypeObject*), "get_saberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTypeObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
