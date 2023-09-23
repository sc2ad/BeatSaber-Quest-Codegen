#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml {
struct XmlDateTimeSerializationMode;
}
// Type: System.Xml::XmlDateTimeSerializationMode
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11489))
// CS Name: System.Xml.XmlDateTimeSerializationMode
struct CORDL_TYPE XmlDateTimeSerializationMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlDateTimeSerializationMode(int32_t value__) noexcept;


                    constexpr XmlDateTimeSerializationMode(XmlDateTimeSerializationMode const&) = default;
                    constexpr XmlDateTimeSerializationMode(XmlDateTimeSerializationMode&&) = default;
                    constexpr XmlDateTimeSerializationMode& operator=(XmlDateTimeSerializationMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XmlDateTimeSerializationMode& operator=(XmlDateTimeSerializationMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XmlDateTimeSerializationMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XmlDateTimeSerializationMode_Unwrapped : int32_t {
__Local = 0,
__Utc = 1,
__Unspecified = 2,
__RoundtripKind = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlDateTimeSerializationMode_Unwrapped () const noexcept {
return std::bit_cast<__XmlDateTimeSerializationMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Local offset 0
static System::Xml::XmlDateTimeSerializationMode const Local;

/// @brief Field Utc offset 0
static System::Xml::XmlDateTimeSerializationMode const Utc;

/// @brief Field Unspecified offset 0
static System::Xml::XmlDateTimeSerializationMode const Unspecified;

/// @brief Field RoundtripKind offset 0
static System::Xml::XmlDateTimeSerializationMode const RoundtripKind;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlDateTimeSerializationMode, "System.Xml", "XmlDateTimeSerializationMode");
