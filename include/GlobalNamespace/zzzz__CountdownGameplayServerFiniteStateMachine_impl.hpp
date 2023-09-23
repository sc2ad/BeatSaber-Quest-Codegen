#pragma once
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_impl.hpp"
#include "GlobalNamespace/zzzz__CountdownGameplayServerFiniteStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
//  Writing Method size for method: GlobalNamespace::CountdownGameplayServerFiniteStateMachine._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CountdownGameplayServerFiniteStateMachine::*)(GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams)>(&GlobalNamespace::CountdownGameplayServerFiniteStateMachine::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xdaeedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CountdownGameplayServerFiniteStateMachine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "initParams", ty: "GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams", modifiers: "", def_value: None }]
 GlobalNamespace::CountdownGameplayServerFiniteStateMachine::CountdownGameplayServerFiniteStateMachine(GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams)  : GlobalNamespace::GameplayServerFiniteStateMachine(THROW_UNLESS(::il2cpp_utils::New<CountdownGameplayServerFiniteStateMachine>(initParams))) {}
 void GlobalNamespace::CountdownGameplayServerFiniteStateMachine::_ctor(GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CountdownGameplayServerFiniteStateMachine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initParams);
}
