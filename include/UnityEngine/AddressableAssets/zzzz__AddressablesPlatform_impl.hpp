#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AddressablesPlatform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::AddressableAssets::AddressablesPlatform::AddressablesPlatform(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::AddressableAssets::AddressablesPlatform::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AddressableAssets::AddressablesPlatform::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::Unknown{0};
constexpr UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::Windows{1};
constexpr UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::OSX{2};
constexpr UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::Linux{3};
constexpr UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::PS4{4};
constexpr UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::Switch{5};
constexpr UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::XboxOne{6};
constexpr UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::WebGL{7};
constexpr UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::iOS{8};
constexpr UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::Android{9};
constexpr UnityEngine::AddressableAssets::AddressablesPlatform  UnityEngine::AddressableAssets::AddressablesPlatform::WindowsUniversal{10};
