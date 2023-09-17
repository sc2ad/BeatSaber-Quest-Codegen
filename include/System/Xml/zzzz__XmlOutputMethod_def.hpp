#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
struct XmlOutputMethod;
}
// Type: System.Xml::XmlOutputMethod
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11434))
// CS Name: System.Xml.XmlOutputMethod
struct CORDL_TYPE XmlOutputMethod : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlOutputMethod(int32_t value__) noexcept;


                    constexpr XmlOutputMethod(XmlOutputMethod const&) = default;
                    constexpr XmlOutputMethod(XmlOutputMethod&&) = default;
                    constexpr XmlOutputMethod& operator=(XmlOutputMethod const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XmlOutputMethod& operator=(XmlOutputMethod&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XmlOutputMethod(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XmlOutputMethod_Unwrapped : int32_t {
__Xml = 0,
__Html = 1,
__Text = 2,
__AutoDetect = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlOutputMethod_Unwrapped () const noexcept {
return std::bit_cast<__XmlOutputMethod_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Xml offset 0
static ::System::Xml::XmlOutputMethod const Xml;

/// @brief Field Html offset 0
static ::System::Xml::XmlOutputMethod const Html;

/// @brief Field Text offset 0
static ::System::Xml::XmlOutputMethod const Text;

/// @brief Field AutoDetect offset 0
static ::System::Xml::XmlOutputMethod const AutoDetect;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlOutputMethod, "System.Xml", "XmlOutputMethod");
