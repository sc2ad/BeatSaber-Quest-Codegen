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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: TypeDescriptionProviderAttribute
  class TypeDescriptionProviderAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::TypeDescriptionProviderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptionProviderAttribute*, "System.ComponentModel", "TypeDescriptionProviderAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeDescriptionProviderAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 1064940
  class TypeDescriptionProviderAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String _typeName
    // Size: 0x8
    // Offset: 0x10
    ::StringW typeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return typeName;
    }
    // Get instance field reference: private System.String _typeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__typeName();
    // public System.String get_TypeName()
    // Offset: 0x1E0088C
    ::StringW get_TypeName();
    // public System.Void .ctor(System.String typeName)
    // Offset: 0x1E00708
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeDescriptionProviderAttribute* New_ctor(::StringW typeName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::TypeDescriptionProviderAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeDescriptionProviderAttribute*, creationType>(typeName)));
    }
    // public System.Void .ctor(System.Type type)
    // Offset: 0x1E007A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeDescriptionProviderAttribute* New_ctor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::TypeDescriptionProviderAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeDescriptionProviderAttribute*, creationType>(type)));
    }
  }; // System.ComponentModel.TypeDescriptionProviderAttribute
  #pragma pack(pop)
  static check_size<sizeof(TypeDescriptionProviderAttribute), 16 + sizeof(::StringW)> __System_ComponentModel_TypeDescriptionProviderAttributeSizeCheck;
  static_assert(sizeof(TypeDescriptionProviderAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptionProviderAttribute::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::TypeDescriptionProviderAttribute::*)()>(&System::ComponentModel::TypeDescriptionProviderAttribute::get_TypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptionProviderAttribute*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptionProviderAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptionProviderAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
