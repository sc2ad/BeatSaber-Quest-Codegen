// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass77_0_1, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass77_0`1");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c__DisplayClass77_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TObject>
  class AddressablesImpl::$$c__DisplayClass77_0_1 : public ::Il2CppObject {
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
    // public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::AddressableAssets::AddressablesImpl* $$4__this;
    // Field size check
    static_assert(sizeof(::UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // public System.Object key
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* key;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Action`1<TObject> callback
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<TObject>* callback;
    // Field size check
    static_assert(sizeof(::System::Action_1<TObject>*) == 0x8);
    // public System.Boolean releaseDependenciesOnFailure
    // Size: 0x1
    // Offset: 0x0
    bool releaseDependenciesOnFailure;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Autogenerated instance field getter
    // Get instance field: public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    ::UnityEngine::AddressableAssets::AddressablesImpl*& dyn_$$4__this() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass77_0_1::dyn_$$4__this");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
      return *reinterpret_cast<::UnityEngine::AddressableAssets::AddressablesImpl**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Object key
    ::Il2CppObject*& dyn_key() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass77_0_1::dyn_key");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "key"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<TObject> callback
    ::System::Action_1<TObject>*& dyn_callback() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass77_0_1::dyn_callback");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "callback"))->offset;
      return *reinterpret_cast<::System::Action_1<TObject>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Boolean releaseDependenciesOnFailure
    bool& dyn_releaseDependenciesOnFailure() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass77_0_1::dyn_releaseDependenciesOnFailure");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "releaseDependenciesOnFailure"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<TObject>> <LoadAssetsWithChain>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle op2)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> $LoadAssetsWithChain$b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op2) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass77_0_1::<LoadAssetsWithChain>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<LoadAssetsWithChain>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(op2)})));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*>, false>(this, ___internal__method, op2);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::$$c__DisplayClass77_0_1<TObject>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass77_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::$$c__DisplayClass77_0_1<TObject>*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c__DisplayClass77_0`1
  // Could not write size check! Type: UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c__DisplayClass77_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
