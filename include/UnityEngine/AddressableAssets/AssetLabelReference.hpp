// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.IKeyEvaluator
#include "UnityEngine/AddressableAssets/IKeyEvaluator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Forward declaring type: AssetLabelReference
  class AssetLabelReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetLabelReference);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetLabelReference*, "UnityEngine.AddressableAssets", "AssetLabelReference");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AssetLabelReference
  // [TokenAttribute] Offset: FFFFFFFF
  class AssetLabelReference : public ::Il2CppObject/*, public ::UnityEngine::AddressableAssets::IKeyEvaluator*/ {
    public:
    public:
    // [FormerlySerializedAsAttribute] Offset: 0x11063D0
    // private System.String m_LabelString
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_LabelString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::AddressableAssets::IKeyEvaluator
    operator ::UnityEngine::AddressableAssets::IKeyEvaluator() noexcept {
      return *reinterpret_cast<::UnityEngine::AddressableAssets::IKeyEvaluator*>(this);
    }
    // Creating interface conversion operator: i_IKeyEvaluator
    inline ::UnityEngine::AddressableAssets::IKeyEvaluator* i_IKeyEvaluator() noexcept {
      return reinterpret_cast<::UnityEngine::AddressableAssets::IKeyEvaluator*>(this);
    }
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_LabelString;
    }
    // Get instance field reference: private System.String m_LabelString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_LabelString();
    // public System.String get_labelString()
    // Offset: 0x18D9F88
    ::StringW get_labelString();
    // public System.Void set_labelString(System.String value)
    // Offset: 0x18D9F90
    void set_labelString(::StringW value);
    // public System.Object get_RuntimeKey()
    // Offset: 0x18D9F98
    ::Il2CppObject* get_RuntimeKey();
    // public System.Void .ctor()
    // Offset: 0x18DA050
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetLabelReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AssetLabelReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetLabelReference*, creationType>()));
    }
    // public System.Boolean RuntimeKeyIsValid()
    // Offset: 0x18D9FF8
    bool RuntimeKeyIsValid();
    // public override System.Int32 GetHashCode()
    // Offset: 0x18DA030
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.AddressableAssets.AssetLabelReference
  #pragma pack(pop)
  static check_size<sizeof(AssetLabelReference), 16 + sizeof(::StringW)> __UnityEngine_AddressableAssets_AssetLabelReferenceSizeCheck;
  static_assert(sizeof(AssetLabelReference) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetLabelReference::get_labelString
// Il2CppName: get_labelString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::AssetLabelReference::*)()>(&UnityEngine::AddressableAssets::AssetLabelReference::get_labelString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetLabelReference*), "get_labelString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetLabelReference::set_labelString
// Il2CppName: set_labelString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AssetLabelReference::*)(::StringW)>(&UnityEngine::AddressableAssets::AssetLabelReference::set_labelString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetLabelReference*), "set_labelString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetLabelReference::get_RuntimeKey
// Il2CppName: get_RuntimeKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::AddressableAssets::AssetLabelReference::*)()>(&UnityEngine::AddressableAssets::AssetLabelReference::get_RuntimeKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetLabelReference*), "get_RuntimeKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetLabelReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetLabelReference::RuntimeKeyIsValid
// Il2CppName: RuntimeKeyIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::AssetLabelReference::*)()>(&UnityEngine::AddressableAssets::AssetLabelReference::RuntimeKeyIsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetLabelReference*), "RuntimeKeyIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetLabelReference::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AddressableAssets::AssetLabelReference::*)()>(&UnityEngine::AddressableAssets::AssetLabelReference::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AssetLabelReference*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
