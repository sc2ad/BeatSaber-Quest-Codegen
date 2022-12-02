// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_InputHDAInfo
  class HEU_InputHDAInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputHDAInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputHDAInfo*, "HoudiniEngineUnity", "HEU_InputHDAInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputHDAInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InputHDAInfo : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*/ {
    public:
    public:
    // public UnityEngine.GameObject _pendingGO
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* pendingGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject _connectedGO
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* connectedGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Int32 _connectedInputNodeID
    // Size: 0x4
    // Offset: 0x20
    int connectedInputNodeID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>
    operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*>(this);
    }
    // Creating interface conversion operator: i_HEU_InputHDAInfo
    inline ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>* i_HEU_InputHDAInfo() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*>(this);
    }
    // Get instance field reference: public UnityEngine.GameObject _pendingGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__pendingGO();
    // Get instance field reference: public UnityEngine.GameObject _connectedGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__connectedGO();
    // Get instance field reference: public System.Int32 _connectedInputNodeID
    [[deprecated("Use field access instead!")]] int& dyn__connectedInputNodeID();
    // public System.Void .ctor()
    // Offset: 0x189B4E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_InputHDAInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_InputHDAInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_InputHDAInfo*, creationType>()));
    }
    // public System.Void CopyTo(HoudiniEngineUnity.HEU_InputHDAInfo destInfo)
    // Offset: 0x189B348
    void CopyTo(::HoudiniEngineUnity::HEU_InputHDAInfo* destInfo);
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.HEU_InputHDAInfo other)
    // Offset: 0x189B374
    bool IsEquivalentTo(::HoudiniEngineUnity::HEU_InputHDAInfo* other);
  }; // HoudiniEngineUnity.HEU_InputHDAInfo
  #pragma pack(pop)
  static check_size<sizeof(HEU_InputHDAInfo), 32 + sizeof(int)> __HoudiniEngineUnity_HEU_InputHDAInfoSizeCheck;
  static_assert(sizeof(HEU_InputHDAInfo) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputHDAInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputHDAInfo::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputHDAInfo::*)(::HoudiniEngineUnity::HEU_InputHDAInfo*)>(&HoudiniEngineUnity::HEU_InputHDAInfo::CopyTo)> {
  static const MethodInfo* get() {
    static auto* destInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputHDAInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputHDAInfo*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destInfo});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputHDAInfo::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputHDAInfo::*)(::HoudiniEngineUnity::HEU_InputHDAInfo*)>(&HoudiniEngineUnity::HEU_InputHDAInfo::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputHDAInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputHDAInfo*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
