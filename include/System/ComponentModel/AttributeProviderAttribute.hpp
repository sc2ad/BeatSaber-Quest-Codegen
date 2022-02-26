// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AttributeProviderAttribute
  class AttributeProviderAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::AttributeProviderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AttributeProviderAttribute*, "System.ComponentModel", "AttributeProviderAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.AttributeProviderAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 11999AC
  class AttributeProviderAttribute : public ::System::Attribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String _typeName
    // Size: 0x8
    // Offset: 0x10
    ::StringW typeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _propertyName
    // Size: 0x8
    // Offset: 0x18
    ::StringW propertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _typeName
    ::StringW& dyn__typeName();
    // Get instance field reference: private System.String _propertyName
    ::StringW& dyn__propertyName();
    // public System.String get_TypeName()
    // Offset: 0x1DF0F98
    ::StringW get_TypeName();
    // public System.String get_PropertyName()
    // Offset: 0x1DF0FA0
    ::StringW get_PropertyName();
  }; // System.ComponentModel.AttributeProviderAttribute
  #pragma pack(pop)
  static check_size<sizeof(AttributeProviderAttribute), 24 + sizeof(::StringW)> __System_ComponentModel_AttributeProviderAttributeSizeCheck;
  static_assert(sizeof(AttributeProviderAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::AttributeProviderAttribute::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::AttributeProviderAttribute::*)()>(&System::ComponentModel::AttributeProviderAttribute::get_TypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AttributeProviderAttribute*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AttributeProviderAttribute::get_PropertyName
// Il2CppName: get_PropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::AttributeProviderAttribute::*)()>(&System::ComponentModel::AttributeProviderAttribute::get_PropertyName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AttributeProviderAttribute*), "get_PropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
