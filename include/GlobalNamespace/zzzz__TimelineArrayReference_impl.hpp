#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TimelineArrayReference_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__TimelineArrayReference_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes::GlobalNamespace__TimelineArrayReference__ArrayTypes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes  GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes::TubeLight{0};
constexpr GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes  GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes::Transform{1};
constexpr GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes  GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes::Canvas{2};
constexpr GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes  GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes::TextMeshPro{3};
constexpr GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes  GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes::DirectionalLight{4};
//  Writing Method size for method: GlobalNamespace::TimelineArrayReference._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TimelineArrayReference::*)()>(&GlobalNamespace::TimelineArrayReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b3208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TimelineArrayReference>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TimelineArrayReference::__set_arrayType(GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes>(value));
}
constexpr GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes GlobalNamespace::TimelineArrayReference::__get_arrayType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TimelineArrayReference::__set__tubeLightArray(::ArrayW<GlobalNamespace::TubeBloomPrePassLight> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::TubeBloomPrePassLight>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::TubeBloomPrePassLight>>(value));
}
constexpr ::ArrayW<GlobalNamespace::TubeBloomPrePassLight> GlobalNamespace::TimelineArrayReference::__get__tubeLightArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::TubeBloomPrePassLight>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TimelineArrayReference::__set__canvasGroupArray(::ArrayW<UnityEngine::CanvasGroup> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::CanvasGroup>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::CanvasGroup>>(value));
}
constexpr ::ArrayW<UnityEngine::CanvasGroup> GlobalNamespace::TimelineArrayReference::__get__canvasGroupArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::CanvasGroup>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TimelineArrayReference::__set__tmproArray(::ArrayW<TMPro::TextMeshPro> value)  {
::cordl_internals::setInstanceField<::ArrayW<TMPro::TextMeshPro>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<TMPro::TextMeshPro>>(value));
}
constexpr ::ArrayW<TMPro::TextMeshPro> GlobalNamespace::TimelineArrayReference::__get__tmproArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<TMPro::TextMeshPro>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TimelineArrayReference::__set__transformArray(::ArrayW<UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Transform>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Transform>>(value));
}
constexpr ::ArrayW<UnityEngine::Transform> GlobalNamespace::TimelineArrayReference::__get__transformArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Transform>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::TimelineArrayReference::__set__directionalLights(::ArrayW<GlobalNamespace::DirectionalLight> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::DirectionalLight>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::DirectionalLight>>(value));
}
constexpr ::ArrayW<GlobalNamespace::DirectionalLight> GlobalNamespace::TimelineArrayReference::__get__directionalLights() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::DirectionalLight>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::TimelineArrayReference GlobalNamespace::TimelineArrayReference::New_ctor()  {
GlobalNamespace::TimelineArrayReference o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::TimelineArrayReference>())};
return o;
}
 void GlobalNamespace::TimelineArrayReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TimelineArrayReference>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
