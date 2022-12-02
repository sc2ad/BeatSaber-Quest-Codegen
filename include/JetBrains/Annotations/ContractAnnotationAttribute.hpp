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
  // Forward declaring type: ContractAnnotationAttribute
  class ContractAnnotationAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::JetBrains::Annotations::ContractAnnotationAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::ContractAnnotationAttribute*, "JetBrains.Annotations", "ContractAnnotationAttribute");
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.ContractAnnotationAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10C50A8
  class ContractAnnotationAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String <Contract>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Contract;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <ForceFullStates>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool ForceFullStates;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String <Contract>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Contract$k__BackingField();
    // Get instance field reference: private System.Boolean <ForceFullStates>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ForceFullStates$k__BackingField();
    // public System.String get_Contract()
    // Offset: 0x2B6AF5C
    ::StringW get_Contract();
    // private System.Void set_Contract(System.String value)
    // Offset: 0x2B6AF64
    void set_Contract(::StringW value);
    // public System.Boolean get_ForceFullStates()
    // Offset: 0x2B6AF6C
    bool get_ForceFullStates();
    // private System.Void set_ForceFullStates(System.Boolean value)
    // Offset: 0x2B6AF74
    void set_ForceFullStates(bool value);
    // public System.Void .ctor(System.String contract)
    // Offset: 0x2B6AEEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContractAnnotationAttribute* New_ctor(::StringW contract) {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::ContractAnnotationAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContractAnnotationAttribute*, creationType>(contract)));
    }
    // public System.Void .ctor(System.String contract, System.Boolean forceFullStates)
    // Offset: 0x2B6AF1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContractAnnotationAttribute* New_ctor(::StringW contract, bool forceFullStates) {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::ContractAnnotationAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContractAnnotationAttribute*, creationType>(contract, forceFullStates)));
    }
  }; // JetBrains.Annotations.ContractAnnotationAttribute
  #pragma pack(pop)
  static check_size<sizeof(ContractAnnotationAttribute), 24 + sizeof(bool)> __JetBrains_Annotations_ContractAnnotationAttributeSizeCheck;
  static_assert(sizeof(ContractAnnotationAttribute) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::ContractAnnotationAttribute::get_Contract
// Il2CppName: get_Contract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (JetBrains::Annotations::ContractAnnotationAttribute::*)()>(&JetBrains::Annotations::ContractAnnotationAttribute::get_Contract)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::ContractAnnotationAttribute*), "get_Contract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::ContractAnnotationAttribute::set_Contract
// Il2CppName: set_Contract
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::ContractAnnotationAttribute::*)(::StringW)>(&JetBrains::Annotations::ContractAnnotationAttribute::set_Contract)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::ContractAnnotationAttribute*), "set_Contract", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::ContractAnnotationAttribute::get_ForceFullStates
// Il2CppName: get_ForceFullStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (JetBrains::Annotations::ContractAnnotationAttribute::*)()>(&JetBrains::Annotations::ContractAnnotationAttribute::get_ForceFullStates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::ContractAnnotationAttribute*), "get_ForceFullStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::ContractAnnotationAttribute::set_ForceFullStates
// Il2CppName: set_ForceFullStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::ContractAnnotationAttribute::*)(bool)>(&JetBrains::Annotations::ContractAnnotationAttribute::set_ForceFullStates)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::ContractAnnotationAttribute*), "set_ForceFullStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::ContractAnnotationAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::ContractAnnotationAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
