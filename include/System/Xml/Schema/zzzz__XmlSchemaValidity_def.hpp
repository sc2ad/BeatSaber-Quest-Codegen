#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaValidity;
}
// Type: System.Xml.Schema::XmlSchemaValidity
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11686))
// CS Name: System.Xml.Schema.XmlSchemaValidity
struct CORDL_TYPE XmlSchemaValidity : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlSchemaValidity(int32_t value__) noexcept;


                    constexpr XmlSchemaValidity(XmlSchemaValidity const&) = default;
                    constexpr XmlSchemaValidity(XmlSchemaValidity&&) = default;
                    constexpr XmlSchemaValidity& operator=(XmlSchemaValidity const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XmlSchemaValidity& operator=(XmlSchemaValidity&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaValidity(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XmlSchemaValidity_Unwrapped : int32_t {
__NotKnown = 0,
__Valid = 1,
__Invalid = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlSchemaValidity_Unwrapped () const noexcept {
return std::bit_cast<__XmlSchemaValidity_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NotKnown offset 0
static System::Xml::Schema::XmlSchemaValidity const NotKnown;

/// @brief Field Valid offset 0
static System::Xml::Schema::XmlSchemaValidity const Valid;

/// @brief Field Invalid offset 0
static System::Xml::Schema::XmlSchemaValidity const Invalid;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaValidity, "System.Xml.Schema", "XmlSchemaValidity");
