#pragma once
#include "GlobalNamespace/zzzz__UnityScenesHelper_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::UnityScenesHelper.SetActiveRootObjectsInScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::SceneManagement::Scene, bool)>(&GlobalNamespace::UnityScenesHelper::SetActiveRootObjectsInScene)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x1f731b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityScenesHelper>::get(),
                            "SetActiveRootObjectsInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::Scene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::UnityScenesHelper::SetActiveRootObjectsInScene(UnityEngine::SceneManagement::Scene scene, bool active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityScenesHelper>::get(),
                            "SetActiveRootObjectsInScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::Scene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, scene, active);
}
template<typename T>
 System::Collections::Generic::IEnumerable_1<T> GlobalNamespace::UnityScenesHelper::FindComponentsOfTypeInScene(UnityEngine::SceneManagement::Scene activeScene, bool includeInactive)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityScenesHelper>::get(),
                        "FindComponentsOfTypeInScene",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::Scene>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<T>, false>(nullptr, ___internal_method, activeScene, includeInactive);
}
