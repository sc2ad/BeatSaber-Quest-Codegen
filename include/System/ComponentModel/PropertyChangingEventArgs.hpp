// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: PropertyChangingEventArgs
  class PropertyChangingEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::PropertyChangingEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyChangingEventArgs*, "System.ComponentModel", "PropertyChangingEventArgs");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.PropertyChangingEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10D8650
  class PropertyChangingEventArgs : public ::System::EventArgs {
    public:
    public:
    // private System.String <PropertyName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW PropertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return PropertyName;
    }
    // Get instance field reference: private System.String <PropertyName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$PropertyName$k__BackingField();
    // public System.Void set_PropertyName(System.String value)
    // Offset: 0x212C914
    void set_PropertyName(::StringW value);
    // public System.Void .ctor(System.String propertyName)
    // Offset: 0x212C88C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertyChangingEventArgs* New_ctor(::StringW propertyName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::PropertyChangingEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertyChangingEventArgs*, creationType>(propertyName)));
    }
  }; // System.ComponentModel.PropertyChangingEventArgs
  #pragma pack(pop)
  static check_size<sizeof(PropertyChangingEventArgs), 16 + sizeof(::StringW)> __System_ComponentModel_PropertyChangingEventArgsSizeCheck;
  static_assert(sizeof(PropertyChangingEventArgs) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::PropertyChangingEventArgs::set_PropertyName
// Il2CppName: set_PropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::PropertyChangingEventArgs::*)(::StringW)>(&System::ComponentModel::PropertyChangingEventArgs::set_PropertyName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::PropertyChangingEventArgs*), "set_PropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::PropertyChangingEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
