#pragma once
#include "Oculus/Platform/Models/zzzz__MatchmakingStats_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::MatchmakingStats._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::MatchmakingStats::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::MatchmakingStats::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x25a122c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::MatchmakingStats>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::MatchmakingStats::__set_DrawCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Oculus::Platform::Models::MatchmakingStats::__get_DrawCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::MatchmakingStats::__set_LossCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Oculus::Platform::Models::MatchmakingStats::__get_LossCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::MatchmakingStats::__set_SkillLevel(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Oculus::Platform::Models::MatchmakingStats::__get_SkillLevel() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::MatchmakingStats::__set_SkillMean(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t Oculus::Platform::Models::MatchmakingStats::__get_SkillMean() const {
return ::cordl_internals::getInstanceField<double_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::MatchmakingStats::__set_SkillStandardDeviation(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t Oculus::Platform::Models::MatchmakingStats::__get_SkillStandardDeviation() const {
return ::cordl_internals::getInstanceField<double_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::MatchmakingStats::__set_WinCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t Oculus::Platform::Models::MatchmakingStats::__get_WinCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::Models::MatchmakingStats::MatchmakingStats(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MatchmakingStats>(o))) {}
 void Oculus::Platform::Models::MatchmakingStats::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::MatchmakingStats>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
