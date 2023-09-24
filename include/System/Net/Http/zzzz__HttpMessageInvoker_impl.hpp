#pragma once
#include "System/Net/Http/zzzz__HttpMessageInvoker_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Net/Http/zzzz__HttpMessageHandler_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
//  Writing Method size for method: System::Net::Http::HttpMessageInvoker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpMessageInvoker::*)(System::Net::Http::HttpMessageHandler, bool)>(&System::Net::Http::HttpMessageInvoker::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x269f3a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpMessageInvoker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::HttpMessageHandler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpMessageInvoker.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpMessageInvoker::*)()>(&System::Net::Http::HttpMessageInvoker::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26a1ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpMessageInvoker>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpMessageInvoker.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpMessageInvoker::*)(bool)>(&System::Net::Http::HttpMessageInvoker::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x269f5d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Http::HttpMessageInvoker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpMessageInvoker>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpMessageInvoker.SendAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage> (System::Net::Http::HttpMessageInvoker::*)(System::Net::Http::HttpRequestMessage, System::Threading::CancellationToken)>(&System::Net::Http::HttpMessageInvoker::SendAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26a0014;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Http::HttpMessageInvoker),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpMessageInvoker>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  System::Net::Http::HttpMessageInvoker::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Http::HttpMessageInvoker::__set_handler(System::Net::Http::HttpMessageHandler value)  {
::cordl_internals::setInstanceField<System::Net::Http::HttpMessageHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Http::HttpMessageHandler>(value));
}
constexpr System::Net::Http::HttpMessageHandler System::Net::Http::HttpMessageInvoker::__get_handler() const {
return ::cordl_internals::getInstanceField<System::Net::Http::HttpMessageHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Http::HttpMessageInvoker::__set_disposeHandler(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Http::HttpMessageInvoker::__get_disposeHandler() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::Http::HttpMessageInvoker System::Net::Http::HttpMessageInvoker::New_ctor(System::Net::Http::HttpMessageHandler handler, bool disposeHandler)  {
System::Net::Http::HttpMessageInvoker o{THROW_UNLESS(::il2cpp_utils::New<System::Net::Http::HttpMessageInvoker>(handler, disposeHandler))};
return o;
}
 void System::Net::Http::HttpMessageInvoker::_ctor(System::Net::Http::HttpMessageHandler handler, bool disposeHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpMessageInvoker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::HttpMessageHandler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, handler, disposeHandler);
}
 void System::Net::Http::HttpMessageInvoker::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpMessageInvoker>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Http::HttpMessageInvoker::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpMessageInvoker>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage> System::Net::Http::HttpMessageInvoker::SendAsync(System::Net::Http::HttpRequestMessage request, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpMessageInvoker>::get(),
                            "SendAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::HttpRequestMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage>, false>(const_cast<void*>(instance), ___internal_method, request, cancellationToken);
}
