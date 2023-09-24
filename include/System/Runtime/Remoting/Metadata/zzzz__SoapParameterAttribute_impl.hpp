#pragma once
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_impl.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapParameterAttribute_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Metadata::SoapParameterAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Metadata::SoapParameterAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapParameterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2339cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Metadata::SoapParameterAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Runtime::Remoting::Metadata::SoapParameterAttribute System::Runtime::Remoting::Metadata::SoapParameterAttribute::New_ctor()  {
System::Runtime::Remoting::Metadata::SoapParameterAttribute o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Remoting::Metadata::SoapParameterAttribute>())};
return o;
}
 void System::Runtime::Remoting::Metadata::SoapParameterAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Metadata::SoapParameterAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
