#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupElementsSpawner_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
//  Writing Method size for method: GlobalNamespace::LightGroupElementsSpawner.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightGroupElementsSpawner::*)()>(&GlobalNamespace::LightGroupElementsSpawner::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x225e608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightGroupElementsSpawner>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightGroupElementsSpawner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightGroupElementsSpawner::*)()>(&GlobalNamespace::LightGroupElementsSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x225e668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightGroupElementsSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightGroupElementsSpawner::__set__lightGroup(GlobalNamespace::LightGroup value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LightGroup, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LightGroup>(value));
}
constexpr GlobalNamespace::LightGroup GlobalNamespace::LightGroupElementsSpawner::__get__lightGroup() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LightGroup, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightGroupElementsSpawner::__set__lightPrefab(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::LightGroupElementsSpawner::__get__lightPrefab() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightGroupElementsSpawner::__set__useAlternatePrefab(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LightGroupElementsSpawner::__get__useAlternatePrefab() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightGroupElementsSpawner::__set__alternateLightPrefab(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::LightGroupElementsSpawner::__get__alternateLightPrefab() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::LightGroupElementsSpawner::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightGroupElementsSpawner>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::LightGroupElementsSpawner::LightGroupElementsSpawner()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<LightGroupElementsSpawner>())) {}
 void GlobalNamespace::LightGroupElementsSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightGroupElementsSpawner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
