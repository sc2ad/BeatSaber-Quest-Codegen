#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json {
struct MetadataPropertyHandling;
}
// Type: Newtonsoft.Json::MetadataPropertyHandling
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11751))
// CS Name: Newtonsoft.Json.MetadataPropertyHandling
struct CORDL_TYPE MetadataPropertyHandling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MetadataPropertyHandling(int32_t value__) noexcept;


                    constexpr MetadataPropertyHandling(MetadataPropertyHandling const&) = default;
                    constexpr MetadataPropertyHandling(MetadataPropertyHandling&&) = default;
                    constexpr MetadataPropertyHandling& operator=(MetadataPropertyHandling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MetadataPropertyHandling& operator=(MetadataPropertyHandling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MetadataPropertyHandling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MetadataPropertyHandling_Unwrapped : int32_t {
__Default = 0,
__ReadAhead = 1,
__Ignore = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MetadataPropertyHandling_Unwrapped () const noexcept {
return std::bit_cast<__MetadataPropertyHandling_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static Newtonsoft::Json::MetadataPropertyHandling const Default;

/// @brief Field ReadAhead offset 0
static Newtonsoft::Json::MetadataPropertyHandling const ReadAhead;

/// @brief Field Ignore offset 0
static Newtonsoft::Json::MetadataPropertyHandling const Ignore;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::MetadataPropertyHandling, "Newtonsoft.Json", "MetadataPropertyHandling");
