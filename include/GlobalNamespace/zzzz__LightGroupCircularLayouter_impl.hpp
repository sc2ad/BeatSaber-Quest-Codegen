#pragma once
#include "GlobalNamespace/zzzz__LightGroupSubsystem_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__LightGroupCircularLayouter_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__LightGroupCircularLayouter__RotationDirection::____GlobalNamespace__LightGroupCircularLayouter__RotationDirection(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__LightGroupCircularLayouter__RotationDirection::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__LightGroupCircularLayouter__RotationDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__LightGroupCircularLayouter__RotationDirection  ::GlobalNamespace::____GlobalNamespace__LightGroupCircularLayouter__RotationDirection::Clockwise{0};
constexpr ::GlobalNamespace::____GlobalNamespace__LightGroupCircularLayouter__RotationDirection  ::GlobalNamespace::____GlobalNamespace__LightGroupCircularLayouter__RotationDirection::Counterclockwise{1};
//  Writing Method size for method: ::GlobalNamespace::LightGroupCircularLayouter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightGroupCircularLayouter::*)()>(&::GlobalNamespace::LightGroupCircularLayouter::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x225e5a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupCircularLayouter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::LightGroupCircularLayouter::__set__radius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::LightGroupCircularLayouter::__get__radius() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LightGroupCircularLayouter::__set__angle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::LightGroupCircularLayouter::__get__angle() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LightGroupCircularLayouter::__set__startingAngle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::LightGroupCircularLayouter::__get__startingAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LightGroupCircularLayouter::__set__rotationDirection(::GlobalNamespace::____GlobalNamespace__LightGroupCircularLayouter__RotationDirection value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__LightGroupCircularLayouter__RotationDirection, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__LightGroupCircularLayouter__RotationDirection>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__LightGroupCircularLayouter__RotationDirection ::GlobalNamespace::LightGroupCircularLayouter::__get__rotationDirection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__LightGroupCircularLayouter__RotationDirection, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LightGroupCircularLayouter::__set__staticRotation(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::LightGroupCircularLayouter::__get__staticRotation() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LightGroupCircularLayouter::__set__additionalAngle(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::LightGroupCircularLayouter::__get__additionalAngle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::LightGroupCircularLayouter::LightGroupCircularLayouter()  : ::GlobalNamespace::LightGroupSubsystem(THROW_UNLESS(::il2cpp_utils::New<LightGroupCircularLayouter>())) {}
 void ::GlobalNamespace::LightGroupCircularLayouter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupCircularLayouter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
