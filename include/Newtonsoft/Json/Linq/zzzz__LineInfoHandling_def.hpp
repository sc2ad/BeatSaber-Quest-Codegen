#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json::Linq {
struct LineInfoHandling;
}
// Type: Newtonsoft.Json.Linq::LineInfoHandling
namespace Newtonsoft::Json::Linq {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11909))
// CS Name: Newtonsoft.Json.Linq.LineInfoHandling
struct CORDL_TYPE LineInfoHandling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LineInfoHandling(int32_t value__) noexcept;


                    constexpr LineInfoHandling(LineInfoHandling const&) = default;
                    constexpr LineInfoHandling(LineInfoHandling&&) = default;
                    constexpr LineInfoHandling& operator=(LineInfoHandling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LineInfoHandling& operator=(LineInfoHandling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LineInfoHandling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LineInfoHandling_Unwrapped : int32_t {
__Ignore = 0,
__Load = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LineInfoHandling_Unwrapped () const noexcept {
return std::bit_cast<__LineInfoHandling_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Ignore offset 0
static ::Newtonsoft::Json::Linq::LineInfoHandling const Ignore;

/// @brief Field Load offset 0
static ::Newtonsoft::Json::Linq::LineInfoHandling const Load;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::LineInfoHandling, "Newtonsoft.Json.Linq", "LineInfoHandling");
