#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MCMDictionary_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodMessage_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Messaging::MCMDictionary._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MCMDictionary::*)(System::Runtime::Remoting::Messaging::IMethodMessage)>(&System::Runtime::Remoting::Messaging::MCMDictionary::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2341f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::MCMDictionary>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodMessage>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Runtime::Remoting::Messaging::MCMDictionary::__set_InternalKeys(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "InternalKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::MCMDictionary>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Runtime::Remoting::Messaging::MCMDictionary::__get_InternalKeys()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "InternalKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::MCMDictionary>::get>();
}
// Ctor Parameters [CppParam { name: "message", ty: "System::Runtime::Remoting::Messaging::IMethodMessage", modifiers: "", def_value: None }]
 System::Runtime::Remoting::Messaging::MCMDictionary::MCMDictionary(System::Runtime::Remoting::Messaging::IMethodMessage message)  : System::Runtime::Remoting::Messaging::MessageDictionary(THROW_UNLESS(::il2cpp_utils::New<MCMDictionary>(message))) {}
 void System::Runtime::Remoting::Messaging::MCMDictionary::_ctor(System::Runtime::Remoting::Messaging::IMethodMessage message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::MCMDictionary>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
