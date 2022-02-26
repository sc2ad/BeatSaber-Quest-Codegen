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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Forward declaring type: AspMvcActionAttribute
  class AspMvcActionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::JetBrains::Annotations::AspMvcActionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcActionAttribute*, "JetBrains.Annotations", "AspMvcActionAttribute");
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.AspMvcActionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 11E64B8
  class AspMvcActionAttribute : public ::System::Attribute {
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
    // private System.String <AnonymousProperty>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW AnonymousProperty;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return AnonymousProperty;
    }
    // Get instance field reference: private System.String <AnonymousProperty>k__BackingField
    ::StringW& dyn_$AnonymousProperty$k__BackingField();
    // public System.String get_AnonymousProperty()
    // Offset: 0x2A46C10
    ::StringW get_AnonymousProperty();
    // private System.Void set_AnonymousProperty(System.String value)
    // Offset: 0x2A46C18
    void set_AnonymousProperty(::StringW value);
    // public System.Void .ctor(System.String anonymousProperty)
    // Offset: 0x2A46BE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcActionAttribute* New_ctor(::StringW anonymousProperty) {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::AspMvcActionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcActionAttribute*, creationType>(anonymousProperty)));
    }
    // public System.Void .ctor()
    // Offset: 0x2A46BDC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcActionAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::AspMvcActionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcActionAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.AspMvcActionAttribute
  #pragma pack(pop)
  static check_size<sizeof(AspMvcActionAttribute), 16 + sizeof(::StringW)> __JetBrains_Annotations_AspMvcActionAttributeSizeCheck;
  static_assert(sizeof(AspMvcActionAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcActionAttribute::get_AnonymousProperty
// Il2CppName: get_AnonymousProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (JetBrains::Annotations::AspMvcActionAttribute::*)()>(&JetBrains::Annotations::AspMvcActionAttribute::get_AnonymousProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspMvcActionAttribute*), "get_AnonymousProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcActionAttribute::set_AnonymousProperty
// Il2CppName: set_AnonymousProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::AspMvcActionAttribute::*)(::StringW)>(&JetBrains::Annotations::AspMvcActionAttribute::set_AnonymousProperty)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspMvcActionAttribute*), "set_AnonymousProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcActionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcActionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
