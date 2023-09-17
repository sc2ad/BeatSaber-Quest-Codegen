#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml::Linq {
struct XObjectChange;
}
// Type: System.Xml.Linq::XObjectChange
namespace System::Xml::Linq {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15425))
// CS Name: System.Xml.Linq.XObjectChange
struct CORDL_TYPE XObjectChange : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XObjectChange(int32_t value__) noexcept;


                    constexpr XObjectChange(XObjectChange const&) = default;
                    constexpr XObjectChange(XObjectChange&&) = default;
                    constexpr XObjectChange& operator=(XObjectChange const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XObjectChange& operator=(XObjectChange&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XObjectChange(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XObjectChange_Unwrapped : int32_t {
__Add = 0,
__Remove = 1,
__Name = 2,
__Value = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XObjectChange_Unwrapped () const noexcept {
return std::bit_cast<__XObjectChange_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Add offset 0
static ::System::Xml::Linq::XObjectChange const Add;

/// @brief Field Remove offset 0
static ::System::Xml::Linq::XObjectChange const Remove;

/// @brief Field Name offset 0
static ::System::Xml::Linq::XObjectChange const Name;

/// @brief Field Value offset 0
static ::System::Xml::Linq::XObjectChange const Value;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Linq
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XObjectChange, "System.Xml.Linq", "XObjectChange");
