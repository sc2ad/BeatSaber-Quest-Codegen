#pragma once
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshot_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshotCandidateList_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::MatchmakingAdminSnapshot._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::MatchmakingAdminSnapshot::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::MatchmakingAdminSnapshot::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x25a01d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::MatchmakingAdminSnapshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::MatchmakingAdminSnapshot::__set_Candidates(Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList>(value));
}
constexpr Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList Oculus::Platform::Models::MatchmakingAdminSnapshot::__get_Candidates() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::MatchmakingAdminSnapshot::__set_MyCurrentThreshold(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t Oculus::Platform::Models::MatchmakingAdminSnapshot::__get_MyCurrentThreshold() const {
return ::cordl_internals::getInstanceField<double_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Oculus::Platform::Models::MatchmakingAdminSnapshot Oculus::Platform::Models::MatchmakingAdminSnapshot::New_ctor(::cordl_internals::intptr_t o)  {
Oculus::Platform::Models::MatchmakingAdminSnapshot o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::Models::MatchmakingAdminSnapshot>(o))};
return o;
}
 void Oculus::Platform::Models::MatchmakingAdminSnapshot::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::MatchmakingAdminSnapshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
