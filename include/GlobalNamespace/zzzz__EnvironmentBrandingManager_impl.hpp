#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentBrandingManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData::*)(bool)>(&GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x222ca88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData::__set_hideBranding(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData::__get_hideBranding() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "hideBranding", ty: "bool", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData::GlobalNamespace__EnvironmentBrandingManager__InitData(bool hideBranding)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__EnvironmentBrandingManager__InitData>(hideBranding))) {}
 void GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData::_ctor(bool hideBranding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hideBranding);
}
//  Writing Method size for method: GlobalNamespace::EnvironmentBrandingManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentBrandingManager::*)()>(&GlobalNamespace::EnvironmentBrandingManager::Start)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x222c9b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentBrandingManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EnvironmentBrandingManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentBrandingManager::*)()>(&GlobalNamespace::EnvironmentBrandingManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222ca80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentBrandingManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EnvironmentBrandingManager::__set__brandingObjects(::ArrayW<UnityEngine::GameObject> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::GameObject>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::GameObject>>(value));
}
constexpr ::ArrayW<UnityEngine::GameObject> GlobalNamespace::EnvironmentBrandingManager::__get__brandingObjects() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::GameObject>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EnvironmentBrandingManager::__set__replacementBrandingObjects(::ArrayW<UnityEngine::GameObject> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::GameObject>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::GameObject>>(value));
}
constexpr ::ArrayW<UnityEngine::GameObject> GlobalNamespace::EnvironmentBrandingManager::__get__replacementBrandingObjects() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::GameObject>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EnvironmentBrandingManager::__set__initData(GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData GlobalNamespace::EnvironmentBrandingManager::__get__initData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::EnvironmentBrandingManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentBrandingManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::EnvironmentBrandingManager::EnvironmentBrandingManager()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<EnvironmentBrandingManager>())) {}
 void GlobalNamespace::EnvironmentBrandingManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnvironmentBrandingManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
