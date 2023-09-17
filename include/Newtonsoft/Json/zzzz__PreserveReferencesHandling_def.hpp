#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json {
struct PreserveReferencesHandling;
}
// Type: Newtonsoft.Json::PreserveReferencesHandling
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11754))
// CS Name: Newtonsoft.Json.PreserveReferencesHandling
struct CORDL_TYPE PreserveReferencesHandling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PreserveReferencesHandling(int32_t value__) noexcept;


                    constexpr PreserveReferencesHandling(PreserveReferencesHandling const&) = default;
                    constexpr PreserveReferencesHandling(PreserveReferencesHandling&&) = default;
                    constexpr PreserveReferencesHandling& operator=(PreserveReferencesHandling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PreserveReferencesHandling& operator=(PreserveReferencesHandling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PreserveReferencesHandling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PreserveReferencesHandling_Unwrapped : int32_t {
__None = 0,
__Objects = 1,
__Arrays = 2,
__All = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PreserveReferencesHandling_Unwrapped () const noexcept {
return std::bit_cast<__PreserveReferencesHandling_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::Newtonsoft::Json::PreserveReferencesHandling const None;

/// @brief Field Objects offset 0
static ::Newtonsoft::Json::PreserveReferencesHandling const Objects;

/// @brief Field Arrays offset 0
static ::Newtonsoft::Json::PreserveReferencesHandling const Arrays;

/// @brief Field All offset 0
static ::Newtonsoft::Json::PreserveReferencesHandling const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::PreserveReferencesHandling, "Newtonsoft.Json", "PreserveReferencesHandling");
