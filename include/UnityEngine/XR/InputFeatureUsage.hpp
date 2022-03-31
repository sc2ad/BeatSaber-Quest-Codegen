// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.XR.InputFeatureType
#include "UnityEngine/XR/InputFeatureType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: InputFeatureUsage
  struct InputFeatureUsage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputFeatureUsage, "UnityEngine.XR", "InputFeatureUsage");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.InputFeatureUsage
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 11E7464
  // [RequiredByNativeCodeAttribute] Offset: 11E7464
  // [NativeConditionalAttribute] Offset: 11E7464
  struct InputFeatureUsage/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>*/ {
    public:
    public:
    // System.String m_Name
    // Size: 0x8
    // Offset: 0x0
    ::StringW m_Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [NativeNameAttribute] Offset: 0x11E7E34
    // UnityEngine.XR.InputFeatureType m_InternalType
    // Size: 0x4
    // Offset: 0x8
    ::UnityEngine::XR::InputFeatureType m_InternalType;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::InputFeatureType) == 0x4);
    public:
    // Creating value type constructor for type: InputFeatureUsage
    constexpr InputFeatureUsage(::StringW m_Name_ = {}, ::UnityEngine::XR::InputFeatureType m_InternalType_ = {}) noexcept : m_Name{m_Name_}, m_InternalType{m_InternalType_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>
    operator ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>*>(this);
    }
    // Get instance field reference: System.String m_Name
    ::StringW& dyn_m_Name();
    // Get instance field reference: UnityEngine.XR.InputFeatureType m_InternalType
    ::UnityEngine::XR::InputFeatureType& dyn_m_InternalType();
    // public System.String get_name()
    // Offset: 0x2A844B0
    ::StringW get_name();
    // UnityEngine.XR.InputFeatureType get_internalType()
    // Offset: 0x2A844B8
    ::UnityEngine::XR::InputFeatureType get_internalType();
    // public System.Boolean Equals(UnityEngine.XR.InputFeatureUsage other)
    // Offset: 0x2A84558
    bool Equals(::UnityEngine::XR::InputFeatureUsage other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2A844C0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2A8459C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.XR.InputFeatureUsage
  #pragma pack(pop)
  static check_size<sizeof(InputFeatureUsage), 8 + sizeof(::UnityEngine::XR::InputFeatureType)> __UnityEngine_XR_InputFeatureUsageSizeCheck;
  static_assert(sizeof(InputFeatureUsage) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::InputFeatureUsage::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::XR::InputFeatureUsage::*)()>(&UnityEngine::XR::InputFeatureUsage::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputFeatureUsage), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputFeatureUsage::get_internalType
// Il2CppName: get_internalType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::InputFeatureType (UnityEngine::XR::InputFeatureUsage::*)()>(&UnityEngine::XR::InputFeatureUsage::get_internalType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputFeatureUsage), "get_internalType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputFeatureUsage::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputFeatureUsage::*)(::UnityEngine::XR::InputFeatureUsage)>(&UnityEngine::XR::InputFeatureUsage::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputFeatureUsage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputFeatureUsage), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputFeatureUsage::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputFeatureUsage::*)(::Il2CppObject*)>(&UnityEngine::XR::InputFeatureUsage::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputFeatureUsage), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::InputFeatureUsage::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::XR::InputFeatureUsage::*)()>(&UnityEngine::XR::InputFeatureUsage::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputFeatureUsage), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
