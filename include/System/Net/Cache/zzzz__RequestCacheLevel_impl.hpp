#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/Cache/zzzz__RequestCacheLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Cache::RequestCacheLevel::RequestCacheLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::Cache::RequestCacheLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Cache::RequestCacheLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::Cache::RequestCacheLevel  ::System::Net::Cache::RequestCacheLevel::Default{0};
constexpr ::System::Net::Cache::RequestCacheLevel  ::System::Net::Cache::RequestCacheLevel::BypassCache{1};
constexpr ::System::Net::Cache::RequestCacheLevel  ::System::Net::Cache::RequestCacheLevel::CacheOnly{2};
constexpr ::System::Net::Cache::RequestCacheLevel  ::System::Net::Cache::RequestCacheLevel::CacheIfAvailable{3};
constexpr ::System::Net::Cache::RequestCacheLevel  ::System::Net::Cache::RequestCacheLevel::Revalidate{4};
constexpr ::System::Net::Cache::RequestCacheLevel  ::System::Net::Cache::RequestCacheLevel::Reload{5};
constexpr ::System::Net::Cache::RequestCacheLevel  ::System::Net::Cache::RequestCacheLevel::NoCacheNoStore{6};
} // end anonymous namespace
