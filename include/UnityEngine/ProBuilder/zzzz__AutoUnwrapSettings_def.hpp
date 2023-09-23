#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor;
}
namespace UnityEngine::ProBuilder {
struct UnityEngine__ProBuilder__AutoUnwrapSettings__Fill;
}
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings;
}
// Type: ::Anchor
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12040))
// CS Name: UnityEngine.ProBuilder.AutoUnwrapSettings::Anchor
struct CORDL_TYPE UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor(int32_t value__) noexcept;


                    constexpr UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor(UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor const&) = default;
                    constexpr UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor(UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor&&) = default;
                    constexpr UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor& operator=(UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor& operator=(UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor_Unwrapped : int32_t {
__UpperLeft = 0,
__UpperCenter = 1,
__UpperRight = 2,
__MiddleLeft = 3,
__MiddleCenter = 4,
__MiddleRight = 5,
__LowerLeft = 6,
__LowerCenter = 7,
__LowerRight = 8,
__None = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UpperLeft offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor const UpperLeft;

/// @brief Field UpperCenter offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor const UpperCenter;

/// @brief Field UpperRight offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor const UpperRight;

/// @brief Field MiddleLeft offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor const MiddleLeft;

/// @brief Field MiddleCenter offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor const MiddleCenter;

/// @brief Field MiddleRight offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor const MiddleRight;

/// @brief Field LowerLeft offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor const LowerLeft;

/// @brief Field LowerCenter offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor const LowerCenter;

/// @brief Field LowerRight offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor const LowerRight;

/// @brief Field None offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::Fill
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12041))
// CS Name: UnityEngine.ProBuilder.AutoUnwrapSettings::Fill
struct CORDL_TYPE UnityEngine__ProBuilder__AutoUnwrapSettings__Fill : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__ProBuilder__AutoUnwrapSettings__Fill(int32_t value__) noexcept;


                    constexpr UnityEngine__ProBuilder__AutoUnwrapSettings__Fill(UnityEngine__ProBuilder__AutoUnwrapSettings__Fill const&) = default;
                    constexpr UnityEngine__ProBuilder__AutoUnwrapSettings__Fill(UnityEngine__ProBuilder__AutoUnwrapSettings__Fill&&) = default;
                    constexpr UnityEngine__ProBuilder__AutoUnwrapSettings__Fill& operator=(UnityEngine__ProBuilder__AutoUnwrapSettings__Fill const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ProBuilder__AutoUnwrapSettings__Fill& operator=(UnityEngine__ProBuilder__AutoUnwrapSettings__Fill&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__AutoUnwrapSettings__Fill(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__ProBuilder__AutoUnwrapSettings__Fill_Unwrapped : int32_t {
__Fit = 0,
__Tile = 1,
__Stretch = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__ProBuilder__AutoUnwrapSettings__Fill_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__ProBuilder__AutoUnwrapSettings__Fill_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Fit offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill const Fit;

/// @brief Field Tile offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill const Tile;

/// @brief Field Stretch offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill const Stretch;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::AutoUnwrapSettings
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12042))
// CS Name: UnityEngine.ProBuilder.AutoUnwrapSettings
struct CORDL_TYPE AutoUnwrapSettings : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Fill = UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill;

using Anchor = UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor;

// Ctor Parameters [CppParam { name: "m_UseWorldSpace", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_FlipU", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_FlipV", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_SwapUV", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Fill", ty: "UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill", modifiers: "", def_value: None }, CppParam { name: "m_Scale", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Offset", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Anchor", ty: "UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor", modifiers: "", def_value: None }]
constexpr AutoUnwrapSettings(bool m_UseWorldSpace, bool m_FlipU, bool m_FlipV, bool m_SwapUV, UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill m_Fill, UnityEngine::Vector2 m_Scale, UnityEngine::Vector2 m_Offset, float_t m_Rotation, UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor m_Anchor) noexcept;


                    constexpr AutoUnwrapSettings(AutoUnwrapSettings const&) = default;
                    constexpr AutoUnwrapSettings(AutoUnwrapSettings&&) = default;
                    constexpr AutoUnwrapSettings& operator=(AutoUnwrapSettings const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AutoUnwrapSettings& operator=(AutoUnwrapSettings&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AutoUnwrapSettings(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_m_UseWorldSpace, put=__set_m_UseWorldSpace))  m_UseWorldSpace;

constexpr void __set_m_UseWorldSpace(bool value) ;

constexpr bool __get_m_UseWorldSpace() const;

 bool __declspec(property(get=__get_m_FlipU, put=__set_m_FlipU))  m_FlipU;

constexpr void __set_m_FlipU(bool value) ;

constexpr bool __get_m_FlipU() const;

 bool __declspec(property(get=__get_m_FlipV, put=__set_m_FlipV))  m_FlipV;

constexpr void __set_m_FlipV(bool value) ;

constexpr bool __get_m_FlipV() const;

 bool __declspec(property(get=__get_m_SwapUV, put=__set_m_SwapUV))  m_SwapUV;

constexpr void __set_m_SwapUV(bool value) ;

constexpr bool __get_m_SwapUV() const;

 UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill __declspec(property(get=__get_m_Fill, put=__set_m_Fill))  m_Fill;

constexpr void __set_m_Fill(UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill value) ;

constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill __get_m_Fill() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_Scale, put=__set_m_Scale))  m_Scale;

constexpr void __set_m_Scale(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_Scale() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_Offset, put=__set_m_Offset))  m_Offset;

constexpr void __set_m_Offset(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_Offset() const;

 float_t __declspec(property(get=__get_m_Rotation, put=__set_m_Rotation))  m_Rotation;

constexpr void __set_m_Rotation(float_t value) ;

constexpr float_t __get_m_Rotation() const;

 UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor __declspec(property(get=__get_m_Anchor, put=__set_m_Anchor))  m_Anchor;

constexpr void __set_m_Anchor(UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor value) ;

constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor __get_m_Anchor() const;


// Properties

static UnityEngine::ProBuilder::AutoUnwrapSettings __declspec(property(get=get_defaultAutoUnwrapSettings))  defaultAutoUnwrapSettings;

 bool __declspec(property(get=get_useWorldSpace, put=set_useWorldSpace))  useWorldSpace;

 bool __declspec(property(get=get_flipU, put=set_flipU))  flipU;

 bool __declspec(property(get=get_flipV, put=set_flipV))  flipV;

 bool __declspec(property(get=get_swapUV, put=set_swapUV))  swapUV;

 UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill __declspec(property(get=get_fill, put=set_fill))  fill;

 UnityEngine::Vector2 __declspec(property(get=get_scale, put=set_scale))  scale;

 UnityEngine::Vector2 __declspec(property(get=get_offset, put=set_offset))  offset;

 float_t __declspec(property(get=get_rotation, put=set_rotation))  rotation;

 UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor __declspec(property(get=get_anchor, put=set_anchor))  anchor;

static UnityEngine::ProBuilder::AutoUnwrapSettings __declspec(property(get=get_tile))  tile;

static UnityEngine::ProBuilder::AutoUnwrapSettings __declspec(property(get=get_fit))  fit;

static UnityEngine::ProBuilder::AutoUnwrapSettings __declspec(property(get=get_stretch))  stretch;


// Methods

/// @brief Method get_defaultAutoUnwrapSettings addr 0x29a3240 size 0x18 virtual false final false
static UnityEngine::ProBuilder::AutoUnwrapSettings get_defaultAutoUnwrapSettings() ;

/// @brief Method get_useWorldSpace addr 0x29a3270 size 0x8 virtual false final false
 bool get_useWorldSpace() ;

/// @brief Method set_useWorldSpace addr 0x29a3278 size 0xc virtual false final false
 void set_useWorldSpace(bool value) ;

/// @brief Method get_flipU addr 0x29a3284 size 0x8 virtual false final false
 bool get_flipU() ;

/// @brief Method set_flipU addr 0x29a328c size 0xc virtual false final false
 void set_flipU(bool value) ;

/// @brief Method get_flipV addr 0x29a3298 size 0x8 virtual false final false
 bool get_flipV() ;

/// @brief Method set_flipV addr 0x29a32a0 size 0xc virtual false final false
 void set_flipV(bool value) ;

/// @brief Method get_swapUV addr 0x29a32ac size 0x8 virtual false final false
 bool get_swapUV() ;

/// @brief Method set_swapUV addr 0x29a32b4 size 0xc virtual false final false
 void set_swapUV(bool value) ;

/// @brief Method get_fill addr 0x29a32c0 size 0x8 virtual false final false
 UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill get_fill() ;

/// @brief Method set_fill addr 0x29a32c8 size 0x8 virtual false final false
 void set_fill(UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill value) ;

/// @brief Method get_scale addr 0x29a32d0 size 0x8 virtual false final false
 UnityEngine::Vector2 get_scale() ;

/// @brief Method set_scale addr 0x29a32d8 size 0x8 virtual false final false
 void set_scale(UnityEngine::Vector2 value) ;

/// @brief Method get_offset addr 0x29a32e0 size 0x8 virtual false final false
 UnityEngine::Vector2 get_offset() ;

/// @brief Method set_offset addr 0x29a32e8 size 0x8 virtual false final false
 void set_offset(UnityEngine::Vector2 value) ;

/// @brief Method get_rotation addr 0x29a32f0 size 0x8 virtual false final false
 float_t get_rotation() ;

/// @brief Method set_rotation addr 0x29a32f8 size 0x8 virtual false final false
 void set_rotation(float_t value) ;

/// @brief Method get_anchor addr 0x29a3300 size 0x8 virtual false final false
 UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor get_anchor() ;

/// @brief Method set_anchor addr 0x29a3308 size 0x8 virtual false final false
 void set_anchor(UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor value) ;

/// @brief Method .ctor addr 0x29a3310 size 0x5c virtual false final false
 void _ctor(UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings) ;

/// @brief Method get_tile addr 0x29a336c size 0x18 virtual false final false
static UnityEngine::ProBuilder::AutoUnwrapSettings get_tile() ;

/// @brief Method get_fit addr 0x29a3384 size 0x18 virtual false final false
static UnityEngine::ProBuilder::AutoUnwrapSettings get_fit() ;

/// @brief Method get_stretch addr 0x29a339c size 0x18 virtual false final false
static UnityEngine::ProBuilder::AutoUnwrapSettings get_stretch() ;

/// @brief Method Reset addr 0x29a3258 size 0x18 virtual false final false
 void Reset() ;

/// @brief Method ToString addr 0x29a33b4 size 0x54c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor, "UnityEngine.ProBuilder", "AutoUnwrapSettings/Anchor");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__AutoUnwrapSettings__Fill, "UnityEngine.ProBuilder", "AutoUnwrapSettings/Fill");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::AutoUnwrapSettings, "UnityEngine.ProBuilder", "AutoUnwrapSettings");
