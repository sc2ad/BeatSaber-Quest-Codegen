#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::*)()>(&::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21cfaf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::__set_appInitScenesTransitionSetupData(::GlobalNamespace::AppInitScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::AppInitScenesTransitionSetupDataSO>(value));
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::__get_appInitScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::AppInitScenesTransitionSetupDataContainerSO()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<AppInitScenesTransitionSetupDataContainerSO>())) {}
 void ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
