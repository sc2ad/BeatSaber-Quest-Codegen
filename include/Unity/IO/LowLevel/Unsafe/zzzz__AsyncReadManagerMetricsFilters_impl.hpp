#pragma once
namespace {
#include "Unity/IO/LowLevel/Unsafe/zzzz__AsyncReadManagerMetricsFilters_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileReadType_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__AssetLoadingSubsystem_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__Priority_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ProcessingState_def.hpp"
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters::__set_TypeIDs(::ArrayW<uint64_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint64_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint64_t>>(value));
}
constexpr ::ArrayW<uint64_t> ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters::__get_TypeIDs() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint64_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters::__set_States(::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState> value)  {
::cordl_internals::setInstanceField<::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState>>(value));
}
constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState> ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters::__get_States() const {
return ::cordl_internals::getInstanceField<::ArrayW<::Unity::IO::LowLevel::Unsafe::ProcessingState>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters::__set_ReadTypes(::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType> value)  {
::cordl_internals::setInstanceField<::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType>>(value));
}
constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType> ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters::__get_ReadTypes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::Unity::IO::LowLevel::Unsafe::FileReadType>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters::__set_PriorityLevels(::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority> value)  {
::cordl_internals::setInstanceField<::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority>>(value));
}
constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority> ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters::__get_PriorityLevels() const {
return ::cordl_internals::getInstanceField<::ArrayW<::Unity::IO::LowLevel::Unsafe::Priority>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters::__set_Subsystems(::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem> value)  {
::cordl_internals::setInstanceField<::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>>(value));
}
constexpr ::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem> ::Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters::__get_Subsystems() const {
return ::cordl_internals::getInstanceField<::ArrayW<::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
} // end anonymous namespace
