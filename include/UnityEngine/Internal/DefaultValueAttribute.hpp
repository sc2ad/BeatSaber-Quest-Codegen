// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Internal
namespace UnityEngine::Internal {
  // Forward declaring type: DefaultValueAttribute
  class DefaultValueAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Internal::DefaultValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Internal::DefaultValueAttribute*, "UnityEngine.Internal", "DefaultValueAttribute");
// Type namespace: UnityEngine.Internal
namespace UnityEngine::Internal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Internal.DefaultValueAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 108684C
  class DefaultValueAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Object DefaultValue
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* DefaultValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept {
      return DefaultValue;
    }
    // Get instance field reference: private System.Object DefaultValue
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_DefaultValue();
    // public System.Object get_Value()
    // Offset: 0x20DD52C
    ::Il2CppObject* get_Value();
    // public System.Void .ctor(System.String value)
    // Offset: 0x20DD500
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultValueAttribute* New_ctor(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Internal::DefaultValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultValueAttribute*, creationType>(value)));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x20DD534
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x20DD600
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Internal.DefaultValueAttribute
  #pragma pack(pop)
  static check_size<sizeof(DefaultValueAttribute), 16 + sizeof(::Il2CppObject*)> __UnityEngine_Internal_DefaultValueAttributeSizeCheck;
  static_assert(sizeof(DefaultValueAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Internal::DefaultValueAttribute::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Internal::DefaultValueAttribute::*)()>(&UnityEngine::Internal::DefaultValueAttribute::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Internal::DefaultValueAttribute*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Internal::DefaultValueAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Internal::DefaultValueAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Internal::DefaultValueAttribute::*)(::Il2CppObject*)>(&UnityEngine::Internal::DefaultValueAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Internal::DefaultValueAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Internal::DefaultValueAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Internal::DefaultValueAttribute::*)()>(&UnityEngine::Internal::DefaultValueAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Internal::DefaultValueAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
