#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__AssetLoadingSubsystem_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::AssetLoadingSubsystem(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::Other{0};
constexpr Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::Texture{1};
constexpr Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::VirtualTexture{2};
constexpr Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::Mesh{3};
constexpr Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::Audio{4};
constexpr Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::Scripts{5};
constexpr Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::EntitiesScene{6};
constexpr Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::EntitiesStreamBinaryReader{7};
constexpr Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem  Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem::FileInfo{8};
