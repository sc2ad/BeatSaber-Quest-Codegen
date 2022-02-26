// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameScenesManager
#include "GlobalNamespace/GameScenesManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameScenesManager::ScenesStackData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameScenesManager::ScenesStackData*, "", "GameScenesManager/ScenesStackData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: GameScenesManager/ScenesStackData
  // [TokenAttribute] Offset: FFFFFFFF
  class GameScenesManager::ScenesStackData : public ::Il2CppObject {
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
    // private System.Collections.Generic.List`1<System.String> <sceneNames>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::StringW>* sceneNames;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // private Zenject.DiContainer <container>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> <sceneNames>k__BackingField
    ::System::Collections::Generic::List_1<::StringW>*& dyn_$sceneNames$k__BackingField();
    // Get instance field reference: private Zenject.DiContainer <container>k__BackingField
    ::Zenject::DiContainer*& dyn_$container$k__BackingField();
    // public System.Collections.Generic.List`1<System.String> get_sceneNames()
    // Offset: 0x2C218CC
    ::System::Collections::Generic::List_1<::StringW>* get_sceneNames();
    // private System.Void set_sceneNames(System.Collections.Generic.List`1<System.String> value)
    // Offset: 0x2C218D4
    void set_sceneNames(::System::Collections::Generic::List_1<::StringW>* value);
    // public Zenject.DiContainer get_container()
    // Offset: 0x2C218DC
    ::Zenject::DiContainer* get_container();
    // private System.Void set_container(Zenject.DiContainer value)
    // Offset: 0x2C218E4
    void set_container(::Zenject::DiContainer* value);
    // public System.Void .ctor(System.Collections.Generic.List`1<System.String> sceneNames)
    // Offset: 0x2C1F17C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameScenesManager::ScenesStackData* New_ctor(::System::Collections::Generic::List_1<::StringW>* sceneNames) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameScenesManager::ScenesStackData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameScenesManager::ScenesStackData*, creationType>(sceneNames)));
    }
    // public System.Void SetDiContainer(Zenject.DiContainer container)
    // Offset: 0x2C205E0
    void SetDiContainer(::Zenject::DiContainer* container);
  }; // GameScenesManager/ScenesStackData
  #pragma pack(pop)
  static check_size<sizeof(GameScenesManager::ScenesStackData), 24 + sizeof(::Zenject::DiContainer*)> __GlobalNamespace_GameScenesManager_ScenesStackDataSizeCheck;
  static_assert(sizeof(GameScenesManager::ScenesStackData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::ScenesStackData::get_sceneNames
// Il2CppName: get_sceneNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (GlobalNamespace::GameScenesManager::ScenesStackData::*)()>(&GlobalNamespace::GameScenesManager::ScenesStackData::get_sceneNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::ScenesStackData*), "get_sceneNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::ScenesStackData::set_sceneNames
// Il2CppName: set_sceneNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::ScenesStackData::*)(::System::Collections::Generic::List_1<::StringW>*)>(&GlobalNamespace::GameScenesManager::ScenesStackData::set_sceneNames)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::ScenesStackData*), "set_sceneNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::ScenesStackData::get_container
// Il2CppName: get_container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (GlobalNamespace::GameScenesManager::ScenesStackData::*)()>(&GlobalNamespace::GameScenesManager::ScenesStackData::get_container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::ScenesStackData*), "get_container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::ScenesStackData::set_container
// Il2CppName: set_container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::ScenesStackData::*)(::Zenject::DiContainer*)>(&GlobalNamespace::GameScenesManager::ScenesStackData::set_container)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::ScenesStackData*), "set_container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::ScenesStackData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameScenesManager::ScenesStackData::SetDiContainer
// Il2CppName: SetDiContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameScenesManager::ScenesStackData::*)(::Zenject::DiContainer*)>(&GlobalNamespace::GameScenesManager::ScenesStackData::SetDiContainer)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameScenesManager::ScenesStackData*), "SetDiContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
