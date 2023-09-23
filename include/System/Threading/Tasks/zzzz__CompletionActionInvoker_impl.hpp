#pragma once
#include "System/Threading/Tasks/zzzz__CompletionActionInvoker_def.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
//  Writing Method size for method: System::Threading::Tasks::CompletionActionInvoker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::CompletionActionInvoker::*)(System::Threading::Tasks::ITaskCompletionAction, System::Threading::Tasks::Task)>(&System::Threading::Tasks::CompletionActionInvoker::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24ba614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::CompletionActionInvoker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::ITaskCompletionAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::CompletionActionInvoker.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::CompletionActionInvoker::*)()>(&System::Threading::Tasks::CompletionActionInvoker::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x24bcd6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::CompletionActionInvoker>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::CompletionActionInvoker.MarkAborted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::CompletionActionInvoker::*)(System::Threading::ThreadAbortException)>(&System::Threading::Tasks::CompletionActionInvoker::MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24bce14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::CompletionActionInvoker>::get(),
                            "MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadAbortException>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Threading::IThreadPoolWorkItem
constexpr  System::Threading::Tasks::CompletionActionInvoker::operator System::Threading::IThreadPoolWorkItem() const noexcept {
return System::Threading::IThreadPoolWorkItem(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::CompletionActionInvoker::__set_m_action(System::Threading::Tasks::ITaskCompletionAction value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::ITaskCompletionAction, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::ITaskCompletionAction>(value));
}
constexpr System::Threading::Tasks::ITaskCompletionAction System::Threading::Tasks::CompletionActionInvoker::__get_m_action() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::ITaskCompletionAction, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::CompletionActionInvoker::__set_m_completingTask(System::Threading::Tasks::Task value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task>(value));
}
constexpr System::Threading::Tasks::Task System::Threading::Tasks::CompletionActionInvoker::__get_m_completingTask() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "action", ty: "System::Threading::Tasks::ITaskCompletionAction", modifiers: "", def_value: None }, CppParam { name: "completingTask", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: None }]
 System::Threading::Tasks::CompletionActionInvoker::CompletionActionInvoker(System::Threading::Tasks::ITaskCompletionAction action, System::Threading::Tasks::Task completingTask)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CompletionActionInvoker>(action, completingTask))) {}
 void System::Threading::Tasks::CompletionActionInvoker::_ctor(System::Threading::Tasks::ITaskCompletionAction action, System::Threading::Tasks::Task completingTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::CompletionActionInvoker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::ITaskCompletionAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action, completingTask);
}
 void System::Threading::Tasks::CompletionActionInvoker::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::CompletionActionInvoker>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::CompletionActionInvoker::MarkAborted(System::Threading::ThreadAbortException e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::CompletionActionInvoker>::get(),
                            "MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::ThreadAbortException>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
