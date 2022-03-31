// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ThreadAbortException
  class ThreadAbortException;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: IThreadPoolWorkItem
  class IThreadPoolWorkItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::IThreadPoolWorkItem);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::IThreadPoolWorkItem*, "System.Threading", "IThreadPoolWorkItem");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.IThreadPoolWorkItem
  // [TokenAttribute] Offset: FFFFFFFF
  class IThreadPoolWorkItem {
    public:
    // public System.Void ExecuteWorkItem()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ExecuteWorkItem();
    // public System.Void MarkAborted(System.Threading.ThreadAbortException tae)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void MarkAborted(::System::Threading::ThreadAbortException* tae);
  }; // System.Threading.IThreadPoolWorkItem
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::IThreadPoolWorkItem::ExecuteWorkItem
// Il2CppName: ExecuteWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::IThreadPoolWorkItem::*)()>(&System::Threading::IThreadPoolWorkItem::ExecuteWorkItem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::IThreadPoolWorkItem*), "ExecuteWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::IThreadPoolWorkItem::MarkAborted
// Il2CppName: MarkAborted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::IThreadPoolWorkItem::*)(::System::Threading::ThreadAbortException*)>(&System::Threading::IThreadPoolWorkItem::MarkAborted)> {
  static const MethodInfo* get() {
    static auto* tae = &::il2cpp_utils::GetClassFromName("System.Threading", "ThreadAbortException")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::IThreadPoolWorkItem*), "MarkAborted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tae});
  }
};
