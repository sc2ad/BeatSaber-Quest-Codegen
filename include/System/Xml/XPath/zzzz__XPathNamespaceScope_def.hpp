#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml::XPath {
struct XPathNamespaceScope;
}
// Type: System.Xml.XPath::XPathNamespaceScope
namespace System::Xml::XPath {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11523))
// CS Name: System.Xml.XPath.XPathNamespaceScope
struct CORDL_TYPE XPathNamespaceScope : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XPathNamespaceScope(int32_t value__) noexcept;


                    constexpr XPathNamespaceScope(XPathNamespaceScope const&) = default;
                    constexpr XPathNamespaceScope(XPathNamespaceScope&&) = default;
                    constexpr XPathNamespaceScope& operator=(XPathNamespaceScope const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XPathNamespaceScope& operator=(XPathNamespaceScope&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XPathNamespaceScope(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XPathNamespaceScope_Unwrapped : int32_t {
__All = 0,
__ExcludeXml = 1,
__Local = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XPathNamespaceScope_Unwrapped () const noexcept {
return std::bit_cast<__XPathNamespaceScope_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field All offset 0
static ::System::Xml::XPath::XPathNamespaceScope const All;

/// @brief Field ExcludeXml offset 0
static ::System::Xml::XPath::XPathNamespaceScope const ExcludeXml;

/// @brief Field Local offset 0
static ::System::Xml::XPath::XPathNamespaceScope const Local;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::XPath
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathNamespaceScope, "System.Xml.XPath", "XPathNamespaceScope");
