#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml {
struct ElementProperties;
}
// Type: System.Xml::ElementProperties
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11379))
// CS Name: System.Xml.ElementProperties
struct CORDL_TYPE ElementProperties : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ElementProperties(uint32_t value__) noexcept;


                    constexpr ElementProperties(ElementProperties const&) = default;
                    constexpr ElementProperties(ElementProperties&&) = default;
                    constexpr ElementProperties& operator=(ElementProperties const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ElementProperties& operator=(ElementProperties&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ElementProperties(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ElementProperties_Unwrapped : uint32_t {
__DEFAULT = 0u,
__URI_PARENT = 1u,
__BOOL_PARENT = 2u,
__NAME_PARENT = 4u,
__EMPTY = 8u,
__NO_ENTITIES = 16u,
__HEAD = 32u,
__BLOCK_WS = 64u,
__HAS_NS = 128u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ElementProperties_Unwrapped () const noexcept {
return std::bit_cast<__ElementProperties_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field DEFAULT offset 0
static System::Xml::ElementProperties const DEFAULT;

/// @brief Field URI_PARENT offset 0
static System::Xml::ElementProperties const URI_PARENT;

/// @brief Field BOOL_PARENT offset 0
static System::Xml::ElementProperties const BOOL_PARENT;

/// @brief Field NAME_PARENT offset 0
static System::Xml::ElementProperties const NAME_PARENT;

/// @brief Field EMPTY offset 0
static System::Xml::ElementProperties const EMPTY;

/// @brief Field NO_ENTITIES offset 0
static System::Xml::ElementProperties const NO_ENTITIES;

/// @brief Field HEAD offset 0
static System::Xml::ElementProperties const HEAD;

/// @brief Field BLOCK_WS offset 0
static System::Xml::ElementProperties const BLOCK_WS;

/// @brief Field HAS_NS offset 0
static System::Xml::ElementProperties const HAS_NS;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(System::Xml::ElementProperties, "System.Xml", "ElementProperties");
