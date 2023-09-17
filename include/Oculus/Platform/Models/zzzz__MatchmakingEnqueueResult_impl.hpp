#pragma once
namespace {
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshot_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::MatchmakingEnqueueResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::MatchmakingEnqueueResult::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::MatchmakingEnqueueResult::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x25a0680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingEnqueueResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Oculus::Platform::Models::MatchmakingEnqueueResult::__set_AdminSnapshotOptional(::Oculus::Platform::Models::MatchmakingAdminSnapshot value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::MatchmakingAdminSnapshot, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::MatchmakingAdminSnapshot>(value));
}
constexpr ::Oculus::Platform::Models::MatchmakingAdminSnapshot ::Oculus::Platform::Models::MatchmakingEnqueueResult::__get_AdminSnapshotOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::MatchmakingAdminSnapshot, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::MatchmakingEnqueueResult::__set_AdminSnapshot(::Oculus::Platform::Models::MatchmakingAdminSnapshot value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::MatchmakingAdminSnapshot, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::MatchmakingAdminSnapshot>(value));
}
constexpr ::Oculus::Platform::Models::MatchmakingAdminSnapshot ::Oculus::Platform::Models::MatchmakingEnqueueResult::__get_AdminSnapshot() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::MatchmakingAdminSnapshot, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::MatchmakingEnqueueResult::__set_AverageWait(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::Oculus::Platform::Models::MatchmakingEnqueueResult::__get_AverageWait() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::MatchmakingEnqueueResult::__set_MatchesInLastHourCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::Oculus::Platform::Models::MatchmakingEnqueueResult::__get_MatchesInLastHourCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::MatchmakingEnqueueResult::__set_MaxExpectedWait(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::Oculus::Platform::Models::MatchmakingEnqueueResult::__get_MaxExpectedWait() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::MatchmakingEnqueueResult::__set_Pool(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Oculus::Platform::Models::MatchmakingEnqueueResult::__get_Pool() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::MatchmakingEnqueueResult::__set_RecentMatchPercentage(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::Oculus::Platform::Models::MatchmakingEnqueueResult::__get_RecentMatchPercentage() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::MatchmakingEnqueueResult::__set_RequestHash(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Oculus::Platform::Models::MatchmakingEnqueueResult::__get_RequestHash() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::Models::MatchmakingEnqueueResult::MatchmakingEnqueueResult(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MatchmakingEnqueueResult>(o))) {}
 void ::Oculus::Platform::Models::MatchmakingEnqueueResult::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingEnqueueResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
} // end anonymous namespace
