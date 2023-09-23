#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Newtonsoft::Json::Linq {
struct CommentHandling;
}
// Type: Newtonsoft.Json.Linq::CommentHandling
namespace Newtonsoft::Json::Linq {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11908))
// CS Name: Newtonsoft.Json.Linq.CommentHandling
struct CORDL_TYPE CommentHandling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CommentHandling(int32_t value__) noexcept;


                    constexpr CommentHandling(CommentHandling const&) = default;
                    constexpr CommentHandling(CommentHandling&&) = default;
                    constexpr CommentHandling& operator=(CommentHandling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CommentHandling& operator=(CommentHandling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CommentHandling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CommentHandling_Unwrapped : int32_t {
__Ignore = 0,
__Load = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CommentHandling_Unwrapped () const noexcept {
return std::bit_cast<__CommentHandling_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Ignore offset 0
static Newtonsoft::Json::Linq::CommentHandling const Ignore;

/// @brief Field Load offset 0
static Newtonsoft::Json::Linq::CommentHandling const Load;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::CommentHandling, "Newtonsoft.Json.Linq", "CommentHandling");
