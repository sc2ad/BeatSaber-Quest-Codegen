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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AttributeCollection
  class AttributeCollection;
  // Forward declaring type: TypeConverter
  class TypeConverter;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor, "System.ComponentModel", "TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode/System.ComponentModel.DefaultTypeDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  struct TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor/*, public ::System::ValueType, public ::System::ComponentModel::ICustomTypeDescriptor*/ {
    public:
    public:
    // private System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode _node
    // Size: 0x8
    // Offset: 0x0
    ::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* node;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*) == 0x8);
    // private System.Type _objectType
    // Size: 0x8
    // Offset: 0x8
    ::System::Type* objectType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Object _instance
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* instance;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating value type constructor for type: DefaultTypeDescriptor
    constexpr DefaultTypeDescriptor(::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* node_ = {}, ::System::Type* objectType_ = {}, ::Il2CppObject* instance_ = {}) noexcept : node{node_}, objectType{objectType_}, instance{instance_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::ComponentModel::ICustomTypeDescriptor
    operator ::System::ComponentModel::ICustomTypeDescriptor() noexcept {
      return *reinterpret_cast<::System::ComponentModel::ICustomTypeDescriptor*>(this);
    }
    // Creating interface conversion operator: i_ICustomTypeDescriptor
    inline ::System::ComponentModel::ICustomTypeDescriptor* i_ICustomTypeDescriptor() noexcept {
      return reinterpret_cast<::System::ComponentModel::ICustomTypeDescriptor*>(this);
    }
    // Get instance field reference: private System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode _node
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::TypeDescriptor::TypeDescriptionNode*& dyn__node();
    // Get instance field reference: private System.Type _objectType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__objectType();
    // Get instance field reference: private System.Object _instance
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__instance();
    // System.Void .ctor(System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode node, System.Type objectType, System.Object instance)
    // Offset: 0x1D793FC
    // ABORTED: conflicts with another method.  DefaultTypeDescriptor(::System::ComponentModel::TypeDescriptor::TypeDescriptionNode* node, ::System::Type* objectType, ::Il2CppObject* instance);
    // private System.ComponentModel.AttributeCollection System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
    // Offset: 0x1D79970
    ::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes();
    // private System.ComponentModel.TypeConverter System.ComponentModel.ICustomTypeDescriptor.GetConverter()
    // Offset: 0x1D79C04
    ::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter();
  }; // System.ComponentModel.TypeDescriptor/System.ComponentModel.TypeDescriptionNode/System.ComponentModel.DefaultTypeDescriptor
  #pragma pack(pop)
  static check_size<sizeof(TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor), 16 + sizeof(::Il2CppObject*)> __System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptorSizeCheck;
  static_assert(sizeof(TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::DefaultTypeDescriptor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter
// Il2CppName: System.ComponentModel.ICustomTypeDescriptor.GetConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::*)()>(&System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::TypeDescriptionNode::DefaultTypeDescriptor), "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
