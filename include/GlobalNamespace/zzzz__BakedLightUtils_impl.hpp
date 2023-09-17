#pragma once
namespace {
#include "GlobalNamespace/zzzz__BakedLightUtils_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakedLightUtils.ValidateLoadedEnvironmentScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::GlobalNamespace::BakedLightUtils::ValidateLoadedEnvironmentScene)> {
  constexpr static std::size_t size = 0x80c;
  constexpr static std::size_t addrs = 0x219a8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils>::get(),
                            "ValidateLoadedEnvironmentScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::BakedLightUtils::__set__zWritePropertyId(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_zWritePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::BakedLightUtils::__get__zWritePropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "_zWritePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils>::get>();
}
 void ::GlobalNamespace::BakedLightUtils::__set__stencilRefValuePropertyId(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_stencilRefValuePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::BakedLightUtils::__get__stencilRefValuePropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "_stencilRefValuePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils>::get>();
}
 void ::GlobalNamespace::BakedLightUtils::__set__stencilCompPropertyId(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_stencilCompPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::BakedLightUtils::__get__stencilCompPropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "_stencilCompPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils>::get>();
}
 void ::GlobalNamespace::BakedLightUtils::__set__stencilPassOpPropertyId(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_stencilPassOpPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::BakedLightUtils::__get__stencilPassOpPropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "_stencilPassOpPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils>::get>();
}
 void ::GlobalNamespace::BakedLightUtils::ValidateLoadedEnvironmentScene(bool validateBakedGIEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightUtils>::get(),
                            "ValidateLoadedEnvironmentScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, validateBakedGIEnabled);
}
} // end anonymous namespace
