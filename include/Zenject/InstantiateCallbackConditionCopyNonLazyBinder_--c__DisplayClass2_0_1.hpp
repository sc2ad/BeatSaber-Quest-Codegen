// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.InstantiateCallbackConditionCopyNonLazyBinder
#include "Zenject/InstantiateCallbackConditionCopyNonLazyBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1, "Zenject", "InstantiateCallbackConditionCopyNonLazyBinder/<>c__DisplayClass2_0`1");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.InstantiateCallbackConditionCopyNonLazyBinder/Zenject.<>c__DisplayClass2_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Action`2<Zenject.InjectContext,T> callback
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_2<::Zenject::InjectContext*, T>* callback;
    // Field size check
    static_assert(sizeof(::System::Action_2<::Zenject::InjectContext*, T>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Action_2<::Zenject::InjectContext*, T>*
    constexpr operator ::System::Action_2<::Zenject::InjectContext*, T>*() const noexcept {
      return callback;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`2<Zenject.InjectContext,T> callback
    [[deprecated("Use field access instead!")]] ::System::Action_2<::Zenject::InjectContext*, T>*& dyn_callback() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1::dyn_callback");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "callback"))->offset;
      return *reinterpret_cast<::System::Action_2<::Zenject::InjectContext*, T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1<T>*, creationType>()));
    }
    // System.Void <OnInstantiated>b__0(Zenject.InjectContext ctx, System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $OnInstantiated$b__0(::Zenject::InjectContext* ctx, ::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1::<OnInstantiated>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<OnInstantiated>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(ctx), ::il2cpp_utils::ExtractType(obj)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, ctx, obj);
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1::__zenCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1<T>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<InstantiateCallbackConditionCopyNonLazyBinder::$$c__DisplayClass2_0_1<T>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Zenject.InstantiateCallbackConditionCopyNonLazyBinder/Zenject.<>c__DisplayClass2_0`1
  // Could not write size check! Type: Zenject.InstantiateCallbackConditionCopyNonLazyBinder/Zenject.<>c__DisplayClass2_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
