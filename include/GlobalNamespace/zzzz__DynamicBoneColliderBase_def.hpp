#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__DynamicBoneColliderBase__Bound;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__DynamicBoneColliderBase__Direction;
}
namespace GlobalNamespace {
class DynamicBoneColliderBase;
}
// Type: ::Direction
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15903))
// CS Name: DynamicBoneColliderBase::Direction
struct CORDL_TYPE ____GlobalNamespace__DynamicBoneColliderBase__Direction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__DynamicBoneColliderBase__Direction(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__DynamicBoneColliderBase__Direction(____GlobalNamespace__DynamicBoneColliderBase__Direction const&) = default;
                    constexpr ____GlobalNamespace__DynamicBoneColliderBase__Direction(____GlobalNamespace__DynamicBoneColliderBase__Direction&&) = default;
                    constexpr ____GlobalNamespace__DynamicBoneColliderBase__Direction& operator=(____GlobalNamespace__DynamicBoneColliderBase__Direction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__DynamicBoneColliderBase__Direction& operator=(____GlobalNamespace__DynamicBoneColliderBase__Direction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__DynamicBoneColliderBase__Direction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__DynamicBoneColliderBase__Direction_Unwrapped : int32_t {
__X = 0,
__Y = 1,
__Z = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__DynamicBoneColliderBase__Direction_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__DynamicBoneColliderBase__Direction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field X offset 0
static ::GlobalNamespace::____GlobalNamespace__DynamicBoneColliderBase__Direction const X;

/// @brief Field Y offset 0
static ::GlobalNamespace::____GlobalNamespace__DynamicBoneColliderBase__Direction const Y;

/// @brief Field Z offset 0
static ::GlobalNamespace::____GlobalNamespace__DynamicBoneColliderBase__Direction const Z;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Bound
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15904))
// CS Name: DynamicBoneColliderBase::Bound
struct CORDL_TYPE ____GlobalNamespace__DynamicBoneColliderBase__Bound : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__DynamicBoneColliderBase__Bound(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__DynamicBoneColliderBase__Bound(____GlobalNamespace__DynamicBoneColliderBase__Bound const&) = default;
                    constexpr ____GlobalNamespace__DynamicBoneColliderBase__Bound(____GlobalNamespace__DynamicBoneColliderBase__Bound&&) = default;
                    constexpr ____GlobalNamespace__DynamicBoneColliderBase__Bound& operator=(____GlobalNamespace__DynamicBoneColliderBase__Bound const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__DynamicBoneColliderBase__Bound& operator=(____GlobalNamespace__DynamicBoneColliderBase__Bound&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__DynamicBoneColliderBase__Bound(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__DynamicBoneColliderBase__Bound_Unwrapped : int32_t {
__Outside = 0,
__Inside = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__DynamicBoneColliderBase__Bound_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__DynamicBoneColliderBase__Bound_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Outside offset 0
static ::GlobalNamespace::____GlobalNamespace__DynamicBoneColliderBase__Bound const Outside;

/// @brief Field Inside offset 0
static ::GlobalNamespace::____GlobalNamespace__DynamicBoneColliderBase__Bound const Inside;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DynamicBoneColliderBase
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15905))
// CS Name: DynamicBoneColliderBase
class CORDL_TYPE DynamicBoneColliderBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Bound = ::GlobalNamespace::____GlobalNamespace__DynamicBoneColliderBase__Bound;

using Direction = ::GlobalNamespace::____GlobalNamespace__DynamicBoneColliderBase__Direction;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DynamicBoneColliderBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicBoneColliderBase", modifiers: " const&", def_value: None }]
constexpr DynamicBoneColliderBase(DynamicBoneColliderBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicBoneColliderBase", modifiers: "&&", def_value: None }]
constexpr DynamicBoneColliderBase(DynamicBoneColliderBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DynamicBoneColliderBase(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DynamicBoneColliderBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DynamicBoneColliderBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DynamicBoneColliderBase& operator=(DynamicBoneColliderBase&& o) noexcept = default;
  constexpr DynamicBoneColliderBase& operator=(DynamicBoneColliderBase const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__DynamicBoneColliderBase__Direction __declspec(property(get=__get_m_Direction, put=__set_m_Direction))  m_Direction;

constexpr void __set_m_Direction(::GlobalNamespace::____GlobalNamespace__DynamicBoneColliderBase__Direction value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__DynamicBoneColliderBase__Direction __get_m_Direction() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_Center, put=__set_m_Center))  m_Center;

constexpr void __set_m_Center(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_Center() const;

 ::GlobalNamespace::____GlobalNamespace__DynamicBoneColliderBase__Bound __declspec(property(get=__get_m_Bound, put=__set_m_Bound))  m_Bound;

constexpr void __set_m_Bound(::GlobalNamespace::____GlobalNamespace__DynamicBoneColliderBase__Bound value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__DynamicBoneColliderBase__Bound __get_m_Bound() const;


// Methods

/// @brief Method Collide addr 0x11a6654 size 0x4 virtual true final false
 void Collide(ByRef<::UnityEngine::Vector3> particlePosition, float_t particleRadius) ;

// Ctor Parameters []
explicit DynamicBoneColliderBase() ;

/// @brief Method .ctor addr 0x11a65f0 size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__DynamicBoneColliderBase__Bound, "", "DynamicBoneColliderBase/Bound");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__DynamicBoneColliderBase__Direction, "", "DynamicBoneColliderBase/Direction");
NEED_NO_BOX(::GlobalNamespace::DynamicBoneColliderBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DynamicBoneColliderBase, "", "DynamicBoneColliderBase");
