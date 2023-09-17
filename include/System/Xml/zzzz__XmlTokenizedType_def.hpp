#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
struct XmlTokenizedType;
}
// Type: System.Xml::XmlTokenizedType
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11484))
// CS Name: System.Xml.XmlTokenizedType
struct CORDL_TYPE XmlTokenizedType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlTokenizedType(int32_t value__) noexcept;


                    constexpr XmlTokenizedType(XmlTokenizedType const&) = default;
                    constexpr XmlTokenizedType(XmlTokenizedType&&) = default;
                    constexpr XmlTokenizedType& operator=(XmlTokenizedType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XmlTokenizedType& operator=(XmlTokenizedType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XmlTokenizedType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XmlTokenizedType_Unwrapped : int32_t {
__CDATA = 0,
__ID = 1,
__IDREF = 2,
__IDREFS = 3,
__ENTITY = 4,
__ENTITIES = 5,
__NMTOKEN = 6,
__NMTOKENS = 7,
__NOTATION = 8,
__ENUMERATION = 9,
__QName = 10,
__NCName = 11,
__None = 12,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlTokenizedType_Unwrapped () const noexcept {
return std::bit_cast<__XmlTokenizedType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CDATA offset 0
static ::System::Xml::XmlTokenizedType const CDATA;

/// @brief Field ID offset 0
static ::System::Xml::XmlTokenizedType const ID;

/// @brief Field IDREF offset 0
static ::System::Xml::XmlTokenizedType const IDREF;

/// @brief Field IDREFS offset 0
static ::System::Xml::XmlTokenizedType const IDREFS;

/// @brief Field ENTITY offset 0
static ::System::Xml::XmlTokenizedType const ENTITY;

/// @brief Field ENTITIES offset 0
static ::System::Xml::XmlTokenizedType const ENTITIES;

/// @brief Field NMTOKEN offset 0
static ::System::Xml::XmlTokenizedType const NMTOKEN;

/// @brief Field NMTOKENS offset 0
static ::System::Xml::XmlTokenizedType const NMTOKENS;

/// @brief Field NOTATION offset 0
static ::System::Xml::XmlTokenizedType const NOTATION;

/// @brief Field ENUMERATION offset 0
static ::System::Xml::XmlTokenizedType const ENUMERATION;

/// @brief Field QName offset 0
static ::System::Xml::XmlTokenizedType const QName;

/// @brief Field NCName offset 0
static ::System::Xml::XmlTokenizedType const NCName;

/// @brief Field None offset 0
static ::System::Xml::XmlTokenizedType const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTokenizedType, "System.Xml", "XmlTokenizedType");
