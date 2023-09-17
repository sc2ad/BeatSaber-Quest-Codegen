#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "Notepad/zzzz__NoteURL_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::Notepad::NoteURL::NoteURL(::StringW name, ::StringW url) noexcept : ::bs_hook::ValueTypeWrapper() {this->name = name;
this->url = url;
}
constexpr void ::Notepad::NoteURL::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Notepad::NoteURL::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::Notepad::NoteURL::__set_url(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Notepad::NoteURL::__get_url() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
} // end anonymous namespace
