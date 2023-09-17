#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Newtonsoft::Json::Linq {
struct MergeArrayHandling;
}
// Type: Newtonsoft.Json.Linq::MergeArrayHandling
namespace Newtonsoft::Json::Linq {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11914))
// CS Name: Newtonsoft.Json.Linq.MergeArrayHandling
struct CORDL_TYPE MergeArrayHandling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MergeArrayHandling(int32_t value__) noexcept;


                    constexpr MergeArrayHandling(MergeArrayHandling const&) = default;
                    constexpr MergeArrayHandling(MergeArrayHandling&&) = default;
                    constexpr MergeArrayHandling& operator=(MergeArrayHandling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MergeArrayHandling& operator=(MergeArrayHandling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MergeArrayHandling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MergeArrayHandling_Unwrapped : int32_t {
__Concat = 0,
__Union = 1,
__Replace = 2,
__Merge = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MergeArrayHandling_Unwrapped () const noexcept {
return std::bit_cast<__MergeArrayHandling_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Concat offset 0
static ::Newtonsoft::Json::Linq::MergeArrayHandling const Concat;

/// @brief Field Union offset 0
static ::Newtonsoft::Json::Linq::MergeArrayHandling const Union;

/// @brief Field Replace offset 0
static ::Newtonsoft::Json::Linq::MergeArrayHandling const Replace;

/// @brief Field Merge offset 0
static ::Newtonsoft::Json::Linq::MergeArrayHandling const Merge;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::MergeArrayHandling, "Newtonsoft.Json.Linq", "MergeArrayHandling");
