#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
struct XmlNodeType;
}
// Type: System.Xml::XmlNodeType
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11513))
// CS Name: System.Xml.XmlNodeType
struct CORDL_TYPE XmlNodeType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlNodeType(int32_t value__) noexcept;


                    constexpr XmlNodeType(XmlNodeType const&) = default;
                    constexpr XmlNodeType(XmlNodeType&&) = default;
                    constexpr XmlNodeType& operator=(XmlNodeType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XmlNodeType& operator=(XmlNodeType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XmlNodeType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XmlNodeType_Unwrapped : int32_t {
__None = 0,
__Element = 1,
__Attribute = 2,
__Text = 3,
__CDATA = 4,
__EntityReference = 5,
__Entity = 6,
__ProcessingInstruction = 7,
__Comment = 8,
__Document = 9,
__DocumentType = 10,
__DocumentFragment = 11,
__Notation = 12,
__Whitespace = 13,
__SignificantWhitespace = 14,
__EndElement = 15,
__EndEntity = 16,
__XmlDeclaration = 17,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlNodeType_Unwrapped () const noexcept {
return std::bit_cast<__XmlNodeType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Xml::XmlNodeType const None;

/// @brief Field Element offset 0
static ::System::Xml::XmlNodeType const Element;

/// @brief Field Attribute offset 0
static ::System::Xml::XmlNodeType const Attribute;

/// @brief Field Text offset 0
static ::System::Xml::XmlNodeType const Text;

/// @brief Field CDATA offset 0
static ::System::Xml::XmlNodeType const CDATA;

/// @brief Field EntityReference offset 0
static ::System::Xml::XmlNodeType const EntityReference;

/// @brief Field Entity offset 0
static ::System::Xml::XmlNodeType const Entity;

/// @brief Field ProcessingInstruction offset 0
static ::System::Xml::XmlNodeType const ProcessingInstruction;

/// @brief Field Comment offset 0
static ::System::Xml::XmlNodeType const Comment;

/// @brief Field Document offset 0
static ::System::Xml::XmlNodeType const Document;

/// @brief Field DocumentType offset 0
static ::System::Xml::XmlNodeType const DocumentType;

/// @brief Field DocumentFragment offset 0
static ::System::Xml::XmlNodeType const DocumentFragment;

/// @brief Field Notation offset 0
static ::System::Xml::XmlNodeType const Notation;

/// @brief Field Whitespace offset 0
static ::System::Xml::XmlNodeType const Whitespace;

/// @brief Field SignificantWhitespace offset 0
static ::System::Xml::XmlNodeType const SignificantWhitespace;

/// @brief Field EndElement offset 0
static ::System::Xml::XmlNodeType const EndElement;

/// @brief Field EndEntity offset 0
static ::System::Xml::XmlNodeType const EndEntity;

/// @brief Field XmlDeclaration offset 0
static ::System::Xml::XmlNodeType const XmlDeclaration;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNodeType, "System.Xml", "XmlNodeType");
