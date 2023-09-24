#pragma once
#include "System/Runtime/Remoting/zzzz__InternalRemotingServices_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::InternalRemotingServices.GetCachedSoapAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Metadata::SoapAttribute (*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Remoting::InternalRemotingServices::GetCachedSoapAttribute)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x231a230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::InternalRemotingServices>::get(),
                            "GetCachedSoapAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Runtime::Remoting::InternalRemotingServices::__set__soapAttributes(System::Collections::Hashtable value)  {
::cordl_internals::setStaticField<System::Collections::Hashtable, "_soapAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::InternalRemotingServices>::get>(std::forward<System::Collections::Hashtable>(value));
}
 System::Collections::Hashtable System::Runtime::Remoting::InternalRemotingServices::__get__soapAttributes()  {
return ::cordl_internals::getStaticField<System::Collections::Hashtable, "_soapAttributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::InternalRemotingServices>::get>();
}
 System::Runtime::Remoting::Metadata::SoapAttribute System::Runtime::Remoting::InternalRemotingServices::GetCachedSoapAttribute(::bs_hook::Il2CppWrapperType reflectionObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::InternalRemotingServices>::get(),
                            "GetCachedSoapAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Metadata::SoapAttribute, false>(nullptr, ___internal_method, reflectionObject);
}
