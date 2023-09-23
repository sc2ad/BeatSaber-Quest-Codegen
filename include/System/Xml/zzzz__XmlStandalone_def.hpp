#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml {
struct XmlStandalone;
}
// Type: System.Xml::XmlStandalone
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11436))
// CS Name: System.Xml.XmlStandalone
struct CORDL_TYPE XmlStandalone : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlStandalone(int32_t value__) noexcept;


                    constexpr XmlStandalone(XmlStandalone const&) = default;
                    constexpr XmlStandalone(XmlStandalone&&) = default;
                    constexpr XmlStandalone& operator=(XmlStandalone const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XmlStandalone& operator=(XmlStandalone&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XmlStandalone(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XmlStandalone_Unwrapped : int32_t {
__Omit = 0,
__Yes = 1,
__No = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlStandalone_Unwrapped () const noexcept {
return std::bit_cast<__XmlStandalone_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Omit offset 0
static System::Xml::XmlStandalone const Omit;

/// @brief Field Yes offset 0
static System::Xml::XmlStandalone const Yes;

/// @brief Field No offset 0
static System::Xml::XmlStandalone const No;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlStandalone, "System.Xml", "XmlStandalone");
