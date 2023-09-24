#pragma once
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachineFactory_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
//  Writing Method size for method: GlobalNamespace::GameplayServerFiniteStateMachineFactory.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerFiniteStateMachine (*)(GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams)>(&GlobalNamespace::GameplayServerFiniteStateMachineFactory::Create)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xdaf104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayServerFiniteStateMachineFactory>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams>::get()}
                        )));
    return ___internal_method;
  }
};
 GlobalNamespace::GameplayServerFiniteStateMachine GlobalNamespace::GameplayServerFiniteStateMachineFactory::Create(GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayServerFiniteStateMachineFactory>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayServerFiniteStateMachine, false>(nullptr, ___internal_method, initParams);
}
