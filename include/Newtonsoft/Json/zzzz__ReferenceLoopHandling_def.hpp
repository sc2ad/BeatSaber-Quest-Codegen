#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
// Type: Newtonsoft.Json::ReferenceLoopHandling
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11781))
// CS Name: Newtonsoft.Json.ReferenceLoopHandling
struct CORDL_TYPE ReferenceLoopHandling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReferenceLoopHandling(int32_t value__) noexcept;


                    constexpr ReferenceLoopHandling(ReferenceLoopHandling const&) = default;
                    constexpr ReferenceLoopHandling(ReferenceLoopHandling&&) = default;
                    constexpr ReferenceLoopHandling& operator=(ReferenceLoopHandling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReferenceLoopHandling& operator=(ReferenceLoopHandling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReferenceLoopHandling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ReferenceLoopHandling_Unwrapped : int32_t {
__Error = 0,
__Ignore = 1,
__Serialize = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReferenceLoopHandling_Unwrapped () const noexcept {
return std::bit_cast<__ReferenceLoopHandling_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Error offset 0
static ::Newtonsoft::Json::ReferenceLoopHandling const Error;

/// @brief Field Ignore offset 0
static ::Newtonsoft::Json::ReferenceLoopHandling const Ignore;

/// @brief Field Serialize offset 0
static ::Newtonsoft::Json::ReferenceLoopHandling const Serialize;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::ReferenceLoopHandling, "Newtonsoft.Json", "ReferenceLoopHandling");
