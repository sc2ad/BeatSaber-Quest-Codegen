#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomLevelLoader_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListSO_def.hpp"
//  Writing Method size for method: GlobalNamespace::CustomLevelLoader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomLevelLoader::*)()>(&GlobalNamespace::CustomLevelLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bbbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomLevelLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CustomLevelLoader::__set__defaultEnvironmentInfo(GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentInfoSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr GlobalNamespace::EnvironmentInfoSO GlobalNamespace::CustomLevelLoader::__get__defaultEnvironmentInfo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentInfoSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CustomLevelLoader::__set__defaultAllDirectionsEnvironmentInfo(GlobalNamespace::EnvironmentInfoSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentInfoSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentInfoSO>(value));
}
constexpr GlobalNamespace::EnvironmentInfoSO GlobalNamespace::CustomLevelLoader::__get__defaultAllDirectionsEnvironmentInfo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentInfoSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CustomLevelLoader::__set__environmentSceneInfoCollection(GlobalNamespace::EnvironmentsListSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentsListSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentsListSO>(value));
}
constexpr GlobalNamespace::EnvironmentsListSO GlobalNamespace::CustomLevelLoader::__get__environmentSceneInfoCollection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentsListSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CustomLevelLoader::__set__defaultPackCover(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite GlobalNamespace::CustomLevelLoader::__get__defaultPackCover() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CustomLevelLoader::__set__smallDefaultPackCover(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite GlobalNamespace::CustomLevelLoader::__get__smallDefaultPackCover() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::CustomLevelLoader GlobalNamespace::CustomLevelLoader::New_ctor()  {
GlobalNamespace::CustomLevelLoader o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::CustomLevelLoader>())};
return o;
}
 void GlobalNamespace::CustomLevelLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomLevelLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
