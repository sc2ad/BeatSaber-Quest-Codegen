#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNodeUpdatePositionInEditMode_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeConnection_def.hpp"
//  Writing Method size for method: GlobalNamespace::MissionNodeUpdatePositionInEditMode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeUpdatePositionInEditMode::*)()>(&GlobalNamespace::MissionNodeUpdatePositionInEditMode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214a634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionNodeUpdatePositionInEditMode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionNodeUpdatePositionInEditMode::__set__missionNodeConnection(GlobalNamespace::MissionNodeConnection value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MissionNodeConnection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MissionNodeConnection>(value));
}
constexpr GlobalNamespace::MissionNodeConnection GlobalNamespace::MissionNodeUpdatePositionInEditMode::__get__missionNodeConnection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MissionNodeConnection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::MissionNodeUpdatePositionInEditMode::MissionNodeUpdatePositionInEditMode()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MissionNodeUpdatePositionInEditMode>())) {}
 void GlobalNamespace::MissionNodeUpdatePositionInEditMode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MissionNodeUpdatePositionInEditMode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
