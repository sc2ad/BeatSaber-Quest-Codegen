#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaContentProcessing;
}
// Type: System.Xml.Schema::XmlSchemaContentProcessing
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11663))
// CS Name: System.Xml.Schema.XmlSchemaContentProcessing
struct CORDL_TYPE XmlSchemaContentProcessing : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlSchemaContentProcessing(int32_t value__) noexcept;


                    constexpr XmlSchemaContentProcessing(XmlSchemaContentProcessing const&) = default;
                    constexpr XmlSchemaContentProcessing(XmlSchemaContentProcessing&&) = default;
                    constexpr XmlSchemaContentProcessing& operator=(XmlSchemaContentProcessing const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XmlSchemaContentProcessing& operator=(XmlSchemaContentProcessing&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaContentProcessing(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XmlSchemaContentProcessing_Unwrapped : int32_t {
__None = 0,
__Skip = 1,
__Lax = 2,
__Strict = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlSchemaContentProcessing_Unwrapped () const noexcept {
return std::bit_cast<__XmlSchemaContentProcessing_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Xml::Schema::XmlSchemaContentProcessing const None;

/// @brief Field Skip offset 0
static ::System::Xml::Schema::XmlSchemaContentProcessing const Skip;

/// @brief Field Lax offset 0
static ::System::Xml::Schema::XmlSchemaContentProcessing const Lax;

/// @brief Field Strict offset 0
static ::System::Xml::Schema::XmlSchemaContentProcessing const Strict;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaContentProcessing, "System.Xml.Schema", "XmlSchemaContentProcessing");
