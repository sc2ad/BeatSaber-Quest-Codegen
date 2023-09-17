#pragma once
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
namespace {
#include "System/Threading/Tasks/zzzz__ContinuationTaskFromTask_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromTask._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromTask::*)(::System::Threading::Tasks::Task, ::System::Delegate, ::bs_hook::Il2CppWrapperType, ::System::Threading::Tasks::TaskCreationOptions, ::System::Threading::Tasks::InternalTaskOptions)>(&::System::Threading::Tasks::ContinuationTaskFromTask::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x24baa38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromTask>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ContinuationTaskFromTask.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::ContinuationTaskFromTask::*)()>(&::System::Threading::Tasks::ContinuationTaskFromTask::InnerInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x24bce6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Threading::Tasks::ContinuationTaskFromTask),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromTask>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Threading::Tasks::ContinuationTaskFromTask::__set_m_antecedent(::System::Threading::Tasks::Task value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::Tasks::Task>(value));
}
constexpr ::System::Threading::Tasks::Task ::System::Threading::Tasks::ContinuationTaskFromTask::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "::System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "::System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 ::System::Threading::Tasks::ContinuationTaskFromTask::ContinuationTaskFromTask(::System::Threading::Tasks::Task antecedent, ::System::Delegate action, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions)  : ::System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromTask>(antecedent, action, state, creationOptions, internalOptions))) {}
 void ::System::Threading::Tasks::ContinuationTaskFromTask::_ctor(::System::Threading::Tasks::Task antecedent, ::System::Delegate action, ::bs_hook::Il2CppWrapperType state, ::System::Threading::Tasks::TaskCreationOptions creationOptions, ::System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromTask>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void ::System::Threading::Tasks::ContinuationTaskFromTask::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::ContinuationTaskFromTask>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
