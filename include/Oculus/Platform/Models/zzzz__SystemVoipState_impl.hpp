#pragma once
#include "Oculus/Platform/Models/zzzz__SystemVoipState_def.hpp"
#include "Oculus/Platform/zzzz__VoipMuteState_def.hpp"
#include "Oculus/Platform/zzzz__SystemVoipStatus_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::SystemVoipState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::SystemVoipState::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::SystemVoipState::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25a33d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::SystemVoipState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::SystemVoipState::__set_MicrophoneMuted(Oculus::Platform::VoipMuteState value)  {
::cordl_internals::setInstanceField<Oculus::Platform::VoipMuteState, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::VoipMuteState>(value));
}
constexpr Oculus::Platform::VoipMuteState Oculus::Platform::Models::SystemVoipState::__get_MicrophoneMuted() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::VoipMuteState, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::SystemVoipState::__set_Status(Oculus::Platform::SystemVoipStatus value)  {
::cordl_internals::setInstanceField<Oculus::Platform::SystemVoipStatus, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::SystemVoipStatus>(value));
}
constexpr Oculus::Platform::SystemVoipStatus Oculus::Platform::Models::SystemVoipState::__get_Status() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::SystemVoipStatus, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Oculus::Platform::Models::SystemVoipState Oculus::Platform::Models::SystemVoipState::New_ctor(::cordl_internals::intptr_t o)  {
Oculus::Platform::Models::SystemVoipState o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::Models::SystemVoipState>(o))};
return o;
}
 void Oculus::Platform::Models::SystemVoipState::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::SystemVoipState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
