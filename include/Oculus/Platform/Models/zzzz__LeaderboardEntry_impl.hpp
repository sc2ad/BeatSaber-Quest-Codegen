#pragma once
#include "Oculus/Platform/Models/zzzz__LeaderboardEntry_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Oculus/Platform/Models/zzzz__SupplementaryMetric_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::LeaderboardEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::LeaderboardEntry::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::LeaderboardEntry::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x259f7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::LeaderboardEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::LeaderboardEntry::__set_DisplayScore(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Oculus::Platform::Models::LeaderboardEntry::__get_DisplayScore() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__set_ExtraData(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Oculus::Platform::Models::LeaderboardEntry::__get_ExtraData() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__set_ID(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t Oculus::Platform::Models::LeaderboardEntry::__get_ID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__set_Rank(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Oculus::Platform::Models::LeaderboardEntry::__get_Rank() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__set_Score(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t Oculus::Platform::Models::LeaderboardEntry::__get_Score() const {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__set_SupplementaryMetricOptional(Oculus::Platform::Models::SupplementaryMetric value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::SupplementaryMetric, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::SupplementaryMetric>(value));
}
constexpr Oculus::Platform::Models::SupplementaryMetric Oculus::Platform::Models::LeaderboardEntry::__get_SupplementaryMetricOptional() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::SupplementaryMetric, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__set_SupplementaryMetric(Oculus::Platform::Models::SupplementaryMetric value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::SupplementaryMetric, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::SupplementaryMetric>(value));
}
constexpr Oculus::Platform::Models::SupplementaryMetric Oculus::Platform::Models::LeaderboardEntry::__get_SupplementaryMetric() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::SupplementaryMetric, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__set_Timestamp(System::DateTime value)  {
::cordl_internals::setInstanceField<System::DateTime, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::DateTime>(value));
}
constexpr System::DateTime Oculus::Platform::Models::LeaderboardEntry::__get_Timestamp() const {
return ::cordl_internals::getInstanceField<System::DateTime, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__set_User(Oculus::Platform::Models::User value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::User, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::User>(value));
}
constexpr Oculus::Platform::Models::User Oculus::Platform::Models::LeaderboardEntry::__get_User() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::User, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::Models::LeaderboardEntry::LeaderboardEntry(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LeaderboardEntry>(o))) {}
 void Oculus::Platform::Models::LeaderboardEntry::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::LeaderboardEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
