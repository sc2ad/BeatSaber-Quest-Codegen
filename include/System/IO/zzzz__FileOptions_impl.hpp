#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/IO/zzzz__FileOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::FileOptions::FileOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::IO::FileOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::IO::FileOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::IO::FileOptions  ::System::IO::FileOptions::None{0};
constexpr ::System::IO::FileOptions  ::System::IO::FileOptions::WriteThrough{-2147483648};
constexpr ::System::IO::FileOptions  ::System::IO::FileOptions::Asynchronous{1073741824};
constexpr ::System::IO::FileOptions  ::System::IO::FileOptions::RandomAccess{268435456};
constexpr ::System::IO::FileOptions  ::System::IO::FileOptions::DeleteOnClose{67108864};
constexpr ::System::IO::FileOptions  ::System::IO::FileOptions::SequentialScan{134217728};
constexpr ::System::IO::FileOptions  ::System::IO::FileOptions::Encrypted{16384};
} // end anonymous namespace
