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
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: DesignerCategoryAttribute
  class DesignerCategoryAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::DesignerCategoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DesignerCategoryAttribute*, "System.ComponentModel", "DesignerCategoryAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DesignerCategoryAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 11B6F88
  class DesignerCategoryAttribute : public ::System::Attribute {
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
    // private System.String category
    // Size: 0x8
    // Offset: 0x10
    ::StringW category;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String typeId
    // Size: 0x8
    // Offset: 0x18
    ::StringW typeId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Component
    static ::System::ComponentModel::DesignerCategoryAttribute* _get_Component();
    // Set static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Component
    static void _set_Component(::System::ComponentModel::DesignerCategoryAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Default
    static ::System::ComponentModel::DesignerCategoryAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Default
    static void _set_Default(::System::ComponentModel::DesignerCategoryAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Form
    static ::System::ComponentModel::DesignerCategoryAttribute* _get_Form();
    // Set static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Form
    static void _set_Form(::System::ComponentModel::DesignerCategoryAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Generic
    static ::System::ComponentModel::DesignerCategoryAttribute* _get_Generic();
    // Set static field: static public readonly System.ComponentModel.DesignerCategoryAttribute Generic
    static void _set_Generic(::System::ComponentModel::DesignerCategoryAttribute* value);
    // Get instance field reference: private System.String category
    ::StringW& dyn_category();
    // Get instance field reference: private System.String typeId
    ::StringW& dyn_typeId();
    // public System.String get_Category()
    // Offset: 0x1D5D23C
    ::StringW get_Category();
    // public System.Void .ctor(System.String category)
    // Offset: 0x1D5D210
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesignerCategoryAttribute* New_ctor(::StringW category) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DesignerCategoryAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesignerCategoryAttribute*, creationType>(category)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D5D3E8
    static void _cctor();
    // public override System.Object get_TypeId()
    // Offset: 0x1D5D244
    // Implemented from: System.Attribute
    // Base method: System.Object Attribute::get_TypeId()
    ::Il2CppObject* get_TypeId();
    // public System.Void .ctor()
    // Offset: 0x1D5D1AC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesignerCategoryAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DesignerCategoryAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesignerCategoryAttribute*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1D5D29C
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1D5D340
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
    // public override System.Boolean IsDefaultAttribute()
    // Offset: 0x1D5D360
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::IsDefaultAttribute()
    bool IsDefaultAttribute();
  }; // System.ComponentModel.DesignerCategoryAttribute
  #pragma pack(pop)
  static check_size<sizeof(DesignerCategoryAttribute), 24 + sizeof(::StringW)> __System_ComponentModel_DesignerCategoryAttributeSizeCheck;
  static_assert(sizeof(DesignerCategoryAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::DesignerCategoryAttribute::get_Category
// Il2CppName: get_Category
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::DesignerCategoryAttribute::*)()>(&System::ComponentModel::DesignerCategoryAttribute::get_Category)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerCategoryAttribute*), "get_Category", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignerCategoryAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DesignerCategoryAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::DesignerCategoryAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerCategoryAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignerCategoryAttribute::get_TypeId
// Il2CppName: get_TypeId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::DesignerCategoryAttribute::*)()>(&System::ComponentModel::DesignerCategoryAttribute::get_TypeId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerCategoryAttribute*), "get_TypeId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignerCategoryAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DesignerCategoryAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DesignerCategoryAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::DesignerCategoryAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerCategoryAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignerCategoryAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::DesignerCategoryAttribute::*)()>(&System::ComponentModel::DesignerCategoryAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerCategoryAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignerCategoryAttribute::IsDefaultAttribute
// Il2CppName: IsDefaultAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DesignerCategoryAttribute::*)()>(&System::ComponentModel::DesignerCategoryAttribute::IsDefaultAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerCategoryAttribute*), "IsDefaultAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
