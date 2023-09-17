#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__VRRenderingParamsSetup_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__VRRenderingParamsSetup__SceneType::____GlobalNamespace__VRRenderingParamsSetup__SceneType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__VRRenderingParamsSetup__SceneType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__VRRenderingParamsSetup__SceneType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__VRRenderingParamsSetup__SceneType  ::GlobalNamespace::____GlobalNamespace__VRRenderingParamsSetup__SceneType::Undefined{0};
constexpr ::GlobalNamespace::____GlobalNamespace__VRRenderingParamsSetup__SceneType  ::GlobalNamespace::____GlobalNamespace__VRRenderingParamsSetup__SceneType::Menu{1};
constexpr ::GlobalNamespace::____GlobalNamespace__VRRenderingParamsSetup__SceneType  ::GlobalNamespace::____GlobalNamespace__VRRenderingParamsSetup__SceneType::Game{2};
//  Writing Method size for method: ::GlobalNamespace::VRRenderingParamsSetup.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRRenderingParamsSetup::*)()>(&::GlobalNamespace::VRRenderingParamsSetup::OnEnable)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x267b064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRenderingParamsSetup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VRRenderingParamsSetup::*)()>(&::GlobalNamespace::VRRenderingParamsSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267b3a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::VRRenderingParamsSetup::__set__vrResolutionScale(::GlobalNamespace::FloatSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::FloatSO>(value));
}
constexpr ::GlobalNamespace::FloatSO ::GlobalNamespace::VRRenderingParamsSetup::__get__vrResolutionScale() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::VRRenderingParamsSetup::__set__menuVRResolutionScaleMultiplier(::GlobalNamespace::FloatSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::FloatSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::FloatSO>(value));
}
constexpr ::GlobalNamespace::FloatSO ::GlobalNamespace::VRRenderingParamsSetup::__get__menuVRResolutionScaleMultiplier() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::FloatSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::VRRenderingParamsSetup::__set__useFixedFoveatedRenderingDuringGameplay(::GlobalNamespace::BoolSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BoolSO>(value));
}
constexpr ::GlobalNamespace::BoolSO ::GlobalNamespace::VRRenderingParamsSetup::__get__useFixedFoveatedRenderingDuringGameplay() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::VRRenderingParamsSetup::__set__sceneType(::GlobalNamespace::____GlobalNamespace__VRRenderingParamsSetup__SceneType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__VRRenderingParamsSetup__SceneType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__VRRenderingParamsSetup__SceneType>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__VRRenderingParamsSetup__SceneType ::GlobalNamespace::VRRenderingParamsSetup::__get__sceneType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__VRRenderingParamsSetup__SceneType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::VRRenderingParamsSetup::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IVRPlatformHelper, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IVRPlatformHelper>(value));
}
constexpr ::GlobalNamespace::IVRPlatformHelper ::GlobalNamespace::VRRenderingParamsSetup::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::VRRenderingParamsSetup::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::VRRenderingParamsSetup::VRRenderingParamsSetup()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<VRRenderingParamsSetup>())) {}
 void ::GlobalNamespace::VRRenderingParamsSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRRenderingParamsSetup>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
