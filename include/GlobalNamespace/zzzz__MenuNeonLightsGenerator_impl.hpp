#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MenuNeonLightsGenerator_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenuNeonLightsGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuNeonLightsGenerator::*)()>(&::GlobalNamespace::MenuNeonLightsGenerator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x222cc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuNeonLightsGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MenuNeonLightsGenerator::__set__generate(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::MenuNeonLightsGenerator::__get__generate() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MenuNeonLightsGenerator::__set__radius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MenuNeonLightsGenerator::__get__radius() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MenuNeonLightsGenerator::__set__angle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MenuNeonLightsGenerator::__get__angle() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MenuNeonLightsGenerator::__set__numberOfElements(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::MenuNeonLightsGenerator::__get__numberOfElements() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MenuNeonLightsGenerator::__set__intensityCurve(::UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationCurve>(value));
}
constexpr ::UnityEngine::AnimationCurve ::GlobalNamespace::MenuNeonLightsGenerator::__get__intensityCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MenuNeonLightsGenerator::__set__intensityMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MenuNeonLightsGenerator::__get__intensityMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MenuNeonLightsGenerator::__set__lengthCurve(::UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationCurve>(value));
}
constexpr ::UnityEngine::AnimationCurve ::GlobalNamespace::MenuNeonLightsGenerator::__get__lengthCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MenuNeonLightsGenerator::__set__lengthMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MenuNeonLightsGenerator::__get__lengthMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MenuNeonLightsGenerator::__set__widthCurve(::UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationCurve, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AnimationCurve>(value));
}
constexpr ::UnityEngine::AnimationCurve ::GlobalNamespace::MenuNeonLightsGenerator::__get__widthCurve() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationCurve, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MenuNeonLightsGenerator::__set__widthMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MenuNeonLightsGenerator::__get__widthMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MenuNeonLightsGenerator::__set__neonLightPrefab(::GlobalNamespace::TubeBloomPrePassLight value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::TubeBloomPrePassLight, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::TubeBloomPrePassLight>(value));
}
constexpr ::GlobalNamespace::TubeBloomPrePassLight ::GlobalNamespace::MenuNeonLightsGenerator::__get__neonLightPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TubeBloomPrePassLight, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MenuNeonLightsGenerator::__set__afterSpawnRotation(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::MenuNeonLightsGenerator::__get__afterSpawnRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::MenuNeonLightsGenerator::MenuNeonLightsGenerator()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MenuNeonLightsGenerator>())) {}
 void ::GlobalNamespace::MenuNeonLightsGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuNeonLightsGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
