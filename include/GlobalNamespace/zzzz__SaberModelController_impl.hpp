#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaberModelController_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "GlobalNamespace/zzzz__SetSaberGlowColor_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberTrail_def.hpp"
#include "GlobalNamespace/zzzz__SetSaberFakeGlowColor_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SaberModelController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SaberModelController__InitData::*)()>(&GlobalNamespace::GlobalNamespace__SaberModelController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x210c76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SaberModelController__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SaberModelController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SaberModelController__InitData::*)(UnityEngine::Color)>(&GlobalNamespace::GlobalNamespace__SaberModelController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x210c78c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SaberModelController__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__SaberModelController__InitData::__set_trailTintColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::GlobalNamespace__SaberModelController__InitData::__get_trailTintColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__SaberModelController__InitData::GlobalNamespace__SaberModelController__InitData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__SaberModelController__InitData>())) {}
 void GlobalNamespace::GlobalNamespace__SaberModelController__InitData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SaberModelController__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "trailTintColor", ty: "UnityEngine::Color", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__SaberModelController__InitData::GlobalNamespace__SaberModelController__InitData(UnityEngine::Color trailTintColor)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__SaberModelController__InitData>(trailTintColor))) {}
 void GlobalNamespace::GlobalNamespace__SaberModelController__InitData::_ctor(UnityEngine::Color trailTintColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SaberModelController__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, trailTintColor);
}
//  Writing Method size for method: GlobalNamespace::SaberModelController.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberModelController::*)(UnityEngine::Transform, GlobalNamespace::Saber)>(&GlobalNamespace::SaberModelController::Init)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x210c3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SaberModelController>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::Saber>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SaberModelController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberModelController::*)()>(&GlobalNamespace::SaberModelController::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x210c6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SaberModelController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SaberModelController::__set__saberTrail(GlobalNamespace::SaberTrail value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SaberTrail, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SaberTrail>(value));
}
constexpr GlobalNamespace::SaberTrail GlobalNamespace::SaberModelController::__get__saberTrail() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SaberTrail, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SaberModelController::__set__setSaberGlowColors(::ArrayW<GlobalNamespace::SetSaberGlowColor> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::SetSaberGlowColor>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::SetSaberGlowColor>>(value));
}
constexpr ::ArrayW<GlobalNamespace::SetSaberGlowColor> GlobalNamespace::SaberModelController::__get__setSaberGlowColors() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::SetSaberGlowColor>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SaberModelController::__set__setSaberFakeGlowColors(::ArrayW<GlobalNamespace::SetSaberFakeGlowColor> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::SetSaberFakeGlowColor>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::SetSaberFakeGlowColor>>(value));
}
constexpr ::ArrayW<GlobalNamespace::SetSaberFakeGlowColor> GlobalNamespace::SaberModelController::__get__setSaberFakeGlowColors() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::SetSaberFakeGlowColor>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SaberModelController::__set__saberLight(GlobalNamespace::TubeBloomPrePassLight value)  {
::cordl_internals::setInstanceField<GlobalNamespace::TubeBloomPrePassLight, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::TubeBloomPrePassLight>(value));
}
constexpr GlobalNamespace::TubeBloomPrePassLight GlobalNamespace::SaberModelController::__get__saberLight() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::TubeBloomPrePassLight, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SaberModelController::__set__initData(GlobalNamespace::GlobalNamespace__SaberModelController__InitData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__SaberModelController__InitData, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__SaberModelController__InitData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__SaberModelController__InitData GlobalNamespace::SaberModelController::__get__initData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__SaberModelController__InitData, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SaberModelController::__set__colorManager(GlobalNamespace::ColorManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorManager>(value));
}
constexpr GlobalNamespace::ColorManager GlobalNamespace::SaberModelController::__get__colorManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SaberModelController::Init(UnityEngine::Transform parent, GlobalNamespace::Saber saber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SaberModelController>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::Saber>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parent, saber);
}
// Ctor Parameters []
 GlobalNamespace::SaberModelController::SaberModelController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<SaberModelController>())) {}
 void GlobalNamespace::SaberModelController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SaberModelController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
