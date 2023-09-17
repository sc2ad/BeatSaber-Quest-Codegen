#pragma once
namespace {
#include "GlobalNamespace/zzzz__ColorSchemeConverter_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeConverter.FromNetSerializable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorScheme (*)(::GlobalNamespace::ColorSchemeNetSerializable)>(&::GlobalNamespace::ColorSchemeConverter::FromNetSerializable)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2191fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeConverter>::get(),
                            "FromNetSerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorSchemeNetSerializable>::get()}
                        )));
    return ___internal_method;
  }
};
 ::GlobalNamespace::ColorScheme ::GlobalNamespace::ColorSchemeConverter::FromNetSerializable(::GlobalNamespace::ColorSchemeNetSerializable serialized)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemeConverter>::get(),
                            "FromNetSerializable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorSchemeNetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme, false>(nullptr, ___internal_method, serialized);
}
} // end anonymous namespace
