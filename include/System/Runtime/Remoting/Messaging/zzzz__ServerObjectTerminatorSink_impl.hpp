#pragma once
namespace {
#include "System/Runtime/Remoting/Messaging/zzzz__ServerObjectTerminatorSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::*)(::System::Runtime::Remoting::Messaging::IMessageSink)>(&::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2347350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink.SyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage (::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::*)(::System::Runtime::Remoting::Messaging::IMessage)>(&::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2347378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink.AsyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl (::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::*)(::System::Runtime::Remoting::Messaging::IMessage, ::System::Runtime::Remoting::Messaging::IMessageSink)>(&::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x23474ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMessageSink
constexpr  ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::operator ::System::Runtime::Remoting::Messaging::IMessageSink() const noexcept {
return ::System::Runtime::Remoting::Messaging::IMessageSink(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::__set__nextSink(::System::Runtime::Remoting::Messaging::IMessageSink value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::IMessageSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Messaging::IMessageSink>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::__get__nextSink() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::IMessageSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "nextSink", ty: "::System::Runtime::Remoting::Messaging::IMessageSink", modifiers: "", def_value: None }]
 ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::ServerObjectTerminatorSink(::System::Runtime::Remoting::Messaging::IMessageSink nextSink)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ServerObjectTerminatorSink>(nextSink))) {}
 void ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::_ctor(::System::Runtime::Remoting::Messaging::IMessageSink nextSink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nextSink);
}
 ::System::Runtime::Remoting::Messaging::IMessage ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 ::System::Runtime::Remoting::Messaging::IMessageCtrl ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msg, ::System::Runtime::Remoting::Messaging::IMessageSink replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl, false>(const_cast<void*>(instance), ___internal_method, msg, replySink);
}
} // end anonymous namespace
