#pragma once
namespace {
#include "Mono/zzzz__X509Pal_def.hpp"
#include "Mono/zzzz__X509PalImpl_def.hpp"
//  Writing Method size for method: ::Mono::X509Pal.get_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::X509PalImpl (*)()>(&::Mono::X509Pal::get_Instance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2685524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509Pal>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::Mono::X509PalImpl ::Mono::X509Pal::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::X509Pal>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::X509PalImpl, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
