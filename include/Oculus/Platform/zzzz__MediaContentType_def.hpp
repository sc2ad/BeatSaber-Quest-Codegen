#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
struct MediaContentType;
}
// Type: Oculus.Platform::MediaContentType
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13201))
// CS Name: Oculus.Platform.MediaContentType
struct CORDL_TYPE MediaContentType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MediaContentType(int32_t value__) noexcept;


                    constexpr MediaContentType(MediaContentType const&) = default;
                    constexpr MediaContentType(MediaContentType&&) = default;
                    constexpr MediaContentType& operator=(MediaContentType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MediaContentType& operator=(MediaContentType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MediaContentType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MediaContentType_Unwrapped : int32_t {
__Unknown = 0,
__Photo = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MediaContentType_Unwrapped () const noexcept {
return std::bit_cast<__MediaContentType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::Oculus::Platform::MediaContentType const Unknown;

/// @brief Field Photo offset 0
static ::Oculus::Platform::MediaContentType const Photo;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MediaContentType, "Oculus.Platform", "MediaContentType");
