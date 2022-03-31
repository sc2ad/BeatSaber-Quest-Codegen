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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Forward declaring type: SingletonMarkRegistry
  class SingletonMarkRegistry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::Internal::SingletonMarkRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::SingletonMarkRegistry*, "Zenject.Internal", "SingletonMarkRegistry");
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.SingletonMarkRegistry
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class SingletonMarkRegistry : public ::Il2CppObject {
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
    // private readonly System.Collections.Generic.HashSet`1<System.Type> _boundSingletons
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::HashSet_1<::System::Type*>* boundSingletons;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::System::Type*>*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<System.Type> _boundNonSingletons
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::HashSet_1<::System::Type*>* boundNonSingletons;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::System::Type*>*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<System.Type> _boundSingletons
    ::System::Collections::Generic::HashSet_1<::System::Type*>*& dyn__boundSingletons();
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<System.Type> _boundNonSingletons
    ::System::Collections::Generic::HashSet_1<::System::Type*>*& dyn__boundNonSingletons();
    // public System.Void MarkNonSingleton(System.Type type)
    // Offset: 0x1BD6DA4
    void MarkNonSingleton(::System::Type* type);
    // public System.Void MarkSingleton(System.Type type)
    // Offset: 0x1BD6E48
    void MarkSingleton(::System::Type* type);
    // public System.Void .ctor()
    // Offset: 0x1BD6F08
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SingletonMarkRegistry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::Internal::SingletonMarkRegistry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SingletonMarkRegistry*, creationType>()));
    }
  }; // Zenject.Internal.SingletonMarkRegistry
  #pragma pack(pop)
  static check_size<sizeof(SingletonMarkRegistry), 24 + sizeof(::System::Collections::Generic::HashSet_1<::System::Type*>*)> __Zenject_Internal_SingletonMarkRegistrySizeCheck;
  static_assert(sizeof(SingletonMarkRegistry) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::SingletonMarkRegistry::MarkNonSingleton
// Il2CppName: MarkNonSingleton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::SingletonMarkRegistry::*)(::System::Type*)>(&Zenject::Internal::SingletonMarkRegistry::MarkNonSingleton)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::SingletonMarkRegistry*), "MarkNonSingleton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::SingletonMarkRegistry::MarkSingleton
// Il2CppName: MarkSingleton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::SingletonMarkRegistry::*)(::System::Type*)>(&Zenject::Internal::SingletonMarkRegistry::MarkSingleton)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::SingletonMarkRegistry*), "MarkSingleton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::SingletonMarkRegistry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
