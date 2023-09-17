#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json {
struct ObjectCreationHandling;
}
// Type: Newtonsoft.Json::ObjectCreationHandling
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11764))
// CS Name: Newtonsoft.Json.ObjectCreationHandling
struct CORDL_TYPE ObjectCreationHandling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ObjectCreationHandling(int32_t value__) noexcept;


                    constexpr ObjectCreationHandling(ObjectCreationHandling const&) = default;
                    constexpr ObjectCreationHandling(ObjectCreationHandling&&) = default;
                    constexpr ObjectCreationHandling& operator=(ObjectCreationHandling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ObjectCreationHandling& operator=(ObjectCreationHandling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ObjectCreationHandling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ObjectCreationHandling_Unwrapped : int32_t {
__Auto = 0,
__Reuse = 1,
__Replace = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ObjectCreationHandling_Unwrapped () const noexcept {
return std::bit_cast<__ObjectCreationHandling_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Auto offset 0
static ::Newtonsoft::Json::ObjectCreationHandling const Auto;

/// @brief Field Reuse offset 0
static ::Newtonsoft::Json::ObjectCreationHandling const Reuse;

/// @brief Field Replace offset 0
static ::Newtonsoft::Json::ObjectCreationHandling const Replace;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::ObjectCreationHandling, "Newtonsoft.Json", "ObjectCreationHandling");
