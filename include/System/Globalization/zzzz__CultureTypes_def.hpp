#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Globalization {
struct CultureTypes;
}
// Type: System.Globalization::CultureTypes
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3646))
// CS Name: System.Globalization.CultureTypes
struct CORDL_TYPE CultureTypes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CultureTypes(int32_t value__) noexcept;


                    constexpr CultureTypes(CultureTypes const&) = default;
                    constexpr CultureTypes(CultureTypes&&) = default;
                    constexpr CultureTypes& operator=(CultureTypes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CultureTypes& operator=(CultureTypes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CultureTypes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CultureTypes_Unwrapped : int32_t {
__NeutralCultures = 1,
__SpecificCultures = 2,
__InstalledWin32Cultures = 4,
__AllCultures = 7,
__UserCustomCulture = 8,
__ReplacementCultures = 16,
__WindowsOnlyCultures = 32,
__FrameworkCultures = 64,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CultureTypes_Unwrapped () const noexcept {
return std::bit_cast<__CultureTypes_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NeutralCultures offset 0
static System::Globalization::CultureTypes const NeutralCultures;

/// @brief Field SpecificCultures offset 0
static System::Globalization::CultureTypes const SpecificCultures;

/// @brief Field InstalledWin32Cultures offset 0
static System::Globalization::CultureTypes const InstalledWin32Cultures;

/// @brief Field AllCultures offset 0
static System::Globalization::CultureTypes const AllCultures;

/// @brief Field UserCustomCulture offset 0
static System::Globalization::CultureTypes const UserCustomCulture;

/// @brief Field ReplacementCultures offset 0
static System::Globalization::CultureTypes const ReplacementCultures;

/// @brief Field WindowsOnlyCultures offset 0
static System::Globalization::CultureTypes const WindowsOnlyCultures;

/// @brief Field FrameworkCultures offset 0
static System::Globalization::CultureTypes const FrameworkCultures;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CultureTypes, "System.Globalization", "CultureTypes");
