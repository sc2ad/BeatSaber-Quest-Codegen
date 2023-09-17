#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__RemoteConfigSettingsHelper_def.hpp"
namespace {
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag::UnityEngine__RemoteConfigSettingsHelper__Tag(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag  UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag::kUnknown{0};
constexpr UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag  UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag::kIntVal{1};
constexpr UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag  UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag::kInt64Val{2};
constexpr UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag  UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag::kUInt64Val{3};
constexpr UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag  UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag::kDoubleVal{4};
constexpr UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag  UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag::kBoolVal{5};
constexpr UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag  UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag::kStringVal{6};
constexpr UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag  UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag::kArrayVal{7};
constexpr UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag  UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag::kMixedArrayVal{8};
constexpr UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag  UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag::kMapVal{9};
constexpr UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag  UnityEngine::UnityEngine__RemoteConfigSettingsHelper__Tag::kMaxTags{10};
} // end anonymous namespace
