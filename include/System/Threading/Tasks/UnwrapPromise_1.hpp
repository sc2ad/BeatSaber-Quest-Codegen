// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.Tasks.ITaskCompletionAction
#include "System/Threading/Tasks/ITaskCompletionAction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Skipping declaration: <>c because it is already included!
  // Skipping declaration: Task because it is already included!
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitCallback
  class WaitCallback;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: UnwrapPromise`1<TResult>
  template<typename TResult>
  class UnwrapPromise_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::UnwrapPromise_1, "System.Threading.Tasks", "UnwrapPromise`1");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.Tasks.UnwrapPromise`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TResult>
  class UnwrapPromise_1 : public ::System::Threading::Tasks::Task_1<TResult>/*, public ::System::Threading::Tasks::ITaskCompletionAction*/ {
    public:
    // Nested type: ::System::Threading::Tasks::UnwrapPromise_1::$$c<TResult>
    class $$c;
    // WARNING Size may be invalid!
    // Autogenerated type: System.Threading.Tasks.UnwrapPromise`1/System.Threading.Tasks.<>c
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: 1189AFC
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = UnwrapPromise_1<TResult>*;
      static constexpr std::string_view NESTED_NAME = "<>c";
      static constexpr bool IS_VALUE_TYPE = false;
      // Autogenerated static field getter
      // Get static field: static public readonly System.Threading.Tasks.UnwrapPromise`1/System.Threading.Tasks.<>c<TResult> <>9
      static typename ::System::Threading::Tasks::UnwrapPromise_1<TResult>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnwrapPromise_1::$$c::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename ::System::Threading::Tasks::UnwrapPromise_1<TResult>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename UnwrapPromise_1<TResult>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly System.Threading.Tasks.UnwrapPromise`1/System.Threading.Tasks.<>c<TResult> <>9
      static void _set_$$9(typename ::System::Threading::Tasks::UnwrapPromise_1<TResult>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnwrapPromise_1::$$c::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename UnwrapPromise_1<TResult>::$$c*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Threading.WaitCallback <>9__8_0
      static ::System::Threading::WaitCallback* _get_$$9__8_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnwrapPromise_1::$$c::_get_$$9__8_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Threading::WaitCallback*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename UnwrapPromise_1<TResult>::$$c*>::get(), "<>9__8_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Threading.WaitCallback <>9__8_0
      static void _set_$$9__8_0(::System::Threading::WaitCallback* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnwrapPromise_1::$$c::_set_$$9__8_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename UnwrapPromise_1<TResult>::$$c*>::get(), "<>9__8_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnwrapPromise_1::$$c::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename UnwrapPromise_1<TResult>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // System.Void <InvokeCoreAsync>b__8_0(System.Object state)
      // Offset: 0xFFFFFFFF
      void $InvokeCoreAsync$b__8_0(::Il2CppObject* state) {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnwrapPromise_1::$$c::<InvokeCoreAsync>b__8_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<InvokeCoreAsync>b__8_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(state)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, state);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename UnwrapPromise_1<TResult>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnwrapPromise_1::$$c::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename UnwrapPromise_1<TResult>::$$c*, creationType>()));
      }
    }; // System.Threading.Tasks.UnwrapPromise`1/System.Threading.Tasks.<>c
    // Could not write size check! Type: System.Threading.Tasks.UnwrapPromise`1/System.Threading.Tasks.<>c is generic, or has no fields that are valid for size checks!
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Byte _state
    // Size: 0x1
    // Offset: 0x0
    uint8_t state;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private readonly System.Boolean _lookForOce
    // Size: 0x1
    // Offset: 0x0
    bool lookForOce;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Threading::Tasks::ITaskCompletionAction
    operator ::System::Threading::Tasks::ITaskCompletionAction() noexcept {
      return *reinterpret_cast<::System::Threading::Tasks::ITaskCompletionAction*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Byte _state
    uint8_t& dyn__state() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnwrapPromise_1::dyn__state");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_state"))->offset;
      return *reinterpret_cast<uint8_t*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Boolean _lookForOce
    bool& dyn__lookForOce() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnwrapPromise_1::dyn__lookForOce");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_lookForOce"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Threading.Tasks.Task outerTask, System.Boolean lookForOce)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnwrapPromise_1<TResult>* New_ctor(::System::Threading::Tasks::Task* outerTask, bool lookForOce) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnwrapPromise_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnwrapPromise_1<TResult>*, creationType>(outerTask, lookForOce)));
    }
    // public System.Void Invoke(System.Threading.Tasks.Task completingTask)
    // Offset: 0xFFFFFFFF
    void Invoke(::System::Threading::Tasks::Task* completingTask) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnwrapPromise_1::Invoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(completingTask)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, completingTask);
    }
    // private System.Void InvokeCore(System.Threading.Tasks.Task completingTask)
    // Offset: 0xFFFFFFFF
    void InvokeCore(::System::Threading::Tasks::Task* completingTask) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnwrapPromise_1::InvokeCore");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InvokeCore", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(completingTask)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, completingTask);
    }
    // private System.Void InvokeCoreAsync(System.Threading.Tasks.Task completingTask)
    // Offset: 0xFFFFFFFF
    void InvokeCoreAsync(::System::Threading::Tasks::Task* completingTask) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnwrapPromise_1::InvokeCoreAsync");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "InvokeCoreAsync", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(completingTask)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, completingTask);
    }
    // private System.Void ProcessCompletedOuterTask(System.Threading.Tasks.Task task)
    // Offset: 0xFFFFFFFF
    void ProcessCompletedOuterTask(::System::Threading::Tasks::Task* task) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnwrapPromise_1::ProcessCompletedOuterTask");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ProcessCompletedOuterTask", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(task)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, task);
    }
    // private System.Boolean TrySetFromTask(System.Threading.Tasks.Task task, System.Boolean lookForOce)
    // Offset: 0xFFFFFFFF
    bool TrySetFromTask(::System::Threading::Tasks::Task* task, bool lookForOce) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnwrapPromise_1::TrySetFromTask");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TrySetFromTask", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(task), ::il2cpp_utils::ExtractType(lookForOce)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, task, lookForOce);
    }
    // private System.Void ProcessInnerTask(System.Threading.Tasks.Task task)
    // Offset: 0xFFFFFFFF
    void ProcessInnerTask(::System::Threading::Tasks::Task* task) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnwrapPromise_1::ProcessInnerTask");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ProcessInnerTask", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(task)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, task);
    }
  }; // System.Threading.Tasks.UnwrapPromise`1
  // Could not write size check! Type: System.Threading.Tasks.UnwrapPromise`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
