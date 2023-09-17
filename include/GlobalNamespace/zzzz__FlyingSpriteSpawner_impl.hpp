#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__FlyingSpriteSpawner_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "GlobalNamespace/zzzz__IFlyingObjectEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__FlyingSpriteEffect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlyingSpriteSpawner.SpawnFlyingSprite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingSpriteSpawner::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::GlobalNamespace::FlyingSpriteSpawner::SpawnFlyingSprite)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2257f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteSpawner>::get(),
                            "SpawnFlyingSprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingSpriteSpawner.HandleFlyingObjectEffectDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingSpriteSpawner::*)(::GlobalNamespace::FlyingObjectEffect)>(&::GlobalNamespace::FlyingSpriteSpawner::HandleFlyingObjectEffectDidFinish)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2258c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteSpawner>::get(),
                            "HandleFlyingObjectEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingObjectEffect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingSpriteSpawner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingSpriteSpawner::*)()>(&::GlobalNamespace::FlyingSpriteSpawner::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2258d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent
constexpr  ::GlobalNamespace::FlyingSpriteSpawner::operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent() const noexcept {
return ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::FlyingSpriteSpawner::__set__sprite(::UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<::UnityEngine::Sprite, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Sprite>(value));
}
constexpr ::UnityEngine::Sprite ::GlobalNamespace::FlyingSpriteSpawner::__get__sprite() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::FlyingSpriteSpawner::__set__material(::UnityEngine::Material value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Material>(value));
}
constexpr ::UnityEngine::Material ::GlobalNamespace::FlyingSpriteSpawner::__get__material() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::FlyingSpriteSpawner::__set__duration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::FlyingSpriteSpawner::__get__duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::FlyingSpriteSpawner::__set__xSpread(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::FlyingSpriteSpawner::__get__xSpread() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::FlyingSpriteSpawner::__set__targetYPos(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::FlyingSpriteSpawner::__get__targetYPos() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::FlyingSpriteSpawner::__set__targetZPos(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::FlyingSpriteSpawner::__get__targetZPos() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::FlyingSpriteSpawner::__set__color(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::FlyingSpriteSpawner::__get__color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::FlyingSpriteSpawner::__set__shake(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::FlyingSpriteSpawner::__get__shake() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::FlyingSpriteSpawner::__set__flyingSpriteEffectPool(::GlobalNamespace::____GlobalNamespace__FlyingSpriteEffect__Pool value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__FlyingSpriteEffect__Pool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__FlyingSpriteEffect__Pool>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__FlyingSpriteEffect__Pool ::GlobalNamespace::FlyingSpriteSpawner::__get__flyingSpriteEffectPool() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__FlyingSpriteEffect__Pool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::FlyingSpriteSpawner::SpawnFlyingSprite(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Quaternion inverseRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteSpawner>::get(),
                            "SpawnFlyingSprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pos, rotation, inverseRotation);
}
 void ::GlobalNamespace::FlyingSpriteSpawner::HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect flyingObjectEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteSpawner>::get(),
                            "HandleFlyingObjectEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingObjectEffect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flyingObjectEffect);
}
// Ctor Parameters []
 ::GlobalNamespace::FlyingSpriteSpawner::FlyingSpriteSpawner()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<FlyingSpriteSpawner>())) {}
 void ::GlobalNamespace::FlyingSpriteSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingSpriteSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
