#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__LightConstants__BakeId;
}
namespace GlobalNamespace {
class LightConstants;
}
// Type: ::BakeId
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14691))
// CS Name: LightConstants::BakeId
struct CORDL_TYPE ____GlobalNamespace__LightConstants__BakeId : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__LightConstants__BakeId(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__LightConstants__BakeId(____GlobalNamespace__LightConstants__BakeId const&) = default;
                    constexpr ____GlobalNamespace__LightConstants__BakeId(____GlobalNamespace__LightConstants__BakeId&&) = default;
                    constexpr ____GlobalNamespace__LightConstants__BakeId& operator=(____GlobalNamespace__LightConstants__BakeId const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__LightConstants__BakeId& operator=(____GlobalNamespace__LightConstants__BakeId&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LightConstants__BakeId(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__LightConstants__BakeId_Unwrapped : int32_t {
__A = 1,
__B = 2,
__C = 3,
__D = 4,
__E = 5,
__F = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__LightConstants__BakeId_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__LightConstants__BakeId_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field A offset 0
static ::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId const A;

/// @brief Field B offset 0
static ::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId const B;

/// @brief Field C offset 0
static ::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId const C;

/// @brief Field D offset 0
static ::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId const D;

/// @brief Field E offset 0
static ::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId const E;

/// @brief Field F offset 0
static ::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId const F;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightConstants
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14692))
// CS Name: LightConstants
class CORDL_TYPE LightConstants : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BakeId = ::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LightConstants() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightConstants", modifiers: " const&", def_value: None }]
constexpr LightConstants(LightConstants const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightConstants", modifiers: "&&", def_value: None }]
constexpr LightConstants(LightConstants&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightConstants(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LightConstants& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightConstants& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightConstants& operator=(LightConstants&& o) noexcept = default;
  constexpr LightConstants& operator=(LightConstants const& o) noexcept = default;
                


// Fields

/// @brief Field kBaseLightId offset 0
static constexpr int32_t  kBaseLightId{25};

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId, "", "LightConstants/BakeId");
NEED_NO_BOX(::GlobalNamespace::LightConstants);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightConstants, "", "LightConstants");
