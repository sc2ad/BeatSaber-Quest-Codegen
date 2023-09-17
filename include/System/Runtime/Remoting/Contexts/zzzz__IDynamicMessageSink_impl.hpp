#pragma once
namespace {
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IDynamicMessageSink.ProcessMessageFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::IDynamicMessageSink::*)(::System::Runtime::Remoting::Messaging::IMessage, bool, bool)>(&::System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Contexts::IDynamicMessageSink),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IDynamicMessageSink>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::IDynamicMessageSink.ProcessMessageStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::IDynamicMessageSink::*)(::System::Runtime::Remoting::Messaging::IMessage, bool, bool)>(&::System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageStart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Contexts::IDynamicMessageSink),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IDynamicMessageSink>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void ::System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageFinish(::System::Runtime::Remoting::Messaging::IMessage replyMsg, bool bCliSide, bool bAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IDynamicMessageSink>::get(),
                            "ProcessMessageFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, replyMsg, bCliSide, bAsync);
}
 void ::System::Runtime::Remoting::Contexts::IDynamicMessageSink::ProcessMessageStart(::System::Runtime::Remoting::Messaging::IMessage reqMsg, bool bCliSide, bool bAsync)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::IDynamicMessageSink>::get(),
                            "ProcessMessageStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reqMsg, bCliSide, bAsync);
}
} // end anonymous namespace
