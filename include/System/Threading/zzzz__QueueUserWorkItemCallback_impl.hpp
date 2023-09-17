#pragma once
namespace {
#include "System/Threading/zzzz__QueueUserWorkItemCallback_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
//  Writing Method size for method: ::System::Threading::QueueUserWorkItemCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::QueueUserWorkItemCallback::*)(::System::Threading::WaitCallback, ::bs_hook::Il2CppWrapperType, bool, ByRef<::System::Threading::StackCrawlMark>)>(&::System::Threading::QueueUserWorkItemCallback::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x24aee00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::QueueUserWorkItemCallback.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::QueueUserWorkItemCallback::*)()>(&::System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x24aeeb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::QueueUserWorkItemCallback.System_Threading_IThreadPoolWorkItem_MarkAborted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::QueueUserWorkItemCallback::*)(::System::Threading::ThreadAbortException)>(&::System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24aef90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback>::get(),
                            "System.Threading.IThreadPoolWorkItem.MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::QueueUserWorkItemCallback.WaitCallback_Context
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&::System::Threading::QueueUserWorkItemCallback::WaitCallback_Context)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24aef94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback>::get(),
                            "WaitCallback_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Threading::IThreadPoolWorkItem
constexpr  ::System::Threading::QueueUserWorkItemCallback::operator ::System::Threading::IThreadPoolWorkItem() const noexcept {
return ::System::Threading::IThreadPoolWorkItem(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::QueueUserWorkItemCallback::__set_callback(::System::Threading::WaitCallback value)  {
::cordl_internals::setInstanceField<::System::Threading::WaitCallback, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::WaitCallback>(value));
}
constexpr ::System::Threading::WaitCallback ::System::Threading::QueueUserWorkItemCallback::__get_callback() const {
return ::cordl_internals::getInstanceField<::System::Threading::WaitCallback, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::QueueUserWorkItemCallback::__set_context(::System::Threading::ExecutionContext value)  {
::cordl_internals::setInstanceField<::System::Threading::ExecutionContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::ExecutionContext>(value));
}
constexpr ::System::Threading::ExecutionContext ::System::Threading::QueueUserWorkItemCallback::__get_context() const {
return ::cordl_internals::getInstanceField<::System::Threading::ExecutionContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::QueueUserWorkItemCallback::__set_state(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Threading::QueueUserWorkItemCallback::__get_state() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Threading::QueueUserWorkItemCallback::__set_ccb(::System::Threading::ContextCallback value)  {
::cordl_internals::setStaticField<::System::Threading::ContextCallback, "ccb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback>::get>(std::forward<::System::Threading::ContextCallback>(value));
}
 ::System::Threading::ContextCallback ::System::Threading::QueueUserWorkItemCallback::__get_ccb()  {
return ::cordl_internals::getStaticField<::System::Threading::ContextCallback, "ccb", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback>::get>();
}
// Ctor Parameters [CppParam { name: "waitCallback", ty: "::System::Threading::WaitCallback", modifiers: "", def_value: None }, CppParam { name: "stateObj", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "compressStack", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "stackMark", ty: "ByRef<::System::Threading::StackCrawlMark>", modifiers: "", def_value: None }]
 ::System::Threading::QueueUserWorkItemCallback::QueueUserWorkItemCallback(::System::Threading::WaitCallback waitCallback, ::bs_hook::Il2CppWrapperType stateObj, bool compressStack, ByRef<::System::Threading::StackCrawlMark> stackMark)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<QueueUserWorkItemCallback>(waitCallback, stateObj, compressStack, stackMark))) {}
 void ::System::Threading::QueueUserWorkItemCallback::_ctor(::System::Threading::WaitCallback waitCallback, ::bs_hook::Il2CppWrapperType stateObj, bool compressStack, ByRef<::System::Threading::StackCrawlMark> stackMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::WaitCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, waitCallback, stateObj, compressStack, stackMark);
}
 void ::System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException tae)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback>::get(),
                            "System.Threading.IThreadPoolWorkItem.MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tae);
}
 void ::System::Threading::QueueUserWorkItemCallback::WaitCallback_Context(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::QueueUserWorkItemCallback>::get(),
                            "WaitCallback_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
} // end anonymous namespace
