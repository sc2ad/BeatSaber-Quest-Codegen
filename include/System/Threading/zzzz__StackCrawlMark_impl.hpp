#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::StackCrawlMark::StackCrawlMark(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Threading::StackCrawlMark::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::StackCrawlMark::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Threading::StackCrawlMark  ::System::Threading::StackCrawlMark::LookForMe{0};
constexpr ::System::Threading::StackCrawlMark  ::System::Threading::StackCrawlMark::LookForMyCaller{1};
constexpr ::System::Threading::StackCrawlMark  ::System::Threading::StackCrawlMark::LookForMyCallersCaller{2};
constexpr ::System::Threading::StackCrawlMark  ::System::Threading::StackCrawlMark::LookForThread{3};
} // end anonymous namespace
