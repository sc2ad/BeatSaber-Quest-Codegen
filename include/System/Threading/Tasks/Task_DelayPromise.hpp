// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.Tasks.VoidTaskResult
#include "System/Threading/Tasks/VoidTaskResult.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Threading.CancellationTokenRegistration
#include "System/Threading/CancellationTokenRegistration.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Timer
  class Timer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::Task::DelayPromise);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Task::DelayPromise*, "System.Threading.Tasks", "Task/DelayPromise");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.Tasks.Task/System.Threading.Tasks.DelayPromise
  // [TokenAttribute] Offset: FFFFFFFF
  class Task::DelayPromise : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> {
    public:
    public:
    // readonly System.Threading.CancellationToken Token
    // Size: 0x8
    // Offset: 0x58
    ::System::Threading::CancellationToken Token;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // System.Threading.CancellationTokenRegistration Registration
    // Size: 0xFFFFFFFF
    // Offset: 0x60
    ::System::Threading::CancellationTokenRegistration Registration;
    // System.Threading.Timer Timer
    // Size: 0x8
    // Offset: 0x78
    ::System::Threading::Timer* Timer;
    // Field size check
    static_assert(sizeof(::System::Threading::Timer*) == 0x8);
    public:
    // Get instance field reference: readonly System.Threading.CancellationToken Token
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_Token();
    // Get instance field reference: System.Threading.CancellationTokenRegistration Registration
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationTokenRegistration& dyn_Registration();
    // Get instance field reference: System.Threading.Timer Timer
    [[deprecated("Use field access instead!")]] ::System::Threading::Timer*& dyn_Timer();
    // System.Void .ctor(System.Threading.CancellationToken token)
    // Offset: 0x1DD8B1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task::DelayPromise* New_ctor(::System::Threading::CancellationToken token) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::Task::DelayPromise::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task::DelayPromise*, creationType>(token)));
    }
    // System.Void Complete()
    // Offset: 0x1DD9CC8
    void Complete();
  }; // System.Threading.Tasks.Task/System.Threading.Tasks.DelayPromise
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::Task::DelayPromise::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::Task::DelayPromise::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::Task::DelayPromise::*)()>(&System::Threading::Tasks::Task::DelayPromise::Complete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::Task::DelayPromise*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
