// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.ICustomTypeDescriptor
#include "System/ComponentModel/ICustomTypeDescriptor.hpp"
// Including type: System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode
#include "System/ComponentModel/TypeDescriptor_TypeDescriptionNode.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AttributeCollection
  class AttributeCollection;
  // Forward declaring type: TypeConverter
  class TypeConverter;
  // Forward declaring type: PropertyDescriptorCollection
  class PropertyDescriptorCollection;
  // Forward declaring type: PropertyDescriptor
  class PropertyDescriptor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Attribute
  class Attribute;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor, "System.ComponentModel", "TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode/System.ComponentModel.DefaultExtendedTypeDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  struct TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor/*, public ::System::ValueType, public ::System::ComponentModel::ICustomTypeDescriptor*/ {
    public:
    public:
    // private System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode _node
    // Size: 0x8
    // Offset: 0x0
    ::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* node;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*) == 0x8);
    // private System.Object _instance
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppObject* instance;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating value type constructor for type: DefaultExtendedTypeDescriptor
    constexpr DefaultExtendedTypeDescriptor(::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* node_ = {}, ::Il2CppObject* instance_ = {}) noexcept : node{node_}, instance{instance_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::ComponentModel::ICustomTypeDescriptor
    operator ::System::ComponentModel::ICustomTypeDescriptor() noexcept {
      return *reinterpret_cast<::System::ComponentModel::ICustomTypeDescriptor*>(this);
    }
    // Get instance field reference: private System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode _node
    ::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*& dyn__node();
    // Get instance field reference: private System.Object _instance
    ::Il2CppObject*& dyn__instance();
    // System.Void .ctor(System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode node, System.Object instance)
    // Offset: 0x1ED1478
    // ABORTED: conflicts with another method.  DefaultExtendedTypeDescriptor(::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* node, ::Il2CppObject* instance);
    // private System.ComponentModel.AttributeCollection System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
    // Offset: 0x1ED1744
    ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();
    // private System.ComponentModel.TypeConverter System.ComponentModel.ICustomTypeDescriptor.GetConverter()
    // Offset: 0x1ED1A18
    ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();
    // private System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties()
    // Offset: 0x1ED1CA8
    ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties();
    // private System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ICustomTypeDescriptor.GetProperties(System.Attribute[] attributes)
    // Offset: 0x1ED1F38
    ::System::ComponentModel::PropertyDescriptorCollection* System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*> attributes);
    // private System.Object System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner(System.ComponentModel.PropertyDescriptor pd)
    // Offset: 0x1ED21DC
    ::Il2CppObject* System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);
  }; // System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode/System.ComponentModel.DefaultExtendedTypeDescriptor
  #pragma pack(pop)
  static check_size<sizeof(TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor), 8 + sizeof(::Il2CppObject*)> __System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptorSizeCheck;
  static_assert(sizeof(TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor::DefaultExtendedTypeDescriptor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  static const MethodInfo* get() {
    static auto* attributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  static const MethodInfo* get() {
    static auto* pd = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultExtendedTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pd});
  }
};
