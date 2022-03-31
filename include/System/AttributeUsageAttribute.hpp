// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.AttributeTargets
#include "System/AttributeTargets.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: AttributeUsageAttribute
  class AttributeUsageAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::AttributeUsageAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::AttributeUsageAttribute*, "System", "AttributeUsageAttribute");
// Type namespace: System
namespace System {
  // Size: 0x16
  #pragma pack(push, 1)
  // Autogenerated type: System.AttributeUsageAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 11A82E0
  // [ComVisibleAttribute] Offset: 11A82E0
  class AttributeUsageAttribute : public ::System::Attribute {
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
    // System.AttributeTargets m_attributeTarget
    // Size: 0x4
    // Offset: 0x10
    ::System::AttributeTargets m_attributeTarget;
    // Field size check
    static_assert(sizeof(::System::AttributeTargets) == 0x4);
    // System.Boolean m_allowMultiple
    // Size: 0x1
    // Offset: 0x14
    bool m_allowMultiple;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean m_inherited
    // Size: 0x1
    // Offset: 0x15
    bool m_inherited;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static System.AttributeUsageAttribute Default
    static ::System::AttributeUsageAttribute* _get_Default();
    // Set static field: static System.AttributeUsageAttribute Default
    static void _set_Default(::System::AttributeUsageAttribute* value);
    // Get instance field reference: System.AttributeTargets m_attributeTarget
    ::System::AttributeTargets& dyn_m_attributeTarget();
    // Get instance field reference: System.Boolean m_allowMultiple
    bool& dyn_m_allowMultiple();
    // Get instance field reference: System.Boolean m_inherited
    bool& dyn_m_inherited();
    // public System.Boolean get_AllowMultiple()
    // Offset: 0x1E6D61C
    bool get_AllowMultiple();
    // public System.Void set_AllowMultiple(System.Boolean value)
    // Offset: 0x1E6D624
    void set_AllowMultiple(bool value);
    // public System.Boolean get_Inherited()
    // Offset: 0x1E6D630
    bool get_Inherited();
    // public System.Void set_Inherited(System.Boolean value)
    // Offset: 0x1E6D638
    void set_Inherited(bool value);
    // public System.Void .ctor(System.AttributeTargets validOn)
    // Offset: 0x1E6D5E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttributeUsageAttribute* New_ctor(::System::AttributeTargets validOn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::AttributeUsageAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttributeUsageAttribute*, creationType>(validOn)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1E6D644
    static void _cctor();
  }; // System.AttributeUsageAttribute
  #pragma pack(pop)
  static check_size<sizeof(AttributeUsageAttribute), 21 + sizeof(bool)> __System_AttributeUsageAttributeSizeCheck;
  static_assert(sizeof(AttributeUsageAttribute) == 0x16);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::AttributeUsageAttribute::get_AllowMultiple
// Il2CppName: get_AllowMultiple
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::AttributeUsageAttribute::*)()>(&System::AttributeUsageAttribute::get_AllowMultiple)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::AttributeUsageAttribute*), "get_AllowMultiple", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::AttributeUsageAttribute::set_AllowMultiple
// Il2CppName: set_AllowMultiple
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AttributeUsageAttribute::*)(bool)>(&System::AttributeUsageAttribute::set_AllowMultiple)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::AttributeUsageAttribute*), "set_AllowMultiple", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::AttributeUsageAttribute::get_Inherited
// Il2CppName: get_Inherited
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::AttributeUsageAttribute::*)()>(&System::AttributeUsageAttribute::get_Inherited)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::AttributeUsageAttribute*), "get_Inherited", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::AttributeUsageAttribute::set_Inherited
// Il2CppName: set_Inherited
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AttributeUsageAttribute::*)(bool)>(&System::AttributeUsageAttribute::set_Inherited)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::AttributeUsageAttribute*), "set_Inherited", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::AttributeUsageAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::AttributeUsageAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::AttributeUsageAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::AttributeUsageAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
