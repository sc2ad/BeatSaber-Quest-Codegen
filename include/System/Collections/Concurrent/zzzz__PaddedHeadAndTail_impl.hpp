#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Collections/Concurrent/zzzz__PaddedHeadAndTail_def.hpp"
// Ctor Parameters [CppParam { name: "Head", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Tail", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Concurrent::PaddedHeadAndTail::PaddedHeadAndTail(int32_t Head, int32_t Tail) noexcept : ::bs_hook::ValueTypeWrapper() {this->Head = Head;
this->Tail = Tail;
}
constexpr void System::Collections::Concurrent::PaddedHeadAndTail::__set_Head(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::PaddedHeadAndTail::__get_Head() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this->__instance);
}
constexpr void System::Collections::Concurrent::PaddedHeadAndTail::__set_Tail(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x100>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Collections::Concurrent::PaddedHeadAndTail::__get_Tail() const {
return ::cordl_internals::getInstanceField<int32_t, 0x100>(this->__instance);
}
