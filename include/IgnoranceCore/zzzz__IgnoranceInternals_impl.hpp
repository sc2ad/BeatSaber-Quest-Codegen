#pragma once
#include "IgnoranceCore/zzzz__IgnoranceInternals_def.hpp"
//  Writing Method size for method: IgnoranceCore::IgnoranceInternals._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IgnoranceCore::IgnoranceInternals::*)()>(&IgnoranceCore::IgnoranceInternals::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2084854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IgnoranceCore::IgnoranceInternals>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 IgnoranceCore::IgnoranceInternals IgnoranceCore::IgnoranceInternals::New_ctor()  {
IgnoranceCore::IgnoranceInternals o{THROW_UNLESS(::il2cpp_utils::New<IgnoranceCore::IgnoranceInternals>())};
return o;
}
 void IgnoranceCore::IgnoranceInternals::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IgnoranceCore::IgnoranceInternals>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
