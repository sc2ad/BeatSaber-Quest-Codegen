// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.PropertyDescriptor
#include "System/ComponentModel/PropertyDescriptor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataRelation
  class DataRelation;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: DataRelationPropertyDescriptor
  class DataRelationPropertyDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataRelationPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRelationPropertyDescriptor*, "System.Data", "DataRelationPropertyDescriptor");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataRelationPropertyDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class DataRelationPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
    public:
    // Writing base type padding for base size: 0x84 to desired offset: 0x88
    char ___base_padding[0x4] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Data.DataRelation <Relation>k__BackingField
    // Size: 0x8
    // Offset: 0x88
    ::System::Data::DataRelation* Relation;
    // Field size check
    static_assert(sizeof(::System::Data::DataRelation*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Data::DataRelation*
    constexpr operator ::System::Data::DataRelation*() const noexcept {
      return Relation;
    }
    // Get instance field reference: private readonly System.Data.DataRelation <Relation>k__BackingField
    ::System::Data::DataRelation*& dyn_$Relation$k__BackingField();
    // System.Data.DataRelation get_Relation()
    // Offset: 0x1E5B858
    ::System::Data::DataRelation* get_Relation();
    // System.Void .ctor(System.Data.DataRelation dataRelation)
    // Offset: 0x1E5B808
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataRelationPropertyDescriptor* New_ctor(::System::Data::DataRelation* dataRelation) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataRelationPropertyDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataRelationPropertyDescriptor*, creationType>(dataRelation)));
    }
    // public override System.Type get_ComponentType()
    // Offset: 0x1E5B860
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Type PropertyDescriptor::get_ComponentType()
    ::System::Type* get_ComponentType();
    // public override System.Boolean get_IsReadOnly()
    // Offset: 0x1E5B8D0
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Boolean PropertyDescriptor::get_IsReadOnly()
    bool get_IsReadOnly();
    // public override System.Type get_PropertyType()
    // Offset: 0x1E5B8D8
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Type PropertyDescriptor::get_PropertyType()
    ::System::Type* get_PropertyType();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x1E5B948
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Boolean PropertyDescriptor::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1E5B9C8
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Int32 PropertyDescriptor::GetHashCode()
    int GetHashCode();
    // public override System.Object GetValue(System.Object component)
    // Offset: 0x1E5B9E8
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Object PropertyDescriptor::GetValue(System.Object component)
    ::Il2CppObject* GetValue(::Il2CppObject* component);
    // public override System.Void SetValue(System.Object component, System.Object value)
    // Offset: 0x1E5BA84
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Void PropertyDescriptor::SetValue(System.Object component, System.Object value)
    void SetValue(::Il2CppObject* component, ::Il2CppObject* value);
    // public override System.Boolean ShouldSerializeValue(System.Object component)
    // Offset: 0x1E5BA88
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Boolean PropertyDescriptor::ShouldSerializeValue(System.Object component)
    bool ShouldSerializeValue(::Il2CppObject* component);
  }; // System.Data.DataRelationPropertyDescriptor
  #pragma pack(pop)
  static check_size<sizeof(DataRelationPropertyDescriptor), 136 + sizeof(::System::Data::DataRelation*)> __System_Data_DataRelationPropertyDescriptorSizeCheck;
  static_assert(sizeof(DataRelationPropertyDescriptor) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataRelationPropertyDescriptor::get_Relation
// Il2CppName: get_Relation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataRelation* (System::Data::DataRelationPropertyDescriptor::*)()>(&System::Data::DataRelationPropertyDescriptor::get_Relation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationPropertyDescriptor*), "get_Relation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationPropertyDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::DataRelationPropertyDescriptor::get_ComponentType
// Il2CppName: get_ComponentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Data::DataRelationPropertyDescriptor::*)()>(&System::Data::DataRelationPropertyDescriptor::get_ComponentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationPropertyDescriptor*), "get_ComponentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationPropertyDescriptor::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::DataRelationPropertyDescriptor::*)()>(&System::Data::DataRelationPropertyDescriptor::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationPropertyDescriptor*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationPropertyDescriptor::get_PropertyType
// Il2CppName: get_PropertyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Data::DataRelationPropertyDescriptor::*)()>(&System::Data::DataRelationPropertyDescriptor::get_PropertyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationPropertyDescriptor*), "get_PropertyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationPropertyDescriptor::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::DataRelationPropertyDescriptor::*)(::Il2CppObject*)>(&System::Data::DataRelationPropertyDescriptor::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationPropertyDescriptor*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationPropertyDescriptor::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::DataRelationPropertyDescriptor::*)()>(&System::Data::DataRelationPropertyDescriptor::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationPropertyDescriptor*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationPropertyDescriptor::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::DataRelationPropertyDescriptor::*)(::Il2CppObject*)>(&System::Data::DataRelationPropertyDescriptor::GetValue)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationPropertyDescriptor*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationPropertyDescriptor::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataRelationPropertyDescriptor::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Data::DataRelationPropertyDescriptor::SetValue)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationPropertyDescriptor*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, value});
  }
};
// Writing MetadataGetter for method: System::Data::DataRelationPropertyDescriptor::ShouldSerializeValue
// Il2CppName: ShouldSerializeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::DataRelationPropertyDescriptor::*)(::Il2CppObject*)>(&System::Data::DataRelationPropertyDescriptor::ShouldSerializeValue)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataRelationPropertyDescriptor*), "ShouldSerializeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component});
  }
};
