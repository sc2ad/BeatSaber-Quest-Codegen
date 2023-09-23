#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingTextSpawner_def.hpp"
#include "GlobalNamespace/zzzz__IFlyingObjectEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__FlyingTextEffect_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: GlobalNamespace::FlyingTextSpawner.SpawnText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingTextSpawner::*)(UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Quaternion, ::StringW)>(&GlobalNamespace::FlyingTextSpawner::SpawnText)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2258d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingTextSpawner>::get(),
                            "SpawnText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FlyingTextSpawner.HandleFlyingObjectEffectDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingTextSpawner::*)(GlobalNamespace::FlyingObjectEffect)>(&GlobalNamespace::FlyingTextSpawner::HandleFlyingObjectEffectDidFinish)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2258f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingTextSpawner>::get(),
                            "HandleFlyingObjectEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::FlyingObjectEffect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FlyingTextSpawner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingTextSpawner::*)()>(&GlobalNamespace::FlyingTextSpawner::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2259054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingTextSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IFlyingObjectEffectDidFinishEvent
constexpr  GlobalNamespace::FlyingTextSpawner::operator GlobalNamespace::IFlyingObjectEffectDidFinishEvent() const noexcept {
return GlobalNamespace::IFlyingObjectEffectDidFinishEvent(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__duration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FlyingTextSpawner::__get__duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__xSpread(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FlyingTextSpawner::__get__xSpread() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__targetYPos(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FlyingTextSpawner::__get__targetYPos() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__targetZPos(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FlyingTextSpawner::__get__targetZPos() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__color(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::FlyingTextSpawner::__get__color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__fontSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::FlyingTextSpawner::__get__fontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__shake(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::FlyingTextSpawner::__get__shake() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingTextSpawner::__set__flyingTextEffectPool(GlobalNamespace::GlobalNamespace__FlyingTextEffect__Pool value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__FlyingTextEffect__Pool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__FlyingTextEffect__Pool>(value));
}
constexpr GlobalNamespace::GlobalNamespace__FlyingTextEffect__Pool GlobalNamespace::FlyingTextSpawner::__get__flyingTextEffectPool() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__FlyingTextEffect__Pool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::FlyingTextSpawner::SpawnText(UnityEngine::Vector3 pos, UnityEngine::Quaternion rotation, UnityEngine::Quaternion inverseRotation, ::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingTextSpawner>::get(),
                            "SpawnText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos, rotation, inverseRotation, text);
}
 void GlobalNamespace::FlyingTextSpawner::HandleFlyingObjectEffectDidFinish(GlobalNamespace::FlyingObjectEffect flyingObjectEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingTextSpawner>::get(),
                            "HandleFlyingObjectEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::FlyingObjectEffect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flyingObjectEffect);
}
// Ctor Parameters []
 GlobalNamespace::FlyingTextSpawner::FlyingTextSpawner()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<FlyingTextSpawner>())) {}
 void GlobalNamespace::FlyingTextSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingTextSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
