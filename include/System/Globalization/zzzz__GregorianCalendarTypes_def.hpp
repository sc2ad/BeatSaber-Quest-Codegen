#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Globalization {
struct GregorianCalendarTypes;
}
// Type: System.Globalization::GregorianCalendarTypes
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3686))
// CS Name: System.Globalization.GregorianCalendarTypes
struct CORDL_TYPE GregorianCalendarTypes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GregorianCalendarTypes(int32_t value__) noexcept;


                    constexpr GregorianCalendarTypes(GregorianCalendarTypes const&) = default;
                    constexpr GregorianCalendarTypes(GregorianCalendarTypes&&) = default;
                    constexpr GregorianCalendarTypes& operator=(GregorianCalendarTypes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GregorianCalendarTypes& operator=(GregorianCalendarTypes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GregorianCalendarTypes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GregorianCalendarTypes_Unwrapped : int32_t {
__Localized = 1,
__USEnglish = 2,
__MiddleEastFrench = 9,
__Arabic = 10,
__TransliteratedEnglish = 11,
__TransliteratedFrench = 12,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GregorianCalendarTypes_Unwrapped () const noexcept {
return std::bit_cast<__GregorianCalendarTypes_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Localized offset 0
static System::Globalization::GregorianCalendarTypes const Localized;

/// @brief Field USEnglish offset 0
static System::Globalization::GregorianCalendarTypes const USEnglish;

/// @brief Field MiddleEastFrench offset 0
static System::Globalization::GregorianCalendarTypes const MiddleEastFrench;

/// @brief Field Arabic offset 0
static System::Globalization::GregorianCalendarTypes const Arabic;

/// @brief Field TransliteratedEnglish offset 0
static System::Globalization::GregorianCalendarTypes const TransliteratedEnglish;

/// @brief Field TransliteratedFrench offset 0
static System::Globalization::GregorianCalendarTypes const TransliteratedFrench;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::GregorianCalendarTypes, "System.Globalization", "GregorianCalendarTypes");
