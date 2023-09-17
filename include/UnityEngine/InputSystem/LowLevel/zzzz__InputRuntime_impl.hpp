#pragma once
namespace {
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputRuntime_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputRuntime_def.hpp"
 void ::UnityEngine::InputSystem::LowLevel::InputRuntime::__set_s_Instance(::UnityEngine::InputSystem::LowLevel::IInputRuntime value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::LowLevel::IInputRuntime, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputRuntime>::get>(std::forward<::UnityEngine::InputSystem::LowLevel::IInputRuntime>(value));
}
 ::UnityEngine::InputSystem::LowLevel::IInputRuntime ::UnityEngine::InputSystem::LowLevel::InputRuntime::__get_s_Instance()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::LowLevel::IInputRuntime, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputRuntime>::get>();
}
 void ::UnityEngine::InputSystem::LowLevel::InputRuntime::__set_s_CurrentTimeOffsetToRealtimeSinceStartup(double_t value)  {
::cordl_internals::setStaticField<double_t, "s_CurrentTimeOffsetToRealtimeSinceStartup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputRuntime>::get>(std::forward<double_t>(value));
}
 double_t ::UnityEngine::InputSystem::LowLevel::InputRuntime::__get_s_CurrentTimeOffsetToRealtimeSinceStartup()  {
return ::cordl_internals::getStaticField<double_t, "s_CurrentTimeOffsetToRealtimeSinceStartup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputRuntime>::get>();
}
} // end anonymous namespace
