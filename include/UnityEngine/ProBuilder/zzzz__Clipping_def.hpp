#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct UnityEngine__ProBuilder__Clipping__OutCode;
}
namespace UnityEngine::ProBuilder {
class Clipping;
}
// Type: ::OutCode
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12051))
// CS Name: UnityEngine.ProBuilder.Clipping::OutCode
struct CORDL_TYPE UnityEngine__ProBuilder__Clipping__OutCode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__ProBuilder__Clipping__OutCode(int32_t value__) noexcept;


                    constexpr UnityEngine__ProBuilder__Clipping__OutCode(UnityEngine__ProBuilder__Clipping__OutCode const&) = default;
                    constexpr UnityEngine__ProBuilder__Clipping__OutCode(UnityEngine__ProBuilder__Clipping__OutCode&&) = default;
                    constexpr UnityEngine__ProBuilder__Clipping__OutCode& operator=(UnityEngine__ProBuilder__Clipping__OutCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ProBuilder__Clipping__OutCode& operator=(UnityEngine__ProBuilder__Clipping__OutCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__Clipping__OutCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__ProBuilder__Clipping__OutCode_Unwrapped : int32_t {
__Inside = 0,
__Left = 1,
__Right = 2,
__Bottom = 4,
__Top = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__ProBuilder__Clipping__OutCode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__ProBuilder__Clipping__OutCode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Inside offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__Clipping__OutCode const Inside;

/// @brief Field Left offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__Clipping__OutCode const Left;

/// @brief Field Right offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__Clipping__OutCode const Right;

/// @brief Field Bottom offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__Clipping__OutCode const Bottom;

/// @brief Field Top offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__Clipping__OutCode const Top;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::Clipping
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12052))
// CS Name: UnityEngine.ProBuilder.Clipping
class CORDL_TYPE Clipping : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using OutCode = UnityEngine::ProBuilder::UnityEngine__ProBuilder__Clipping__OutCode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Clipping() = default;

// Ctor Parameters [CppParam { name: "", ty: "Clipping", modifiers: " const&", def_value: None }]
constexpr Clipping(Clipping const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Clipping", modifiers: "&&", def_value: None }]
constexpr Clipping(Clipping&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Clipping(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Clipping& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Clipping& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Clipping& operator=(Clipping&& o) noexcept = default;
  constexpr Clipping& operator=(Clipping const& o) noexcept = default;
                


// Methods

/// @brief Method ComputeOutCode addr 0x29a8898 size 0x9c virtual false final false
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__Clipping__OutCode ComputeOutCode(UnityEngine::Rect rect, float_t x, float_t y) ;

/// @brief Method RectContainsLineSegment addr 0x29a8934 size 0x1c0 virtual false final false
static bool RectContainsLineSegment(UnityEngine::Rect rect, float_t x0, float_t y0, float_t x1, float_t y1) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__Clipping__OutCode, "UnityEngine.ProBuilder", "Clipping/OutCode");
NEED_NO_BOX(UnityEngine::ProBuilder::Clipping);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Clipping, "UnityEngine.ProBuilder", "Clipping");
