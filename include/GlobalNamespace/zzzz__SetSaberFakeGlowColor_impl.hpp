#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetSaberFakeGlowColor_def.hpp"
#include "GlobalNamespace/zzzz__Parametric3SliceSpriteController_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "GlobalNamespace/zzzz__SaberTypeObject_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: GlobalNamespace::SetSaberFakeGlowColor.set_saberType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetSaberFakeGlowColor::*)(GlobalNamespace::SaberType)>(&GlobalNamespace::SetSaberFakeGlowColor::set_saberType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x210c6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SetSaberFakeGlowColor>::get(),
                            "set_saberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SaberType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SetSaberFakeGlowColor.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetSaberFakeGlowColor::*)()>(&GlobalNamespace::SetSaberFakeGlowColor::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x210cc2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SetSaberFakeGlowColor>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SetSaberFakeGlowColor.SetColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetSaberFakeGlowColor::*)()>(&GlobalNamespace::SetSaberFakeGlowColor::SetColors)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x210cbd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SetSaberFakeGlowColor>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SetSaberFakeGlowColor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetSaberFakeGlowColor::*)()>(&GlobalNamespace::SetSaberFakeGlowColor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210ccac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SetSaberFakeGlowColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SetSaberFakeGlowColor::__set__tintColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::SetSaberFakeGlowColor::__get__tintColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SetSaberFakeGlowColor::__set__saberTypeObject(GlobalNamespace::SaberTypeObject value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SaberTypeObject, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SaberTypeObject>(value));
}
constexpr GlobalNamespace::SaberTypeObject GlobalNamespace::SetSaberFakeGlowColor::__get__saberTypeObject() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SaberTypeObject, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SetSaberFakeGlowColor::__set__parametric3SliceSprite(GlobalNamespace::Parametric3SliceSpriteController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Parametric3SliceSpriteController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Parametric3SliceSpriteController>(value));
}
constexpr GlobalNamespace::Parametric3SliceSpriteController GlobalNamespace::SetSaberFakeGlowColor::__get__parametric3SliceSprite() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Parametric3SliceSpriteController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SetSaberFakeGlowColor::__set__colorManager(GlobalNamespace::ColorManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorManager>(value));
}
constexpr GlobalNamespace::ColorManager GlobalNamespace::SetSaberFakeGlowColor::__get__colorManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorManager, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SetSaberFakeGlowColor::__set__saberType(GlobalNamespace::SaberType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SaberType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SaberType>(value));
}
constexpr GlobalNamespace::SaberType GlobalNamespace::SetSaberFakeGlowColor::__get__saberType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SaberType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SetSaberFakeGlowColor::set_saberType(GlobalNamespace::SaberType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SetSaberFakeGlowColor>::get(),
                            "set_saberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SaberType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::SetSaberFakeGlowColor::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SetSaberFakeGlowColor>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SetSaberFakeGlowColor::SetColors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SetSaberFakeGlowColor>::get(),
                            "SetColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SetSaberFakeGlowColor GlobalNamespace::SetSaberFakeGlowColor::New_ctor()  {
GlobalNamespace::SetSaberFakeGlowColor o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SetSaberFakeGlowColor>())};
return o;
}
 void GlobalNamespace::SetSaberFakeGlowColor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SetSaberFakeGlowColor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
