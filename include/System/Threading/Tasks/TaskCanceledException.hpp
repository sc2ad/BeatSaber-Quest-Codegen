// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.OperationCanceledException
#include "System/OperationCanceledException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCanceledException
  class TaskCanceledException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::TaskCanceledException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskCanceledException*, "System.Threading.Tasks", "TaskCanceledException");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.TaskCanceledException
  // [TokenAttribute] Offset: FFFFFFFF
  class TaskCanceledException : public ::System::OperationCanceledException {
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
    // private System.Threading.Tasks.Task m_canceledTask
    // Size: 0x8
    // Offset: 0x90
    ::System::Threading::Tasks::Task* m_canceledTask;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Threading::CancellationToken
    constexpr operator ::System::Threading::CancellationToken() const noexcept = delete;
    // Get instance field reference: private System.Threading.Tasks.Task m_canceledTask
    ::System::Threading::Tasks::Task*& dyn_m_canceledTask();
    // public System.Void .ctor(System.Threading.Tasks.Task task)
    // Offset: 0x1CF2BFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskCanceledException* New_ctor(::System::Threading::Tasks::Task* task) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::TaskCanceledException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskCanceledException*, creationType>(task)));
    }
    // public System.Void .ctor()
    // Offset: 0x1CF2B94
    // Implemented from: System.OperationCanceledException
    // Base method: System.Void OperationCanceledException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskCanceledException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::TaskCanceledException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskCanceledException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1CF2BF4
    // Implemented from: System.OperationCanceledException
    // Base method: System.Void OperationCanceledException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskCanceledException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::TaskCanceledException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskCanceledException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1CF2C98
    // Implemented from: System.OperationCanceledException
    // Base method: System.Void OperationCanceledException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskCanceledException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::TaskCanceledException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskCanceledException*, creationType>(info, context)));
    }
  }; // System.Threading.Tasks.TaskCanceledException
  #pragma pack(pop)
  static check_size<sizeof(TaskCanceledException), 144 + sizeof(::System::Threading::Tasks::Task*)> __System_Threading_Tasks_TaskCanceledExceptionSizeCheck;
  static_assert(sizeof(TaskCanceledException) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::TaskCanceledException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskCanceledException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskCanceledException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskCanceledException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
