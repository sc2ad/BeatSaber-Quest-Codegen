#pragma once
#include "System/Net/Mime/zzzz__EncodedStreamFactory_def.hpp"
//  Writing Method size for method: System::Net::Mime::EncodedStreamFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Mime::EncodedStreamFactory::*)()>(&System::Net::Mime::EncodedStreamFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276ee00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Mime::EncodedStreamFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Net::Mime::EncodedStreamFactory System::Net::Mime::EncodedStreamFactory::New_ctor()  {
System::Net::Mime::EncodedStreamFactory o{THROW_UNLESS(::il2cpp_utils::New<System::Net::Mime::EncodedStreamFactory>())};
return o;
}
 void System::Net::Mime::EncodedStreamFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Mime::EncodedStreamFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
