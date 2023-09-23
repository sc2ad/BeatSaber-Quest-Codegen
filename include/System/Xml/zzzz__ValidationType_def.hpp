#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml {
struct ValidationType;
}
// Type: System.Xml::ValidationType
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11387))
// CS Name: System.Xml.ValidationType
struct CORDL_TYPE ValidationType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValidationType(int32_t value__) noexcept;


                    constexpr ValidationType(ValidationType const&) = default;
                    constexpr ValidationType(ValidationType&&) = default;
                    constexpr ValidationType& operator=(ValidationType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValidationType& operator=(ValidationType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValidationType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ValidationType_Unwrapped : int32_t {
__None = 0,
__Auto = 1,
__DTD = 2,
__XDR = 3,
__Schema = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ValidationType_Unwrapped () const noexcept {
return std::bit_cast<__ValidationType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Xml::ValidationType const None;

/// @brief Field Auto offset 0
static System::Xml::ValidationType const Auto;

/// @brief Field DTD offset 0
static System::Xml::ValidationType const DTD;

/// @brief Field XDR offset 0
static System::Xml::ValidationType const XDR;

/// @brief Field Schema offset 0
static System::Xml::ValidationType const Schema;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(System::Xml::ValidationType, "System.Xml", "ValidationType");
