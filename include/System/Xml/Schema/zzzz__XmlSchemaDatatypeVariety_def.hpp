#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaDatatypeVariety;
}
// Type: System.Xml.Schema::XmlSchemaDatatypeVariety
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11557))
// CS Name: System.Xml.Schema.XmlSchemaDatatypeVariety
struct CORDL_TYPE XmlSchemaDatatypeVariety : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlSchemaDatatypeVariety(int32_t value__) noexcept;


                    constexpr XmlSchemaDatatypeVariety(XmlSchemaDatatypeVariety const&) = default;
                    constexpr XmlSchemaDatatypeVariety(XmlSchemaDatatypeVariety&&) = default;
                    constexpr XmlSchemaDatatypeVariety& operator=(XmlSchemaDatatypeVariety const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XmlSchemaDatatypeVariety& operator=(XmlSchemaDatatypeVariety&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaDatatypeVariety(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XmlSchemaDatatypeVariety_Unwrapped : int32_t {
__Atomic = 0,
__List = 1,
__Union = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlSchemaDatatypeVariety_Unwrapped () const noexcept {
return std::bit_cast<__XmlSchemaDatatypeVariety_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Atomic offset 0
static System::Xml::Schema::XmlSchemaDatatypeVariety const Atomic;

/// @brief Field List offset 0
static System::Xml::Schema::XmlSchemaDatatypeVariety const List;

/// @brief Field Union offset 0
static System::Xml::Schema::XmlSchemaDatatypeVariety const Union;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaDatatypeVariety, "System.Xml.Schema", "XmlSchemaDatatypeVariety");
