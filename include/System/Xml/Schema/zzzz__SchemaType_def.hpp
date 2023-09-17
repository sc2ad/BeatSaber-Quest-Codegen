#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml::Schema {
struct SchemaType;
}
// Type: System.Xml.Schema::SchemaType
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11650))
// CS Name: System.Xml.Schema.SchemaType
struct CORDL_TYPE SchemaType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SchemaType(int32_t value__) noexcept;


                    constexpr SchemaType(SchemaType const&) = default;
                    constexpr SchemaType(SchemaType&&) = default;
                    constexpr SchemaType& operator=(SchemaType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SchemaType& operator=(SchemaType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SchemaType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SchemaType_Unwrapped : int32_t {
__None = 0,
__DTD = 1,
__XDR = 2,
__XSD = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SchemaType_Unwrapped () const noexcept {
return std::bit_cast<__SchemaType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Xml::Schema::SchemaType const None;

/// @brief Field DTD offset 0
static ::System::Xml::Schema::SchemaType const DTD;

/// @brief Field XDR offset 0
static ::System::Xml::Schema::SchemaType const XDR;

/// @brief Field XSD offset 0
static ::System::Xml::Schema::SchemaType const XSD;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaType, "System.Xml.Schema", "SchemaType");
