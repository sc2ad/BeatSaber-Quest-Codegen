#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/IO/zzzz__FileAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::FileAttributes::FileAttributes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::IO::FileAttributes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::IO::FileAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::IO::FileAttributes  ::System::IO::FileAttributes::ReadOnly{1};
constexpr ::System::IO::FileAttributes  ::System::IO::FileAttributes::Hidden{2};
constexpr ::System::IO::FileAttributes  ::System::IO::FileAttributes::System{4};
constexpr ::System::IO::FileAttributes  ::System::IO::FileAttributes::Directory{16};
constexpr ::System::IO::FileAttributes  ::System::IO::FileAttributes::Archive{32};
constexpr ::System::IO::FileAttributes  ::System::IO::FileAttributes::Device{64};
constexpr ::System::IO::FileAttributes  ::System::IO::FileAttributes::Normal{128};
constexpr ::System::IO::FileAttributes  ::System::IO::FileAttributes::Temporary{256};
constexpr ::System::IO::FileAttributes  ::System::IO::FileAttributes::SparseFile{512};
constexpr ::System::IO::FileAttributes  ::System::IO::FileAttributes::ReparsePoint{1024};
constexpr ::System::IO::FileAttributes  ::System::IO::FileAttributes::Compressed{2048};
constexpr ::System::IO::FileAttributes  ::System::IO::FileAttributes::Offline{4096};
constexpr ::System::IO::FileAttributes  ::System::IO::FileAttributes::NotContentIndexed{8192};
constexpr ::System::IO::FileAttributes  ::System::IO::FileAttributes::Encrypted{16384};
constexpr ::System::IO::FileAttributes  ::System::IO::FileAttributes::IntegrityStream{32768};
constexpr ::System::IO::FileAttributes  ::System::IO::FileAttributes::NoScrubData{131072};
} // end anonymous namespace
