#pragma once
#include "System/Runtime/Remoting/zzzz__EnvoyInfo_def.hpp"
#include "System/Runtime/Remoting/zzzz__IEnvoyInfo_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::EnvoyInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::EnvoyInfo::*)(System::Runtime::Remoting::Messaging::IMessageSink)>(&System::Runtime::Remoting::EnvoyInfo::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2319dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::EnvoyInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::EnvoyInfo.get_EnvoySinks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageSink (System::Runtime::Remoting::EnvoyInfo::*)()>(&System::Runtime::Remoting::EnvoyInfo::get_EnvoySinks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2319e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::EnvoyInfo>::get(),
                            "get_EnvoySinks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Remoting::IEnvoyInfo
constexpr  System::Runtime::Remoting::EnvoyInfo::operator System::Runtime::Remoting::IEnvoyInfo() const noexcept {
return System::Runtime::Remoting::IEnvoyInfo(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::EnvoyInfo::__set_envoySinks(System::Runtime::Remoting::Messaging::IMessageSink value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::Messaging::IMessageSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::Messaging::IMessageSink>(value));
}
constexpr System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::EnvoyInfo::__get_envoySinks() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::Messaging::IMessageSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::Remoting::EnvoyInfo System::Runtime::Remoting::EnvoyInfo::New_ctor(System::Runtime::Remoting::Messaging::IMessageSink sinks)  {
System::Runtime::Remoting::EnvoyInfo o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Remoting::EnvoyInfo>(sinks))};
return o;
}
 void System::Runtime::Remoting::EnvoyInfo::_ctor(System::Runtime::Remoting::Messaging::IMessageSink sinks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::EnvoyInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sinks);
}
 System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::EnvoyInfo::get_EnvoySinks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::EnvoyInfo>::get(),
                            "get_EnvoySinks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageSink, false>(const_cast<void*>(instance), ___internal_method);
}
