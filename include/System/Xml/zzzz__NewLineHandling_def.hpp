#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
struct NewLineHandling;
}
// Type: System.Xml::NewLineHandling
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11377))
// CS Name: System.Xml.NewLineHandling
struct CORDL_TYPE NewLineHandling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NewLineHandling(int32_t value__) noexcept;


                    constexpr NewLineHandling(NewLineHandling const&) = default;
                    constexpr NewLineHandling(NewLineHandling&&) = default;
                    constexpr NewLineHandling& operator=(NewLineHandling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NewLineHandling& operator=(NewLineHandling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NewLineHandling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NewLineHandling_Unwrapped : int32_t {
__Replace = 0,
__Entitize = 1,
__None = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NewLineHandling_Unwrapped () const noexcept {
return std::bit_cast<__NewLineHandling_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Replace offset 0
static ::System::Xml::NewLineHandling const Replace;

/// @brief Field Entitize offset 0
static ::System::Xml::NewLineHandling const Entitize;

/// @brief Field None offset 0
static ::System::Xml::NewLineHandling const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::NewLineHandling, "System.Xml", "NewLineHandling");
