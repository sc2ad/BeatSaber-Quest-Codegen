#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__DllImportSearchPath_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::InteropServices::DllImportSearchPath::DllImportSearchPath(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Runtime::InteropServices::DllImportSearchPath::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::InteropServices::DllImportSearchPath::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::UseDllDirectoryForDependencies{256};
constexpr System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::ApplicationDirectory{512};
constexpr System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::UserDirectories{1024};
constexpr System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::System32{2048};
constexpr System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::SafeDirectories{4096};
constexpr System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::AssemblyDirectory{2};
constexpr System::Runtime::InteropServices::DllImportSearchPath  System::Runtime::InteropServices::DllImportSearchPath::LegacyBehavior{0};
