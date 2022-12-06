// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: AsyncHelper
  class AsyncHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::AsyncHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::AsyncHelper*, "System.Xml", "AsyncHelper");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.AsyncHelper
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class AsyncHelper : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Threading.Tasks.Task DoneTask
    static ::System::Threading::Tasks::Task* _get_DoneTask();
    // Set static field: static public readonly System.Threading.Tasks.Task DoneTask
    static void _set_DoneTask(::System::Threading::Tasks::Task* value);
    // Get static field: static public readonly System.Threading.Tasks.Task`1<System.Boolean> DoneTaskTrue
    static ::System::Threading::Tasks::Task_1<bool>* _get_DoneTaskTrue();
    // Set static field: static public readonly System.Threading.Tasks.Task`1<System.Boolean> DoneTaskTrue
    static void _set_DoneTaskTrue(::System::Threading::Tasks::Task_1<bool>* value);
    // Get static field: static public readonly System.Threading.Tasks.Task`1<System.Boolean> DoneTaskFalse
    static ::System::Threading::Tasks::Task_1<bool>* _get_DoneTaskFalse();
    // Set static field: static public readonly System.Threading.Tasks.Task`1<System.Boolean> DoneTaskFalse
    static void _set_DoneTaskFalse(::System::Threading::Tasks::Task_1<bool>* value);
    // Get static field: static public readonly System.Threading.Tasks.Task`1<System.Int32> DoneTaskZero
    static ::System::Threading::Tasks::Task_1<int>* _get_DoneTaskZero();
    // Set static field: static public readonly System.Threading.Tasks.Task`1<System.Int32> DoneTaskZero
    static void _set_DoneTaskZero(::System::Threading::Tasks::Task_1<int>* value);
    // static private System.Void .cctor()
    // Offset: 0x1ADBF14
    static void _cctor();
  }; // System.Xml.AsyncHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::AsyncHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::AsyncHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::AsyncHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
