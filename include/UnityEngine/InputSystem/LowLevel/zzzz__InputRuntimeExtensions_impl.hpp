#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputRuntimeExtensions_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputRuntime_def.hpp"
template<typename TCommand>
 int64_t UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions::DeviceCommand(UnityEngine::InputSystem::LowLevel::IInputRuntime runtime, int32_t deviceId, ByRef<TCommand> command)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions>::get(),
                        "DeviceCommand",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCommand>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::IInputRuntime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TCommand>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCommand>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, runtime, deviceId, command);
}
