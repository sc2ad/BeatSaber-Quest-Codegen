#pragma once
namespace {
#include "GlobalNamespace/zzzz__HealthCheckService_def.hpp"
#include "GlobalNamespace/zzzz__IHealthCheckService_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthCheckService._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthCheckService::*)(int32_t)>(&::GlobalNamespace::HealthCheckService::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xdaf44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthCheckService.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthCheckService::*)()>(&::GlobalNamespace::HealthCheckService::Dispose)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xdaf550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthCheckService.PollUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthCheckService::*)()>(&::GlobalNamespace::HealthCheckService::PollUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xdaf5f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthCheckService.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthCheckService::*)()>(&::GlobalNamespace::HealthCheckService::Run)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0xdaf688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IHealthCheckService
constexpr  ::GlobalNamespace::HealthCheckService::operator ::GlobalNamespace::IHealthCheckService() const noexcept {
return ::GlobalNamespace::IHealthCheckService(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::GlobalNamespace::IPollable
constexpr  ::GlobalNamespace::HealthCheckService::operator ::GlobalNamespace::IPollable() const noexcept {
return ::GlobalNamespace::IPollable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::HealthCheckService::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::HealthCheckService::__set__port(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::HealthCheckService::__get__port() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::HealthCheckService::__set__runThread(::System::Threading::Thread value)  {
::cordl_internals::setInstanceField<::System::Threading::Thread, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::Thread>(value));
}
constexpr ::System::Threading::Thread ::GlobalNamespace::HealthCheckService::__get__runThread() const {
return ::cordl_internals::getInstanceField<::System::Threading::Thread, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::HealthCheckService::__set__disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::HealthCheckService::__get__disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::HealthCheckService::__set__manualResetEvent(::System::Threading::ManualResetEvent value)  {
::cordl_internals::setInstanceField<::System::Threading::ManualResetEvent, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::ManualResetEvent>(value));
}
constexpr ::System::Threading::ManualResetEvent ::GlobalNamespace::HealthCheckService::__get__manualResetEvent() const {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::HealthCheckService::__set__listener(::System::Net::HttpListener value)  {
::cordl_internals::setInstanceField<::System::Net::HttpListener, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::HttpListener>(value));
}
constexpr ::System::Net::HttpListener ::GlobalNamespace::HealthCheckService::__get__listener() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpListener, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::HealthCheckService::HealthCheckService(int32_t port)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HealthCheckService>(port))) {}
 void ::GlobalNamespace::HealthCheckService::_ctor(int32_t port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, port);
}
 void ::GlobalNamespace::HealthCheckService::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::HealthCheckService::PollUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::HealthCheckService::Run()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthCheckService>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
