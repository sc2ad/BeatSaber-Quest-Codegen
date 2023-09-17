#pragma once
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__FixedScenesScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1f82a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f82a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::__set__sceneInfos(::ArrayW<::GlobalNamespace::SceneInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::SceneInfo>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::SceneInfo>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::SceneInfo> ::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::__get__sceneInfos() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::SceneInfo>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::FixedScenesScenesTransitionSetupDataSO()  : ::GlobalNamespace::ScenesTransitionSetupDataSO(THROW_UNLESS(::il2cpp_utils::New<FixedScenesScenesTransitionSetupDataSO>())) {}
 void ::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedScenesScenesTransitionSetupDataSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
