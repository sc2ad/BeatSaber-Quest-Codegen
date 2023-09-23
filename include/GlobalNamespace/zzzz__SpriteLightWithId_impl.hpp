#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__SpriteLightWithId_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType  GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType::None{0};
constexpr GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType  GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType::BeforeApplyingMinAlpha{1};
constexpr GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType  GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType::AfterApplyingMinAlpha{2};
//  Writing Method size for method: GlobalNamespace::SpriteLightWithId.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::SpriteLightWithId::*)()>(&GlobalNamespace::SpriteLightWithId::get_color)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fa0560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpriteLightWithId>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpriteLightWithId.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpriteLightWithId::*)(UnityEngine::Color)>(&GlobalNamespace::SpriteLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1fa057c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SpriteLightWithId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpriteLightWithId>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpriteLightWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpriteLightWithId::*)()>(&GlobalNamespace::SpriteLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x1024;
  constexpr static std::size_t addrs = 0x1fa06c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpriteLightWithId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SpriteLightWithId::__set__spriteRenderer(UnityEngine::SpriteRenderer value)  {
::cordl_internals::setInstanceField<UnityEngine::SpriteRenderer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::SpriteRenderer>(value));
}
constexpr UnityEngine::SpriteRenderer GlobalNamespace::SpriteLightWithId::__get__spriteRenderer() const {
return ::cordl_internals::getInstanceField<UnityEngine::SpriteRenderer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__hideIfAlphaOutOfRange(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::SpriteLightWithId::__get__hideIfAlphaOutOfRange() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__hideAlphaRangeMin(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SpriteLightWithId::__get__hideAlphaRangeMin() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__hideAlphaRangeMax(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SpriteLightWithId::__get__hideAlphaRangeMax() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__intensity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SpriteLightWithId::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__minAlpha(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SpriteLightWithId::__get__minAlpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__multiplyColorByAlpha(GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType GlobalNamespace::SpriteLightWithId::__get__multiplyColorByAlpha() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__SpriteLightWithId__MultiplyColorByAlphaType, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__setColorOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::SpriteLightWithId::__get__setColorOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__setAlphaOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::SpriteLightWithId::__get__setAlphaOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpriteLightWithId::__set__setOnlyOnce(bool value)  {
::cordl_internals::setInstanceField<bool, 0x52>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::SpriteLightWithId::__get__setOnlyOnce() const {
return ::cordl_internals::getInstanceField<bool, 0x52>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Color GlobalNamespace::SpriteLightWithId::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpriteLightWithId>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SpriteLightWithId::ColorWasSet(UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpriteLightWithId>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
// Ctor Parameters []
 GlobalNamespace::SpriteLightWithId::SpriteLightWithId()  : GlobalNamespace::LightWithIdMonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<SpriteLightWithId>())) {}
 void GlobalNamespace::SpriteLightWithId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpriteLightWithId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
