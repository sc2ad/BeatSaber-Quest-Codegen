#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
// Type: System.Xml.Schema::XmlSchemaWhiteSpace
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11560))
// CS Name: System.Xml.Schema.XmlSchemaWhiteSpace
struct CORDL_TYPE XmlSchemaWhiteSpace : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlSchemaWhiteSpace(int32_t value__) noexcept;


                    constexpr XmlSchemaWhiteSpace(XmlSchemaWhiteSpace const&) = default;
                    constexpr XmlSchemaWhiteSpace(XmlSchemaWhiteSpace&&) = default;
                    constexpr XmlSchemaWhiteSpace& operator=(XmlSchemaWhiteSpace const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XmlSchemaWhiteSpace& operator=(XmlSchemaWhiteSpace&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaWhiteSpace(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XmlSchemaWhiteSpace_Unwrapped : int32_t {
__Preserve = 0,
__Replace = 1,
__Collapse = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlSchemaWhiteSpace_Unwrapped () const noexcept {
return std::bit_cast<__XmlSchemaWhiteSpace_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Preserve offset 0
static System::Xml::Schema::XmlSchemaWhiteSpace const Preserve;

/// @brief Field Replace offset 0
static System::Xml::Schema::XmlSchemaWhiteSpace const Replace;

/// @brief Field Collapse offset 0
static System::Xml::Schema::XmlSchemaWhiteSpace const Collapse;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaWhiteSpace, "System.Xml.Schema", "XmlSchemaWhiteSpace");
