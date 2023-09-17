#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
struct AttributeProperties;
}
// Type: System.Xml::AttributeProperties
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11380))
// CS Name: System.Xml.AttributeProperties
struct CORDL_TYPE AttributeProperties : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr AttributeProperties(uint32_t value__) noexcept;


                    constexpr AttributeProperties(AttributeProperties const&) = default;
                    constexpr AttributeProperties(AttributeProperties&&) = default;
                    constexpr AttributeProperties& operator=(AttributeProperties const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AttributeProperties& operator=(AttributeProperties&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AttributeProperties(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AttributeProperties_Unwrapped : uint32_t {
__DEFAULT = 0u,
__URI = 1u,
__BOOLEAN = 2u,
__NAME = 4u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AttributeProperties_Unwrapped () const noexcept {
return std::bit_cast<__AttributeProperties_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field DEFAULT offset 0
static ::System::Xml::AttributeProperties const DEFAULT;

/// @brief Field URI offset 0
static ::System::Xml::AttributeProperties const URI;

/// @brief Field BOOLEAN offset 0
static ::System::Xml::AttributeProperties const BOOLEAN;

/// @brief Field NAME offset 0
static ::System::Xml::AttributeProperties const NAME;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::AttributeProperties, "System.Xml", "AttributeProperties");
