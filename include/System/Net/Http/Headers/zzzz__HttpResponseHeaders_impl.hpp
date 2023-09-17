#pragma once
#include "System/Net/Http/Headers/zzzz__HttpHeaders_impl.hpp"
namespace {
#include "System/Net/Http/Headers/zzzz__HttpResponseHeaders_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::HttpResponseHeaders._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::Headers::HttpResponseHeaders::*)()>(&::System::Net::Http::Headers::HttpResponseHeaders::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x26a2708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpResponseHeaders>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Net::Http::Headers::HttpResponseHeaders::HttpResponseHeaders()  : ::System::Net::Http::Headers::HttpHeaders(THROW_UNLESS(::il2cpp_utils::New<HttpResponseHeaders>())) {}
 void ::System::Net::Http::Headers::HttpResponseHeaders::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpResponseHeaders>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
