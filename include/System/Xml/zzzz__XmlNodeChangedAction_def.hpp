#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Xml {
struct XmlNodeChangedAction;
}
// Type: System.Xml::XmlNodeChangedAction
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11453))
// CS Name: System.Xml.XmlNodeChangedAction
struct CORDL_TYPE XmlNodeChangedAction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlNodeChangedAction(int32_t value__) noexcept;


                    constexpr XmlNodeChangedAction(XmlNodeChangedAction const&) = default;
                    constexpr XmlNodeChangedAction(XmlNodeChangedAction&&) = default;
                    constexpr XmlNodeChangedAction& operator=(XmlNodeChangedAction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XmlNodeChangedAction& operator=(XmlNodeChangedAction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XmlNodeChangedAction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XmlNodeChangedAction_Unwrapped : int32_t {
__Insert = 0,
__Remove = 1,
__Change = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlNodeChangedAction_Unwrapped () const noexcept {
return std::bit_cast<__XmlNodeChangedAction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Insert offset 0
static System::Xml::XmlNodeChangedAction const Insert;

/// @brief Field Remove offset 0
static System::Xml::XmlNodeChangedAction const Remove;

/// @brief Field Change offset 0
static System::Xml::XmlNodeChangedAction const Change;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlNodeChangedAction, "System.Xml", "XmlNodeChangedAction");
