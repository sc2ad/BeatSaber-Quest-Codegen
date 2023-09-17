#pragma once
namespace {
#include "UnityEngine/InputSystem/DualShock/zzzz__IDualShockHaptics_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IDualMotorRumble_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IHaptics_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::DualShock::IDualShockHaptics.SetLightBarColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::DualShock::IDualShockHaptics::*)(::UnityEngine::Color)>(&::UnityEngine::InputSystem::DualShock::IDualShockHaptics::SetLightBarColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::DualShock::IDualShockHaptics),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DualShock::IDualShockHaptics>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::InputSystem::Haptics::IDualMotorRumble
constexpr  ::UnityEngine::InputSystem::DualShock::IDualShockHaptics::operator ::UnityEngine::InputSystem::Haptics::IDualMotorRumble() const noexcept {
return ::UnityEngine::InputSystem::Haptics::IDualMotorRumble(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::InputSystem::Haptics::IHaptics
constexpr  ::UnityEngine::InputSystem::DualShock::IDualShockHaptics::operator ::UnityEngine::InputSystem::Haptics::IHaptics() const noexcept {
return ::UnityEngine::InputSystem::Haptics::IHaptics(::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::InputSystem::DualShock::IDualShockHaptics::SetLightBarColor(::UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::DualShock::IDualShockHaptics>::get(),
                            "SetLightBarColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
} // end anonymous namespace
