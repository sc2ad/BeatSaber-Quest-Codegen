#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MarkSceneAsPersistent_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
//  Writing Method size for method: GlobalNamespace::MarkSceneAsPersistent.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MarkSceneAsPersistent::*)()>(&GlobalNamespace::MarkSceneAsPersistent::Awake)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1f82988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MarkSceneAsPersistent>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MarkSceneAsPersistent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MarkSceneAsPersistent::*)()>(&GlobalNamespace::MarkSceneAsPersistent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f829dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MarkSceneAsPersistent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MarkSceneAsPersistent::__set__gameScenesManager(GlobalNamespace::GameScenesManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameScenesManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameScenesManager>(value));
}
constexpr GlobalNamespace::GameScenesManager GlobalNamespace::MarkSceneAsPersistent::__get__gameScenesManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameScenesManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MarkSceneAsPersistent::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MarkSceneAsPersistent>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MarkSceneAsPersistent::MarkSceneAsPersistent()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MarkSceneAsPersistent>())) {}
 void GlobalNamespace::MarkSceneAsPersistent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MarkSceneAsPersistent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
