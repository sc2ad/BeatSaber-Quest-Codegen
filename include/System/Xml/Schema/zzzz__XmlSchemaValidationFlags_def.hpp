#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaValidationFlags;
}
// Type: System.Xml.Schema::XmlSchemaValidationFlags
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11685))
// CS Name: System.Xml.Schema.XmlSchemaValidationFlags
struct CORDL_TYPE XmlSchemaValidationFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlSchemaValidationFlags(int32_t value__) noexcept;


                    constexpr XmlSchemaValidationFlags(XmlSchemaValidationFlags const&) = default;
                    constexpr XmlSchemaValidationFlags(XmlSchemaValidationFlags&&) = default;
                    constexpr XmlSchemaValidationFlags& operator=(XmlSchemaValidationFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XmlSchemaValidationFlags& operator=(XmlSchemaValidationFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaValidationFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XmlSchemaValidationFlags_Unwrapped : int32_t {
__None = 0,
__ProcessInlineSchema = 1,
__ProcessSchemaLocation = 2,
__ReportValidationWarnings = 4,
__ProcessIdentityConstraints = 8,
__AllowXmlAttributes = 16,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlSchemaValidationFlags_Unwrapped () const noexcept {
return std::bit_cast<__XmlSchemaValidationFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Xml::Schema::XmlSchemaValidationFlags const None;

/// @brief Field ProcessInlineSchema offset 0
static ::System::Xml::Schema::XmlSchemaValidationFlags const ProcessInlineSchema;

/// @brief Field ProcessSchemaLocation offset 0
static ::System::Xml::Schema::XmlSchemaValidationFlags const ProcessSchemaLocation;

/// @brief Field ReportValidationWarnings offset 0
static ::System::Xml::Schema::XmlSchemaValidationFlags const ReportValidationWarnings;

/// @brief Field ProcessIdentityConstraints offset 0
static ::System::Xml::Schema::XmlSchemaValidationFlags const ProcessIdentityConstraints;

/// @brief Field AllowXmlAttributes offset 0
static ::System::Xml::Schema::XmlSchemaValidationFlags const AllowXmlAttributes;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaValidationFlags, "System.Xml.Schema", "XmlSchemaValidationFlags");
