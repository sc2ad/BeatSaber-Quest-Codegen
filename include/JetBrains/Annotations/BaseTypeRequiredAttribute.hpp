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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Forward declaring type: BaseTypeRequiredAttribute
  class BaseTypeRequiredAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::JetBrains::Annotations::BaseTypeRequiredAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::BaseTypeRequiredAttribute*, "JetBrains.Annotations", "BaseTypeRequiredAttribute");
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.BaseTypeRequiredAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10C7008
  // [BaseTypeRequiredAttribute] Offset: 10C7008
  class BaseTypeRequiredAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Type <BaseType>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* BaseType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return BaseType;
    }
    // Get instance field reference: private System.Type <BaseType>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$BaseType$k__BackingField();
    // public System.Type get_BaseType()
    // Offset: 0x2B61A00
    ::System::Type* get_BaseType();
    // private System.Void set_BaseType(System.Type value)
    // Offset: 0x2B61A08
    void set_BaseType(::System::Type* value);
    // public System.Void .ctor(System.Type baseType)
    // Offset: 0x2B619D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseTypeRequiredAttribute* New_ctor(::System::Type* baseType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::BaseTypeRequiredAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseTypeRequiredAttribute*, creationType>(baseType)));
    }
  }; // JetBrains.Annotations.BaseTypeRequiredAttribute
  #pragma pack(pop)
  static check_size<sizeof(BaseTypeRequiredAttribute), 16 + sizeof(::System::Type*)> __JetBrains_Annotations_BaseTypeRequiredAttributeSizeCheck;
  static_assert(sizeof(BaseTypeRequiredAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::BaseTypeRequiredAttribute::get_BaseType
// Il2CppName: get_BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (JetBrains::Annotations::BaseTypeRequiredAttribute::*)()>(&JetBrains::Annotations::BaseTypeRequiredAttribute::get_BaseType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::BaseTypeRequiredAttribute*), "get_BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::BaseTypeRequiredAttribute::set_BaseType
// Il2CppName: set_BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::BaseTypeRequiredAttribute::*)(::System::Type*)>(&JetBrains::Annotations::BaseTypeRequiredAttribute::set_BaseType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::BaseTypeRequiredAttribute*), "set_BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::BaseTypeRequiredAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
