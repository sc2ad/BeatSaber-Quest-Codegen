// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SubContainerBinder
#include "Zenject/SubContainerBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: ISubContainerCreator
  class ISubContainerCreator;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SubContainerBinder::$$c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBinder::$$c__DisplayClass18_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass18_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerBinder/Zenject.<>c__DisplayClass18_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SubContainerBinder::$$c__DisplayClass18_0 : public ::Il2CppObject {
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
    // public System.String resourcePath
    // Size: 0x8
    // Offset: 0x10
    ::StringW resourcePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public Zenject.GameObjectCreationParameters gameObjectInfo
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::GameObjectCreationParameters* gameObjectInfo;
    // Field size check
    static_assert(sizeof(::Zenject::GameObjectCreationParameters*) == 0x8);
    // public System.Action`1<Zenject.DiContainer> installerMethod
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::Zenject::DiContainer*>* installerMethod;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Zenject::DiContainer*>*) == 0x8);
    public:
    // Get instance field reference: public System.String resourcePath
    ::StringW& dyn_resourcePath();
    // Get instance field reference: public Zenject.GameObjectCreationParameters gameObjectInfo
    ::Zenject::GameObjectCreationParameters*& dyn_gameObjectInfo();
    // Get instance field reference: public System.Action`1<Zenject.DiContainer> installerMethod
    ::System::Action_1<::Zenject::DiContainer*>*& dyn_installerMethod();
    // Zenject.ISubContainerCreator <ByNewPrefabResourceMethod>b__0(Zenject.DiContainer container)
    // Offset: 0x1CE51D8
    ::Zenject::ISubContainerCreator* $ByNewPrefabResourceMethod$b__0(::Zenject::DiContainer* container);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1CE527C
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1CE52D8
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x1CE3C88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerBinder::$$c__DisplayClass18_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SubContainerBinder::$$c__DisplayClass18_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerBinder::$$c__DisplayClass18_0*, creationType>()));
    }
  }; // Zenject.SubContainerBinder/Zenject.<>c__DisplayClass18_0
  #pragma pack(pop)
  static check_size<sizeof(SubContainerBinder::$$c__DisplayClass18_0), 32 + sizeof(::System::Action_1<::Zenject::DiContainer*>*)> __Zenject_SubContainerBinder_$$c__DisplayClass18_0SizeCheck;
  static_assert(sizeof(SubContainerBinder::$$c__DisplayClass18_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerBinder::$$c__DisplayClass18_0::$ByNewPrefabResourceMethod$b__0
// Il2CppName: <ByNewPrefabResourceMethod>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::ISubContainerCreator* (Zenject::SubContainerBinder::$$c__DisplayClass18_0::*)(::Zenject::DiContainer*)>(&Zenject::SubContainerBinder::$$c__DisplayClass18_0::$ByNewPrefabResourceMethod$b__0)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder::$$c__DisplayClass18_0*), "<ByNewPrefabResourceMethod>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::$$c__DisplayClass18_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::SubContainerBinder::$$c__DisplayClass18_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder::$$c__DisplayClass18_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::$$c__DisplayClass18_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::SubContainerBinder::$$c__DisplayClass18_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder::$$c__DisplayClass18_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::$$c__DisplayClass18_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
