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
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: BrowsableAttribute
  class BrowsableAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::BrowsableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::BrowsableAttribute*, "System.ComponentModel", "BrowsableAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.BrowsableAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 11B6E88
  class BrowsableAttribute : public ::System::Attribute {
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
    // private System.Boolean browsable
    // Size: 0x1
    // Offset: 0x10
    bool browsable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return browsable;
    }
    // Get static field: static public readonly System.ComponentModel.BrowsableAttribute Yes
    static ::System::ComponentModel::BrowsableAttribute* _get_Yes();
    // Set static field: static public readonly System.ComponentModel.BrowsableAttribute Yes
    static void _set_Yes(::System::ComponentModel::BrowsableAttribute* value);
    // Get static field: static public readonly System.ComponentModel.BrowsableAttribute No
    static ::System::ComponentModel::BrowsableAttribute* _get_No();
    // Set static field: static public readonly System.ComponentModel.BrowsableAttribute No
    static void _set_No(::System::ComponentModel::BrowsableAttribute* value);
    // Get static field: static public readonly System.ComponentModel.BrowsableAttribute Default
    static ::System::ComponentModel::BrowsableAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.BrowsableAttribute Default
    static void _set_Default(::System::ComponentModel::BrowsableAttribute* value);
    // Get instance field reference: private System.Boolean browsable
    bool& dyn_browsable();
    // public System.Boolean get_Browsable()
    // Offset: 0x1D5A8AC
    bool get_Browsable();
    // public System.Void .ctor(System.Boolean browsable)
    // Offset: 0x1D5A874
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BrowsableAttribute* New_ctor(bool browsable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::BrowsableAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BrowsableAttribute*, creationType>(browsable)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D5A9E0
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1D5A8B4
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1D5A95C
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
    // public override System.Boolean IsDefaultAttribute()
    // Offset: 0x1D5A968
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::IsDefaultAttribute()
    bool IsDefaultAttribute();
  }; // System.ComponentModel.BrowsableAttribute
  #pragma pack(pop)
  static check_size<sizeof(BrowsableAttribute), 16 + sizeof(bool)> __System_ComponentModel_BrowsableAttributeSizeCheck;
  static_assert(sizeof(BrowsableAttribute) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::BrowsableAttribute::get_Browsable
// Il2CppName: get_Browsable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::BrowsableAttribute::*)()>(&System::ComponentModel::BrowsableAttribute::get_Browsable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BrowsableAttribute*), "get_Browsable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BrowsableAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::BrowsableAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::BrowsableAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BrowsableAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BrowsableAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::BrowsableAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::BrowsableAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BrowsableAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BrowsableAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::BrowsableAttribute::*)()>(&System::ComponentModel::BrowsableAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BrowsableAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::BrowsableAttribute::IsDefaultAttribute
// Il2CppName: IsDefaultAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::BrowsableAttribute::*)()>(&System::ComponentModel::BrowsableAttribute::IsDefaultAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::BrowsableAttribute*), "IsDefaultAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
