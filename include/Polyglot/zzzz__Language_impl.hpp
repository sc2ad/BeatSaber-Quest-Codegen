#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Polyglot/zzzz__Language_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Polyglot::Language::Language(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Polyglot::Language::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Polyglot::Language::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Polyglot::Language  Polyglot::Language::English{0};
constexpr Polyglot::Language  Polyglot::Language::French{1};
constexpr Polyglot::Language  Polyglot::Language::Spanish{2};
constexpr Polyglot::Language  Polyglot::Language::German{3};
constexpr Polyglot::Language  Polyglot::Language::Italian{4};
constexpr Polyglot::Language  Polyglot::Language::Portuguese_Brazil{5};
constexpr Polyglot::Language  Polyglot::Language::Portuguese{6};
constexpr Polyglot::Language  Polyglot::Language::Russian{7};
constexpr Polyglot::Language  Polyglot::Language::Greek{8};
constexpr Polyglot::Language  Polyglot::Language::Turkish{9};
constexpr Polyglot::Language  Polyglot::Language::Danish{10};
constexpr Polyglot::Language  Polyglot::Language::Norwegian{11};
constexpr Polyglot::Language  Polyglot::Language::Swedish{12};
constexpr Polyglot::Language  Polyglot::Language::Dutch{13};
constexpr Polyglot::Language  Polyglot::Language::Polish{14};
constexpr Polyglot::Language  Polyglot::Language::Finnish{15};
constexpr Polyglot::Language  Polyglot::Language::Japanese{16};
constexpr Polyglot::Language  Polyglot::Language::Simplified_Chinese{17};
constexpr Polyglot::Language  Polyglot::Language::Traditional_Chinese{18};
constexpr Polyglot::Language  Polyglot::Language::Korean{19};
constexpr Polyglot::Language  Polyglot::Language::Czech{20};
constexpr Polyglot::Language  Polyglot::Language::Hungarian{21};
constexpr Polyglot::Language  Polyglot::Language::Romanian{22};
constexpr Polyglot::Language  Polyglot::Language::Thai{23};
constexpr Polyglot::Language  Polyglot::Language::Bulgarian{24};
constexpr Polyglot::Language  Polyglot::Language::Hebrew{25};
constexpr Polyglot::Language  Polyglot::Language::Arabic{26};
constexpr Polyglot::Language  Polyglot::Language::Bosnian{27};
constexpr Polyglot::Language  Polyglot::Language::Debug_Keys{28};
constexpr Polyglot::Language  Polyglot::Language::Debug_English_Reverted{29};
constexpr Polyglot::Language  Polyglot::Language::Debug_Word_With_Max_Lenght{30};
