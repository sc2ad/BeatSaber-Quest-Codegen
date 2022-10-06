// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.DefaultGameObjectParentInstaller
#include "Zenject/DefaultGameObjectParentInstaller.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer*, "Zenject", "DefaultGameObjectParentInstaller/DefaultParentObjectDestroyer");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DefaultGameObjectParentInstaller/Zenject.DefaultParentObjectDestroyer
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private readonly UnityEngine.GameObject _gameObject
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::GameObject*
    constexpr operator ::UnityEngine::GameObject*() const noexcept {
      return gameObject;
    }
    // Get instance field reference: private readonly UnityEngine.GameObject _gameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__gameObject();
    // public System.Void .ctor(UnityEngine.GameObject gameObject)
    // Offset: 0x1783AF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer* New_ctor(::UnityEngine::GameObject* gameObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer*, creationType>(gameObject)));
    }
    // public System.Void Dispose()
    // Offset: 0x1783B20
    void Dispose();
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1783B8C
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1783C38
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.DefaultGameObjectParentInstaller/Zenject.DefaultParentObjectDestroyer
  #pragma pack(pop)
  static check_size<sizeof(DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer), 16 + sizeof(::UnityEngine::GameObject*)> __Zenject_DefaultGameObjectParentInstaller_DefaultParentObjectDestroyerSizeCheck;
  static_assert(sizeof(DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::*)()>(&Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
