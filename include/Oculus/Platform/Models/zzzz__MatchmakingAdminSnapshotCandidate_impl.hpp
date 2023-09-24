#pragma once
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshotCandidate_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x25a04d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__set_CanMatch(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__get_CanMatch() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__set_MyTotalScore(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__get_MyTotalScore() const {
return ::cordl_internals::getInstanceField<double_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__set_TheirCurrentThreshold(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__get_TheirCurrentThreshold() const {
return ::cordl_internals::getInstanceField<double_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__set_TheirTotalScore(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__get_TheirTotalScore() const {
return ::cordl_internals::getInstanceField<double_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__set_TraceId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__get_TraceId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::New_ctor(::cordl_internals::intptr_t o)  {
Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate>(o))};
return o;
}
 void Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
