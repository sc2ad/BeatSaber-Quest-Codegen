#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Polyglot {
struct GoogleDriveDownloadFormat;
}
// Type: Polyglot::GoogleDriveDownloadFormat
namespace Polyglot {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15528))
// CS Name: Polyglot.GoogleDriveDownloadFormat
struct CORDL_TYPE GoogleDriveDownloadFormat : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GoogleDriveDownloadFormat(int32_t value__) noexcept;


                    constexpr GoogleDriveDownloadFormat(GoogleDriveDownloadFormat const&) = default;
                    constexpr GoogleDriveDownloadFormat(GoogleDriveDownloadFormat&&) = default;
                    constexpr GoogleDriveDownloadFormat& operator=(GoogleDriveDownloadFormat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GoogleDriveDownloadFormat& operator=(GoogleDriveDownloadFormat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GoogleDriveDownloadFormat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GoogleDriveDownloadFormat_Unwrapped : int32_t {
__CSV = 0,
__TSV = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GoogleDriveDownloadFormat_Unwrapped () const noexcept {
return std::bit_cast<__GoogleDriveDownloadFormat_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CSV offset 0
static ::Polyglot::GoogleDriveDownloadFormat const CSV;

/// @brief Field TSV offset 0
static ::Polyglot::GoogleDriveDownloadFormat const TSV;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Polyglot
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::GoogleDriveDownloadFormat, "Polyglot", "GoogleDriveDownloadFormat");