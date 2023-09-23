#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BTSCharacter_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterMaterialSwitcher_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: GlobalNamespace::BTSCharacter.get_characterName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::BTSCharacter::*)()>(&GlobalNamespace::BTSCharacter::get_characterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20a6dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacter>::get(),
                            "get_characterName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BTSCharacter.get_materialPropertyBlockController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MaterialPropertyBlockController (GlobalNamespace::BTSCharacter::*)()>(&GlobalNamespace::BTSCharacter::get_materialPropertyBlockController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20a6dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacter>::get(),
                            "get_materialPropertyBlockController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BTSCharacter.get_animator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Animator (GlobalNamespace::BTSCharacter::*)()>(&GlobalNamespace::BTSCharacter::get_animator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20a6dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacter>::get(),
                            "get_animator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BTSCharacter.get_headTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform (GlobalNamespace::BTSCharacter::*)()>(&GlobalNamespace::BTSCharacter::get_headTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20a6dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacter>::get(),
                            "get_headTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BTSCharacter.SetAlternativeAnimationAndMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacter::*)(UnityEngine::AnimationClip, bool)>(&GlobalNamespace::BTSCharacter::SetAlternativeAnimationAndMaterial)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x20a6ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacter>::get(),
                            "SetAlternativeAnimationAndMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AnimationClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BTSCharacter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacter::*)()>(&GlobalNamespace::BTSCharacter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20a7224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BTSCharacter::__set__characterName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::BTSCharacter::__get__characterName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BTSCharacter::__set__animator(UnityEngine::Animator value)  {
::cordl_internals::setInstanceField<UnityEngine::Animator, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Animator>(value));
}
constexpr UnityEngine::Animator GlobalNamespace::BTSCharacter::__get__animator() const {
return ::cordl_internals::getInstanceField<UnityEngine::Animator, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BTSCharacter::__set__btsCharacterMaterialSwitcher(GlobalNamespace::BTSCharacterMaterialSwitcher value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BTSCharacterMaterialSwitcher, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BTSCharacterMaterialSwitcher>(value));
}
constexpr GlobalNamespace::BTSCharacterMaterialSwitcher GlobalNamespace::BTSCharacter::__get__btsCharacterMaterialSwitcher() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BTSCharacterMaterialSwitcher, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BTSCharacter::__set__materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MaterialPropertyBlockController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MaterialPropertyBlockController>(value));
}
constexpr GlobalNamespace::MaterialPropertyBlockController GlobalNamespace::BTSCharacter::__get__materialPropertyBlockController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MaterialPropertyBlockController, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BTSCharacter::__set__headTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::BTSCharacter::__get__headTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW GlobalNamespace::BTSCharacter::get_characterName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacter>::get(),
                            "get_characterName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::MaterialPropertyBlockController GlobalNamespace::BTSCharacter::get_materialPropertyBlockController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacter>::get(),
                            "get_materialPropertyBlockController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::MaterialPropertyBlockController, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Animator GlobalNamespace::BTSCharacter::get_animator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacter>::get(),
                            "get_animator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Animator, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Transform GlobalNamespace::BTSCharacter::get_headTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacter>::get(),
                            "get_headTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::BTSCharacter::SetAlternativeAnimationAndMaterial(UnityEngine::AnimationClip animation, bool alternativeMaterialOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacter>::get(),
                            "SetAlternativeAnimationAndMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AnimationClip>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, animation, alternativeMaterialOn);
}
// Ctor Parameters []
 GlobalNamespace::BTSCharacter::BTSCharacter()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<BTSCharacter>())) {}
 void GlobalNamespace::BTSCharacter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BTSCharacter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
