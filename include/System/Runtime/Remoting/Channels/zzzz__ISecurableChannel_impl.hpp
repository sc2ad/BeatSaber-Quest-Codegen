#pragma once
namespace {
#include "System/Runtime/Remoting/Channels/zzzz__ISecurableChannel_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ISecurableChannel.set_IsSecured
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::ISecurableChannel::*)(bool)>(&::System::Runtime::Remoting::Channels::ISecurableChannel::set_IsSecured)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Channels::ISecurableChannel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ISecurableChannel>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::System::Runtime::Remoting::Channels::ISecurableChannel::set_IsSecured(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ISecurableChannel>::get(),
                            "set_IsSecured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
} // end anonymous namespace
