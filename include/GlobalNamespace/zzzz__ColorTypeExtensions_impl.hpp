#pragma once
#include "GlobalNamespace/zzzz__ColorTypeExtensions_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
//  Writing Method size for method: GlobalNamespace::ColorTypeExtensions.Opposite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorType (*)(GlobalNamespace::ColorType)>(&GlobalNamespace::ColorTypeExtensions::Opposite)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xd93bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ColorTypeExtensions>::get(),
                            "Opposite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get()}
                        )));
    return ___internal_method;
  }
};
 GlobalNamespace::ColorType GlobalNamespace::ColorTypeExtensions::Opposite(GlobalNamespace::ColorType colorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ColorTypeExtensions>::get(),
                            "Opposite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ColorType, false>(nullptr, ___internal_method, colorType);
}
