#pragma once
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_impl.hpp"
#include "GlobalNamespace/zzzz__QuickStartOneSongGameplayServerFiniteStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
//  Writing Method size for method: GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine::*)(GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams)>(&GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xdaf2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "initParams", ty: "GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams", modifiers: "", def_value: None }]
 GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine::QuickStartOneSongGameplayServerFiniteStateMachine(GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams)  : GlobalNamespace::GameplayServerFiniteStateMachine(THROW_UNLESS(::il2cpp_utils::New<QuickStartOneSongGameplayServerFiniteStateMachine>(initParams))) {}
 void GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine::_ctor(GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QuickStartOneSongGameplayServerFiniteStateMachine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initParams);
}
