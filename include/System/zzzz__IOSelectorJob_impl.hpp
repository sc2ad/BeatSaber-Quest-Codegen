#pragma once
namespace {
#include "System/zzzz__IOSelectorJob_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/zzzz__IOAsyncCallback_def.hpp"
#include "System/zzzz__IOOperation_def.hpp"
#include "System/zzzz__IOAsyncResult_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
//  Writing Method size for method: ::System::IOSelectorJob._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IOSelectorJob::*)(::System::IOOperation, ::System::IOAsyncCallback, ::System::IOAsyncResult)>(&::System::IOSelectorJob::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27bbe0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelectorJob>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOSelectorJob.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IOSelectorJob::*)()>(&::System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27bbe48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelectorJob>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOSelectorJob.System_Threading_IThreadPoolWorkItem_MarkAborted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IOSelectorJob::*)(::System::Threading::ThreadAbortException)>(&::System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27bbe70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelectorJob>::get(),
                            "System.Threading.IThreadPoolWorkItem.MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IOSelectorJob.MarkDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IOSelectorJob::*)()>(&::System::IOSelectorJob::MarkDisposed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27bbe74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelectorJob>::get(),
                            "MarkDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Threading::IThreadPoolWorkItem
constexpr  ::System::IOSelectorJob::operator ::System::Threading::IThreadPoolWorkItem() const noexcept {
return ::System::Threading::IThreadPoolWorkItem(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::IOSelectorJob::__set_operation(::System::IOOperation value)  {
::cordl_internals::setInstanceField<::System::IOOperation, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IOOperation>(value));
}
constexpr ::System::IOOperation ::System::IOSelectorJob::__get_operation() const {
return ::cordl_internals::getInstanceField<::System::IOOperation, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::IOSelectorJob::__set_callback(::System::IOAsyncCallback value)  {
::cordl_internals::setInstanceField<::System::IOAsyncCallback, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IOAsyncCallback>(value));
}
constexpr ::System::IOAsyncCallback ::System::IOSelectorJob::__get_callback() const {
return ::cordl_internals::getInstanceField<::System::IOAsyncCallback, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::IOSelectorJob::__set_state(::System::IOAsyncResult value)  {
::cordl_internals::setInstanceField<::System::IOAsyncResult, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IOAsyncResult>(value));
}
constexpr ::System::IOAsyncResult ::System::IOSelectorJob::__get_state() const {
return ::cordl_internals::getInstanceField<::System::IOAsyncResult, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "operation", ty: "::System::IOOperation", modifiers: "", def_value: None }, CppParam { name: "callback", ty: "::System::IOAsyncCallback", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::System::IOAsyncResult", modifiers: "", def_value: None }]
 ::System::IOSelectorJob::IOSelectorJob(::System::IOOperation operation, ::System::IOAsyncCallback callback, ::System::IOAsyncResult state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<IOSelectorJob>(operation, callback, state))) {}
 void ::System::IOSelectorJob::_ctor(::System::IOOperation operation, ::System::IOAsyncCallback callback, ::System::IOAsyncResult state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelectorJob>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, operation, callback, state);
}
 void ::System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelectorJob>::get(),
                            "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::IOSelectorJob::System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException tae)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelectorJob>::get(),
                            "System.Threading.IThreadPoolWorkItem.MarkAborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tae);
}
 void ::System::IOSelectorJob::MarkDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IOSelectorJob>::get(),
                            "MarkDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
