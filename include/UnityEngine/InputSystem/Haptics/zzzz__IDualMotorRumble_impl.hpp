#pragma once
namespace {
#include "UnityEngine/InputSystem/Haptics/zzzz__IDualMotorRumble_def.hpp"
#include "UnityEngine/InputSystem/Haptics/zzzz__IHaptics_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Haptics::IDualMotorRumble.SetMotorSpeeds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Haptics::IDualMotorRumble::*)(float_t, float_t)>(&::UnityEngine::InputSystem::Haptics::IDualMotorRumble::SetMotorSpeeds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::Haptics::IDualMotorRumble),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Haptics::IDualMotorRumble>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::InputSystem::Haptics::IHaptics
constexpr  ::UnityEngine::InputSystem::Haptics::IDualMotorRumble::operator ::UnityEngine::InputSystem::Haptics::IHaptics() const noexcept {
return ::UnityEngine::InputSystem::Haptics::IHaptics(::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::InputSystem::Haptics::IDualMotorRumble::SetMotorSpeeds(float_t lowFrequency, float_t highFrequency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Haptics::IDualMotorRumble>::get(),
                            "SetMotorSpeeds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lowFrequency, highFrequency);
}
} // end anonymous namespace
