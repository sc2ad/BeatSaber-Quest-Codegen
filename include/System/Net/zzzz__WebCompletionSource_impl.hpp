#pragma once
#include "System/Net/zzzz__WebCompletionSource_1_impl.hpp"
#include "System/Net/zzzz__WebCompletionSource_def.hpp"
//  Writing Method size for method: System::Net::WebCompletionSource._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebCompletionSource::*)()>(&System::Net::WebCompletionSource::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x284a40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebCompletionSource>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Net::WebCompletionSource System::Net::WebCompletionSource::New_ctor()  {
System::Net::WebCompletionSource o{THROW_UNLESS(::il2cpp_utils::New<System::Net::WebCompletionSource>())};
return o;
}
 void System::Net::WebCompletionSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebCompletionSource>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
