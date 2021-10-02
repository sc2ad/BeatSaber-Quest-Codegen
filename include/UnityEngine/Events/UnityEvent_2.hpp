// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEventBase
#include "UnityEngine/Events/UnityEventBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`2<T0, T1>
  template<typename T0, typename T1>
  class UnityAction_2;
  // Forward declaring type: BaseInvokableCall
  class BaseInvokableCall;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Events.UnityEvent`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T0, typename T1>
  class UnityEvent_2 : public UnityEngine::Events::UnityEventBase {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Object[] m_InvokeArray
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::Il2CppObject*> m_InvokeArray;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::Il2CppObject*>
    constexpr operator ::ArrayW<::Il2CppObject*>() const noexcept {
      return m_InvokeArray;
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Object[] m_InvokeArray
    ::ArrayW<::Il2CppObject*>& dyn_m_InvokeArray() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::UnityEvent_2::dyn_m_InvokeArray");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_InvokeArray"))->offset;
      return *reinterpret_cast<::ArrayW<::Il2CppObject*>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void AddListener(UnityEngine.Events.UnityAction`2<T0,T1> call)
    // Offset: 0xFFFFFFFF
    void AddListener(UnityEngine::Events::UnityAction_2<T0, T1>* call) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::UnityEvent_2::AddListener");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddListener", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(call)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, call);
    }
    // public System.Void RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1> call)
    // Offset: 0xFFFFFFFF
    void RemoveListener(UnityEngine::Events::UnityAction_2<T0, T1>* call) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::UnityEvent_2::RemoveListener");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveListener", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(call)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, call);
    }
    // static private UnityEngine.Events.BaseInvokableCall GetDelegate(UnityEngine.Events.UnityAction`2<T0,T1> action)
    // Offset: 0xFFFFFFFF
    static UnityEngine::Events::BaseInvokableCall* GetDelegate(UnityEngine::Events::UnityAction_2<T0, T1>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::UnityEvent_2::GetDelegate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEvent_2<T0, T1>*>::get(), "GetDelegate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(action)})));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::Events::BaseInvokableCall*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, action);
    }
    // public System.Void Invoke(T0 arg0, T1 arg1)
    // Offset: 0xFFFFFFFF
    void Invoke(T0 arg0, T1 arg1) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::UnityEvent_2::Invoke");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg0), ::il2cpp_utils::ExtractType(arg1)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, arg0, arg1);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.UnityEventBase
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityEvent_2<T0, T1>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::UnityEvent_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityEvent_2<T0, T1>*, creationType>()));
    }
    // protected override System.Reflection.MethodInfo FindMethod_Impl(System.String name, System.Object targetObj)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.UnityEventBase
    // Base method: System.Reflection.MethodInfo UnityEventBase::FindMethod_Impl(System.String name, System.Object targetObj)
    System::Reflection::MethodInfo* FindMethod_Impl(::Il2CppString* name, ::Il2CppObject* targetObj) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::UnityEvent_2::FindMethod_Impl");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FindMethod_Impl", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(name), ::il2cpp_utils::ExtractType(targetObj)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Reflection::MethodInfo*, false>(___instance_arg, ___internal__method, name, targetObj);
    }
    // override UnityEngine.Events.BaseInvokableCall GetDelegate(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.UnityEventBase
    // Base method: UnityEngine.Events.BaseInvokableCall UnityEventBase::GetDelegate(System.Object target, System.Reflection.MethodInfo theFunction)
    UnityEngine::Events::BaseInvokableCall* GetDelegate(::Il2CppObject* target, System::Reflection::MethodInfo* theFunction) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::UnityEvent_2::GetDelegate");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetDelegate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(target), ::il2cpp_utils::ExtractType(theFunction)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::Events::BaseInvokableCall*, false>(___instance_arg, ___internal__method, target, theFunction);
    }
  }; // UnityEngine.Events.UnityEvent`2
  // Could not write size check! Type: UnityEngine.Events.UnityEvent`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::UnityEvent_2, "UnityEngine.Events", "UnityEvent`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
