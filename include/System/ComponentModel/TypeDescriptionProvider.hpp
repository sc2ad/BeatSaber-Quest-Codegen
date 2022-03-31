// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ICustomTypeDescriptor
  class ICustomTypeDescriptor;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: TypeDescriptionProvider
  class TypeDescriptionProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::TypeDescriptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptionProvider*, "System.ComponentModel", "TypeDescriptionProvider");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeDescriptionProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeDescriptionProvider : public ::Il2CppObject {
    public:
    // Nested type: ::System::ComponentModel::TypeDescriptionProvider::EmptyCustomTypeDescriptor
    class EmptyCustomTypeDescriptor;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.ComponentModel.TypeDescriptionProvider _parent
    // Size: 0x8
    // Offset: 0x10
    ::System::ComponentModel::TypeDescriptionProvider* parent;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::TypeDescriptionProvider*) == 0x8);
    // private System.ComponentModel.TypeDescriptionProvider/System.ComponentModel.EmptyCustomTypeDescriptor _emptyDescriptor
    // Size: 0x8
    // Offset: 0x18
    ::System::ComponentModel::TypeDescriptionProvider::EmptyCustomTypeDescriptor* emptyDescriptor;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::TypeDescriptionProvider::EmptyCustomTypeDescriptor*) == 0x8);
    public:
    // Get instance field reference: private System.ComponentModel.TypeDescriptionProvider _parent
    ::System::ComponentModel::TypeDescriptionProvider*& dyn__parent();
    // Get instance field reference: private System.ComponentModel.TypeDescriptionProvider/System.ComponentModel.EmptyCustomTypeDescriptor _emptyDescriptor
    ::System::ComponentModel::TypeDescriptionProvider::EmptyCustomTypeDescriptor*& dyn__emptyDescriptor();
    // public System.Collections.IDictionary GetCache(System.Object instance)
    // Offset: 0x1D6A214
    ::System::Collections::IDictionary* GetCache(::Il2CppObject* instance);
    // public System.ComponentModel.ICustomTypeDescriptor GetExtendedTypeDescriptor(System.Object instance)
    // Offset: 0x1D6A22C
    ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::Il2CppObject* instance);
    // public System.Type GetReflectionType(System.Type objectType)
    // Offset: 0x1D6A2D0
    ::System::Type* GetReflectionType(::System::Type* objectType);
    // public System.Type GetReflectionType(System.Type objectType, System.Object instance)
    // Offset: 0x1D6A2E0
    ::System::Type* GetReflectionType(::System::Type* objectType, ::Il2CppObject* instance);
    // public System.ComponentModel.ICustomTypeDescriptor GetTypeDescriptor(System.Type objectType)
    // Offset: 0x1D6A2FC
    ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType);
    // public System.ComponentModel.ICustomTypeDescriptor GetTypeDescriptor(System.Object instance)
    // Offset: 0x1D6A30C
    ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::Il2CppObject* instance);
    // public System.ComponentModel.ICustomTypeDescriptor GetTypeDescriptor(System.Type objectType, System.Object instance)
    // Offset: 0x1D6A3B8
    ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type* objectType, ::Il2CppObject* instance);
    // protected System.Void .ctor()
    // Offset: 0x1D5C0CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeDescriptionProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::TypeDescriptionProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeDescriptionProvider*, creationType>()));
    }
  }; // System.ComponentModel.TypeDescriptionProvider
  #pragma pack(pop)
  static check_size<sizeof(TypeDescriptionProvider), 24 + sizeof(::System::ComponentModel::TypeDescriptionProvider::EmptyCustomTypeDescriptor*)> __System_ComponentModel_TypeDescriptionProviderSizeCheck;
  static_assert(sizeof(TypeDescriptionProvider) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptionProvider::GetCache
// Il2CppName: GetCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (System::ComponentModel::TypeDescriptionProvider::*)(::Il2CppObject*)>(&System::ComponentModel::TypeDescriptionProvider::GetCache)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptionProvider*), "GetCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptionProvider::GetExtendedTypeDescriptor
// Il2CppName: GetExtendedTypeDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (System::ComponentModel::TypeDescriptionProvider::*)(::Il2CppObject*)>(&System::ComponentModel::TypeDescriptionProvider::GetExtendedTypeDescriptor)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptionProvider*), "GetExtendedTypeDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptionProvider::GetReflectionType
// Il2CppName: GetReflectionType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::TypeDescriptionProvider::*)(::System::Type*)>(&System::ComponentModel::TypeDescriptionProvider::GetReflectionType)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptionProvider*), "GetReflectionType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptionProvider::GetReflectionType
// Il2CppName: GetReflectionType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::TypeDescriptionProvider::*)(::System::Type*, ::Il2CppObject*)>(&System::ComponentModel::TypeDescriptionProvider::GetReflectionType)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptionProvider*), "GetReflectionType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor
// Il2CppName: GetTypeDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (System::ComponentModel::TypeDescriptionProvider::*)(::System::Type*)>(&System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptionProvider*), "GetTypeDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor
// Il2CppName: GetTypeDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (System::ComponentModel::TypeDescriptionProvider::*)(::Il2CppObject*)>(&System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptionProvider*), "GetTypeDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor
// Il2CppName: GetTypeDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (System::ComponentModel::TypeDescriptionProvider::*)(::System::Type*, ::Il2CppObject*)>(&System::ComponentModel::TypeDescriptionProvider::GetTypeDescriptor)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* instance = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptionProvider*), "GetTypeDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, instance});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptionProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
