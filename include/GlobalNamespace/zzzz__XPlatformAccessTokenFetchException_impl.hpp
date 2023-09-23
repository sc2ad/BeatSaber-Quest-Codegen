#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenFetchException_def.hpp"
//  Writing Method size for method: GlobalNamespace::XPlatformAccessTokenFetchException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::XPlatformAccessTokenFetchException::*)(::StringW)>(&GlobalNamespace::XPlatformAccessTokenFetchException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x221cca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::XPlatformAccessTokenFetchException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
 GlobalNamespace::XPlatformAccessTokenFetchException::XPlatformAccessTokenFetchException(::StringW message)  : System::Exception(THROW_UNLESS(::il2cpp_utils::New<XPlatformAccessTokenFetchException>(message))) {}
 void GlobalNamespace::XPlatformAccessTokenFetchException::_ctor(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::XPlatformAccessTokenFetchException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
