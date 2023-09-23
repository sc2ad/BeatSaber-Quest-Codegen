#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__ScoresScope_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr BeatSaberAPI::DataTransferObjects::ScoresScope::ScoresScope(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void BeatSaberAPI::DataTransferObjects::ScoresScope::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatSaberAPI::DataTransferObjects::ScoresScope::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr BeatSaberAPI::DataTransferObjects::ScoresScope  BeatSaberAPI::DataTransferObjects::ScoresScope::Global{0};
constexpr BeatSaberAPI::DataTransferObjects::ScoresScope  BeatSaberAPI::DataTransferObjects::ScoresScope::AroundPlayer{1};
constexpr BeatSaberAPI::DataTransferObjects::ScoresScope  BeatSaberAPI::DataTransferObjects::ScoresScope::Friends{3};
