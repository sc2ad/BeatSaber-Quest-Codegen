#pragma once
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
//  Writing Method size for method: GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO.get_sceneInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SceneInfo (GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::get_sceneInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f83094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO>::get(),
                            "get_sceneInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::*)(GlobalNamespace::SceneSetupData)>(&GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1f82a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SceneSetupData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f82b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::__set__sceneInfo(GlobalNamespace::SceneInfo value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SceneInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SceneInfo>(value));
}
constexpr GlobalNamespace::SceneInfo GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::__get__sceneInfo() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SceneInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::SceneInfo GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::get_sceneInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO>::get(),
                            "get_sceneInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::SceneInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::Init(GlobalNamespace::SceneSetupData sceneSetupData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SceneSetupData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sceneSetupData);
}
 GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::New_ctor()  {
GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO>())};
return o;
}
 void GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
