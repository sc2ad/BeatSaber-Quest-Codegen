#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__LightmappingGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightmappingGameplayManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmappingGameplayManager::*)()>(&::GlobalNamespace::LightmappingGameplayManager::Start)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2270834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmappingGameplayManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmappingGameplayManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmappingGameplayManager::*)()>(&::GlobalNamespace::LightmappingGameplayManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22709bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmappingGameplayManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::LightmappingGameplayManager::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController ::GlobalNamespace::LightmappingGameplayManager::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::LightmappingGameplayManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmappingGameplayManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::LightmappingGameplayManager::LightmappingGameplayManager()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<LightmappingGameplayManager>())) {}
 void ::GlobalNamespace::LightmappingGameplayManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmappingGameplayManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
