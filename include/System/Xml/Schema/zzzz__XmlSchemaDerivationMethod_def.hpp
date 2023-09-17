#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaDerivationMethod;
}
// Type: System.Xml.Schema::XmlSchemaDerivationMethod
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11666))
// CS Name: System.Xml.Schema.XmlSchemaDerivationMethod
struct CORDL_TYPE XmlSchemaDerivationMethod : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlSchemaDerivationMethod(int32_t value__) noexcept;


                    constexpr XmlSchemaDerivationMethod(XmlSchemaDerivationMethod const&) = default;
                    constexpr XmlSchemaDerivationMethod(XmlSchemaDerivationMethod&&) = default;
                    constexpr XmlSchemaDerivationMethod& operator=(XmlSchemaDerivationMethod const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XmlSchemaDerivationMethod& operator=(XmlSchemaDerivationMethod&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaDerivationMethod(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XmlSchemaDerivationMethod_Unwrapped : int32_t {
__Empty = 0,
__Substitution = 1,
__Extension = 2,
__Restriction = 4,
__List = 8,
__Union = 16,
__All = 255,
__None = 256,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlSchemaDerivationMethod_Unwrapped () const noexcept {
return std::bit_cast<__XmlSchemaDerivationMethod_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Empty offset 0
static ::System::Xml::Schema::XmlSchemaDerivationMethod const Empty;

/// @brief Field Substitution offset 0
static ::System::Xml::Schema::XmlSchemaDerivationMethod const Substitution;

/// @brief Field Extension offset 0
static ::System::Xml::Schema::XmlSchemaDerivationMethod const Extension;

/// @brief Field Restriction offset 0
static ::System::Xml::Schema::XmlSchemaDerivationMethod const Restriction;

/// @brief Field List offset 0
static ::System::Xml::Schema::XmlSchemaDerivationMethod const List;

/// @brief Field Union offset 0
static ::System::Xml::Schema::XmlSchemaDerivationMethod const Union;

/// @brief Field All offset 0
static ::System::Xml::Schema::XmlSchemaDerivationMethod const All;

/// @brief Field None offset 0
static ::System::Xml::Schema::XmlSchemaDerivationMethod const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaDerivationMethod, "System.Xml.Schema", "XmlSchemaDerivationMethod");
