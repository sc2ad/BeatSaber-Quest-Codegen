#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Unity::IO::LowLevel::Unsafe {
struct ProcessingState;
}
namespace Unity::IO::LowLevel::Unsafe {
struct Priority;
}
namespace Unity::IO::LowLevel::Unsafe {
struct AssetLoadingSubsystem;
}
namespace Unity::IO::LowLevel::Unsafe {
struct FileReadType;
}
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
class AsyncReadManagerMetricsFilters;
}
// Type: Unity.IO.LowLevel.Unsafe::AsyncReadManagerMetricsFilters
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9933))
// CS Name: Unity.IO.LowLevel.Unsafe.AsyncReadManagerMetricsFilters
class CORDL_TYPE AsyncReadManagerMetricsFilters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~AsyncReadManagerMetricsFilters() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncReadManagerMetricsFilters", modifiers: " const&", def_value: None }]
constexpr AsyncReadManagerMetricsFilters(AsyncReadManagerMetricsFilters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncReadManagerMetricsFilters", modifiers: "&&", def_value: None }]
constexpr AsyncReadManagerMetricsFilters(AsyncReadManagerMetricsFilters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncReadManagerMetricsFilters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsyncReadManagerMetricsFilters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncReadManagerMetricsFilters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncReadManagerMetricsFilters& operator=(AsyncReadManagerMetricsFilters&& o) noexcept = default;
  constexpr AsyncReadManagerMetricsFilters& operator=(AsyncReadManagerMetricsFilters const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint64_t> __declspec(property(get=__get_TypeIDs, put=__set_TypeIDs))  TypeIDs;

constexpr void __set_TypeIDs(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_TypeIDs() const;

 ::ArrayW<Unity::IO::LowLevel::Unsafe::ProcessingState> __declspec(property(get=__get_States, put=__set_States))  States;

constexpr void __set_States(::ArrayW<Unity::IO::LowLevel::Unsafe::ProcessingState> value) ;

constexpr ::ArrayW<Unity::IO::LowLevel::Unsafe::ProcessingState> __get_States() const;

 ::ArrayW<Unity::IO::LowLevel::Unsafe::FileReadType> __declspec(property(get=__get_ReadTypes, put=__set_ReadTypes))  ReadTypes;

constexpr void __set_ReadTypes(::ArrayW<Unity::IO::LowLevel::Unsafe::FileReadType> value) ;

constexpr ::ArrayW<Unity::IO::LowLevel::Unsafe::FileReadType> __get_ReadTypes() const;

 ::ArrayW<Unity::IO::LowLevel::Unsafe::Priority> __declspec(property(get=__get_PriorityLevels, put=__set_PriorityLevels))  PriorityLevels;

constexpr void __set_PriorityLevels(::ArrayW<Unity::IO::LowLevel::Unsafe::Priority> value) ;

constexpr ::ArrayW<Unity::IO::LowLevel::Unsafe::Priority> __get_PriorityLevels() const;

 ::ArrayW<Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem> __declspec(property(get=__get_Subsystems, put=__set_Subsystems))  Subsystems;

constexpr void __set_Subsystems(::ArrayW<Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem> value) ;

constexpr ::ArrayW<Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem> __get_Subsystems() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::IO::LowLevel::Unsafe
NEED_NO_BOX(Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters);
DEFINE_IL2CPP_ARG_TYPE(Unity::IO::LowLevel::Unsafe::AsyncReadManagerMetricsFilters, "Unity.IO.LowLevel.Unsafe", "AsyncReadManagerMetricsFilters");
