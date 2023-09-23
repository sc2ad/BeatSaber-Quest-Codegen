#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSeverityType;
}
// Type: System.Xml.Schema::XmlSeverityType
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11687))
// CS Name: System.Xml.Schema.XmlSeverityType
struct CORDL_TYPE XmlSeverityType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlSeverityType(int32_t value__) noexcept;


                    constexpr XmlSeverityType(XmlSeverityType const&) = default;
                    constexpr XmlSeverityType(XmlSeverityType&&) = default;
                    constexpr XmlSeverityType& operator=(XmlSeverityType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XmlSeverityType& operator=(XmlSeverityType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XmlSeverityType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XmlSeverityType_Unwrapped : int32_t {
__Error = 0,
__Warning = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlSeverityType_Unwrapped () const noexcept {
return std::bit_cast<__XmlSeverityType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Error offset 0
static System::Xml::Schema::XmlSeverityType const Error;

/// @brief Field Warning offset 0
static System::Xml::Schema::XmlSeverityType const Warning;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSeverityType, "System.Xml.Schema", "XmlSeverityType");
