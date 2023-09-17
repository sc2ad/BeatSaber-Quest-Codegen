#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SetTubeBloomPrePassLightColor_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetTubeBloomPrePassLightColor.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetTubeBloomPrePassLightColor::*)()>(&::GlobalNamespace::SetTubeBloomPrePassLightColor::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x210ce5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetTubeBloomPrePassLightColor>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetTubeBloomPrePassLightColor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetTubeBloomPrePassLightColor::*)()>(&::GlobalNamespace::SetTubeBloomPrePassLightColor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210cecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetTubeBloomPrePassLightColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SetTubeBloomPrePassLightColor::__set__color(::GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ColorSO>(value));
}
constexpr ::GlobalNamespace::ColorSO ::GlobalNamespace::SetTubeBloomPrePassLightColor::__get__color() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SetTubeBloomPrePassLightColor::__set__tubeLights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> ::GlobalNamespace::SetTubeBloomPrePassLightColor::__get__tubeLights() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::SetTubeBloomPrePassLightColor::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetTubeBloomPrePassLightColor>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::SetTubeBloomPrePassLightColor::SetTubeBloomPrePassLightColor()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<SetTubeBloomPrePassLightColor>())) {}
 void ::GlobalNamespace::SetTubeBloomPrePassLightColor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetTubeBloomPrePassLightColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
