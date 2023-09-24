#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNodeNameGenerator_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodesManager_def.hpp"
//  Writing Method size for method: GlobalNamespace::MissionNodeNameGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeNameGenerator::*)()>(&GlobalNamespace::MissionNodeNameGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2149140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionNodeNameGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionNodeNameGenerator::__set__missionNodesManager(GlobalNamespace::MissionNodesManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionNodesManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionNodesManager>(value));
}
constexpr GlobalNamespace::MissionNodesManager GlobalNamespace::MissionNodeNameGenerator::__get__missionNodesManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionNodesManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::MissionNodeNameGenerator GlobalNamespace::MissionNodeNameGenerator::New_ctor()  {
GlobalNamespace::MissionNodeNameGenerator o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MissionNodeNameGenerator>())};
return o;
}
 void GlobalNamespace::MissionNodeNameGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionNodeNameGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
