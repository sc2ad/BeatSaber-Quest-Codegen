#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml::XPath {
struct XPathNodeType;
}
// Type: System.Xml.XPath::XPathNodeType
namespace System::Xml::XPath {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11526))
// CS Name: System.Xml.XPath.XPathNodeType
struct CORDL_TYPE XPathNodeType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XPathNodeType(int32_t value__) noexcept;


                    constexpr XPathNodeType(XPathNodeType const&) = default;
                    constexpr XPathNodeType(XPathNodeType&&) = default;
                    constexpr XPathNodeType& operator=(XPathNodeType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XPathNodeType& operator=(XPathNodeType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XPathNodeType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XPathNodeType_Unwrapped : int32_t {
__Root = 0,
__Element = 1,
__Attribute = 2,
__Namespace = 3,
__Text = 4,
__SignificantWhitespace = 5,
__Whitespace = 6,
__ProcessingInstruction = 7,
__Comment = 8,
__All = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XPathNodeType_Unwrapped () const noexcept {
return std::bit_cast<__XPathNodeType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Root offset 0
static System::Xml::XPath::XPathNodeType const Root;

/// @brief Field Element offset 0
static System::Xml::XPath::XPathNodeType const Element;

/// @brief Field Attribute offset 0
static System::Xml::XPath::XPathNodeType const Attribute;

/// @brief Field Namespace offset 0
static System::Xml::XPath::XPathNodeType const Namespace;

/// @brief Field Text offset 0
static System::Xml::XPath::XPathNodeType const Text;

/// @brief Field SignificantWhitespace offset 0
static System::Xml::XPath::XPathNodeType const SignificantWhitespace;

/// @brief Field Whitespace offset 0
static System::Xml::XPath::XPathNodeType const Whitespace;

/// @brief Field ProcessingInstruction offset 0
static System::Xml::XPath::XPathNodeType const ProcessingInstruction;

/// @brief Field Comment offset 0
static System::Xml::XPath::XPathNodeType const Comment;

/// @brief Field All offset 0
static System::Xml::XPath::XPathNodeType const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::XPath
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XPath::XPathNodeType, "System.Xml.XPath", "XPathNodeType");
