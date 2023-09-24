#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MethodReturnDictionary_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Messaging::MethodReturnDictionary._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodReturnDictionary::*)(System::Runtime::Remoting::Messaging::IMethodReturnMessage)>(&System::Runtime::Remoting::Messaging::MethodReturnDictionary::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2344588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::MethodReturnDictionary>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodReturnMessage>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Runtime::Remoting::Messaging::MethodReturnDictionary::__set_InternalReturnKeys(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "InternalReturnKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::MethodReturnDictionary>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Runtime::Remoting::Messaging::MethodReturnDictionary::__get_InternalReturnKeys()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "InternalReturnKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::MethodReturnDictionary>::get>();
}
 void System::Runtime::Remoting::Messaging::MethodReturnDictionary::__set_InternalExceptionKeys(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "InternalExceptionKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::MethodReturnDictionary>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> System::Runtime::Remoting::Messaging::MethodReturnDictionary::__get_InternalExceptionKeys()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "InternalExceptionKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::MethodReturnDictionary>::get>();
}
 System::Runtime::Remoting::Messaging::MethodReturnDictionary System::Runtime::Remoting::Messaging::MethodReturnDictionary::New_ctor(System::Runtime::Remoting::Messaging::IMethodReturnMessage message)  {
System::Runtime::Remoting::Messaging::MethodReturnDictionary o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Remoting::Messaging::MethodReturnDictionary>(message))};
return o;
}
 void System::Runtime::Remoting::Messaging::MethodReturnDictionary::_ctor(System::Runtime::Remoting::Messaging::IMethodReturnMessage message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::MethodReturnDictionary>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMethodReturnMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
