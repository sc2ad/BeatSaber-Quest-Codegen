#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreSpawner_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreSpawner_def.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "GlobalNamespace/zzzz__IFlyingObjectEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreEffect_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyCutScoreBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition::GlobalNamespace__FlyingScoreSpawner__SpawnPosition(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition  GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition::Underground{0};
constexpr GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition  GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition::AboveGround{1};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData::*)(GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition)>(&GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2258bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData::__set_spawnPosition(GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition>(value));
}
constexpr GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData::__get_spawnPosition() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData::New_ctor(GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition spawnPosition)  {
GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData>(spawnPosition))};
return o;
}
 void GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData::_ctor(GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition spawnPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__SpawnPosition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, spawnPosition);
}
//  Writing Method size for method: GlobalNamespace::FlyingScoreSpawner.SpawnFlyingScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreSpawner::*)(GlobalNamespace::IReadonlyCutScoreBuffer, UnityEngine::Color)>(&GlobalNamespace::FlyingScoreSpawner::SpawnFlyingScore)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2258850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreSpawner>::get(),
                            "SpawnFlyingScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IReadonlyCutScoreBuffer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FlyingScoreSpawner.HandleFlyingObjectEffectDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreSpawner::*)(GlobalNamespace::FlyingObjectEffect)>(&GlobalNamespace::FlyingScoreSpawner::HandleFlyingObjectEffectDidFinish)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2258ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreSpawner>::get(),
                            "HandleFlyingObjectEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::FlyingObjectEffect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::FlyingScoreSpawner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreSpawner::*)()>(&GlobalNamespace::FlyingScoreSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2258bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IFlyingObjectEffectDidFinishEvent
constexpr  GlobalNamespace::FlyingScoreSpawner::operator GlobalNamespace::IFlyingObjectEffectDidFinishEvent() const noexcept {
return GlobalNamespace::IFlyingObjectEffectDidFinishEvent(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingScoreSpawner::__set__flyingScoreEffectPool(GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool>(value));
}
constexpr GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool GlobalNamespace::FlyingScoreSpawner::__get__flyingScoreEffectPool() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::FlyingScoreSpawner::__set__initData(GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData GlobalNamespace::FlyingScoreSpawner::__get__initData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__FlyingScoreSpawner__InitData, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::FlyingScoreSpawner::SpawnFlyingScore(GlobalNamespace::IReadonlyCutScoreBuffer cutScoreBuffer, UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreSpawner>::get(),
                            "SpawnFlyingScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IReadonlyCutScoreBuffer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cutScoreBuffer, color);
}
 void GlobalNamespace::FlyingScoreSpawner::HandleFlyingObjectEffectDidFinish(GlobalNamespace::FlyingObjectEffect flyingObjectEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreSpawner>::get(),
                            "HandleFlyingObjectEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::FlyingObjectEffect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flyingObjectEffect);
}
 GlobalNamespace::FlyingScoreSpawner GlobalNamespace::FlyingScoreSpawner::New_ctor()  {
GlobalNamespace::FlyingScoreSpawner o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::FlyingScoreSpawner>())};
return o;
}
 void GlobalNamespace::FlyingScoreSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FlyingScoreSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
