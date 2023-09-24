#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterResultAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockColorSetter_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacter_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockFloatAnimator_def.hpp"
//  Writing Method size for method: GlobalNamespace::BTSCharacterResultAnimationController.SetCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterResultAnimationController::*)(GlobalNamespace::BTSCharacter)>(&GlobalNamespace::BTSCharacterResultAnimationController::SetCharacter)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x20a7324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacterResultAnimationController>::get(),
                            "SetCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BTSCharacter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BTSCharacterResultAnimationController.StopAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterResultAnimationController::*)()>(&GlobalNamespace::BTSCharacterResultAnimationController::StopAnimation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20a738c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacterResultAnimationController>::get(),
                            "StopAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BTSCharacterResultAnimationController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterResultAnimationController::*)()>(&GlobalNamespace::BTSCharacterResultAnimationController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20a73ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacterResultAnimationController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BTSCharacterResultAnimationController::__set__rimLightColorSetter(GlobalNamespace::MaterialPropertyBlockColorSetter value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MaterialPropertyBlockColorSetter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MaterialPropertyBlockColorSetter>(value));
}
constexpr GlobalNamespace::MaterialPropertyBlockColorSetter GlobalNamespace::BTSCharacterResultAnimationController::__get__rimLightColorSetter() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MaterialPropertyBlockColorSetter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BTSCharacterResultAnimationController::__set__rimLightIntensityAnimator(GlobalNamespace::MaterialPropertyBlockFloatAnimator value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MaterialPropertyBlockFloatAnimator, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MaterialPropertyBlockFloatAnimator>(value));
}
constexpr GlobalNamespace::MaterialPropertyBlockFloatAnimator GlobalNamespace::BTSCharacterResultAnimationController::__get__rimLightIntensityAnimator() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MaterialPropertyBlockFloatAnimator, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BTSCharacterResultAnimationController::__set__rimLightEdgeStartAnimator(GlobalNamespace::MaterialPropertyBlockFloatAnimator value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MaterialPropertyBlockFloatAnimator, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MaterialPropertyBlockFloatAnimator>(value));
}
constexpr GlobalNamespace::MaterialPropertyBlockFloatAnimator GlobalNamespace::BTSCharacterResultAnimationController::__get__rimLightEdgeStartAnimator() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MaterialPropertyBlockFloatAnimator, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BTSCharacterResultAnimationController::__set__collidersGameObject(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::BTSCharacterResultAnimationController::__get__collidersGameObject() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::BTSCharacterResultAnimationController::SetCharacter(GlobalNamespace::BTSCharacter btsCharacter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacterResultAnimationController>::get(),
                            "SetCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BTSCharacter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, btsCharacter);
}
 void GlobalNamespace::BTSCharacterResultAnimationController::StopAnimation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacterResultAnimationController>::get(),
                            "StopAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BTSCharacterResultAnimationController GlobalNamespace::BTSCharacterResultAnimationController::New_ctor()  {
GlobalNamespace::BTSCharacterResultAnimationController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BTSCharacterResultAnimationController>())};
return o;
}
 void GlobalNamespace::BTSCharacterResultAnimationController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacterResultAnimationController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
