#pragma once
namespace {
#include "GlobalNamespace/zzzz__MainEffectCore_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainEffectCore.SetGlobalShaderValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t)>(&::GlobalNamespace::MainEffectCore::SetGlobalShaderValues)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x26769f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectCore>::get(),
                            "SetGlobalShaderValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectCore._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainEffectCore::*)()>(&::GlobalNamespace::MainEffectCore::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2677404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectCore>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::MainEffectCore::__set__baseColorBoostID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_baseColorBoostID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectCore>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::MainEffectCore::__get__baseColorBoostID()  {
return ::cordl_internals::getStaticField<int32_t, "_baseColorBoostID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectCore>::get>();
}
 void ::GlobalNamespace::MainEffectCore::__set__baseColorBoostThresholdID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_baseColorBoostThresholdID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectCore>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::MainEffectCore::__get__baseColorBoostThresholdID()  {
return ::cordl_internals::getStaticField<int32_t, "_baseColorBoostThresholdID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectCore>::get>();
}
 void ::GlobalNamespace::MainEffectCore::SetGlobalShaderValues(float_t baseColorBoost, float_t baseColorBoostThreshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectCore>::get(),
                            "SetGlobalShaderValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, baseColorBoost, baseColorBoostThreshold);
}
// Ctor Parameters []
 ::GlobalNamespace::MainEffectCore::MainEffectCore()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MainEffectCore>())) {}
 void ::GlobalNamespace::MainEffectCore::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainEffectCore>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
