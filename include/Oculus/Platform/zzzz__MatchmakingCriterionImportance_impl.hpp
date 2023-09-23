#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Oculus/Platform/zzzz__MatchmakingCriterionImportance_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Oculus::Platform::MatchmakingCriterionImportance::MatchmakingCriterionImportance(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Oculus::Platform::MatchmakingCriterionImportance::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Oculus::Platform::MatchmakingCriterionImportance::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Oculus::Platform::MatchmakingCriterionImportance  Oculus::Platform::MatchmakingCriterionImportance::Required{0};
constexpr Oculus::Platform::MatchmakingCriterionImportance  Oculus::Platform::MatchmakingCriterionImportance::High{1};
constexpr Oculus::Platform::MatchmakingCriterionImportance  Oculus::Platform::MatchmakingCriterionImportance::Medium{2};
constexpr Oculus::Platform::MatchmakingCriterionImportance  Oculus::Platform::MatchmakingCriterionImportance::Low{3};
constexpr Oculus::Platform::MatchmakingCriterionImportance  Oculus::Platform::MatchmakingCriterionImportance::Unknown{4};
