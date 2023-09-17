#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Android::AndroidAssetPackError::AndroidAssetPackError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Android::AndroidAssetPackError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Android::AndroidAssetPackError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Android::AndroidAssetPackError  ::UnityEngine::Android::AndroidAssetPackError::NoError{0};
constexpr ::UnityEngine::Android::AndroidAssetPackError  ::UnityEngine::Android::AndroidAssetPackError::AppUnavailable{-1};
constexpr ::UnityEngine::Android::AndroidAssetPackError  ::UnityEngine::Android::AndroidAssetPackError::PackUnavailable{-2};
constexpr ::UnityEngine::Android::AndroidAssetPackError  ::UnityEngine::Android::AndroidAssetPackError::InvalidRequest{-3};
constexpr ::UnityEngine::Android::AndroidAssetPackError  ::UnityEngine::Android::AndroidAssetPackError::DownloadNotFound{-4};
constexpr ::UnityEngine::Android::AndroidAssetPackError  ::UnityEngine::Android::AndroidAssetPackError::ApiNotAvailable{-5};
constexpr ::UnityEngine::Android::AndroidAssetPackError  ::UnityEngine::Android::AndroidAssetPackError::NetworkError{-6};
constexpr ::UnityEngine::Android::AndroidAssetPackError  ::UnityEngine::Android::AndroidAssetPackError::AccessDenied{-7};
constexpr ::UnityEngine::Android::AndroidAssetPackError  ::UnityEngine::Android::AndroidAssetPackError::InsufficientStorage{-10};
constexpr ::UnityEngine::Android::AndroidAssetPackError  ::UnityEngine::Android::AndroidAssetPackError::PlayStoreNotFound{-11};
constexpr ::UnityEngine::Android::AndroidAssetPackError  ::UnityEngine::Android::AndroidAssetPackError::NetworkUnrestricted{-12};
constexpr ::UnityEngine::Android::AndroidAssetPackError  ::UnityEngine::Android::AndroidAssetPackError::AppNotOwned{-13};
constexpr ::UnityEngine::Android::AndroidAssetPackError  ::UnityEngine::Android::AndroidAssetPackError::InternalError{-100};
} // end anonymous namespace
