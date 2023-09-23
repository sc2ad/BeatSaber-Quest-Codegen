#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace TMPro {
struct TMP_Offset;
}
// Type: TMPro::TMP_Offset
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12272))
// CS Name: TMPro.TMP_Offset
struct CORDL_TYPE TMP_Offset : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Left", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Right", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Top", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Bottom", ty: "float_t", modifiers: "", def_value: None }]
constexpr TMP_Offset(float_t m_Left, float_t m_Right, float_t m_Top, float_t m_Bottom) noexcept;


                    constexpr TMP_Offset(TMP_Offset const&) = default;
                    constexpr TMP_Offset(TMP_Offset&&) = default;
                    constexpr TMP_Offset& operator=(TMP_Offset const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_Offset& operator=(TMP_Offset&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_Offset(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m_Left, put=__set_m_Left))  m_Left;

constexpr void __set_m_Left(float_t value) ;

constexpr float_t __get_m_Left() const;

 float_t __declspec(property(get=__get_m_Right, put=__set_m_Right))  m_Right;

constexpr void __set_m_Right(float_t value) ;

constexpr float_t __get_m_Right() const;

 float_t __declspec(property(get=__get_m_Top, put=__set_m_Top))  m_Top;

constexpr void __set_m_Top(float_t value) ;

constexpr float_t __get_m_Top() const;

 float_t __declspec(property(get=__get_m_Bottom, put=__set_m_Bottom))  m_Bottom;

constexpr void __set_m_Bottom(float_t value) ;

constexpr float_t __get_m_Bottom() const;

static TMPro::TMP_Offset __declspec(property(get=__get_k_ZeroOffset, put=__set_k_ZeroOffset))  k_ZeroOffset;

static void __set_k_ZeroOffset(TMPro::TMP_Offset value) ;

static TMPro::TMP_Offset __get_k_ZeroOffset() ;


// Properties

 float_t __declspec(property(get=get_left, put=set_left))  left;

 float_t __declspec(property(get=get_right, put=set_right))  right;

 float_t __declspec(property(get=get_top, put=set_top))  top;

 float_t __declspec(property(get=get_bottom, put=set_bottom))  bottom;

 float_t __declspec(property(get=get_horizontal, put=set_horizontal))  horizontal;

 float_t __declspec(property(get=get_vertical, put=set_vertical))  vertical;

static TMPro::TMP_Offset __declspec(property(get=get_zero))  zero;


// Methods

/// @brief Method get_left addr 0x2a69ef0 size 0x8 virtual false final false
 float_t get_left() ;

/// @brief Method set_left addr 0x2a69ef8 size 0x8 virtual false final false
 void set_left(float_t value) ;

/// @brief Method get_right addr 0x2a69f00 size 0x8 virtual false final false
 float_t get_right() ;

/// @brief Method set_right addr 0x2a69f08 size 0x8 virtual false final false
 void set_right(float_t value) ;

/// @brief Method get_top addr 0x2a69f10 size 0x8 virtual false final false
 float_t get_top() ;

/// @brief Method set_top addr 0x2a69f18 size 0x8 virtual false final false
 void set_top(float_t value) ;

/// @brief Method get_bottom addr 0x2a69f20 size 0x8 virtual false final false
 float_t get_bottom() ;

/// @brief Method set_bottom addr 0x2a69f28 size 0x8 virtual false final false
 void set_bottom(float_t value) ;

/// @brief Method get_horizontal addr 0x2a69f30 size 0x8 virtual false final false
 float_t get_horizontal() ;

/// @brief Method set_horizontal addr 0x2a69f38 size 0x8 virtual false final false
 void set_horizontal(float_t value) ;

/// @brief Method get_vertical addr 0x2a69f40 size 0x8 virtual false final false
 float_t get_vertical() ;

/// @brief Method set_vertical addr 0x2a69f48 size 0x8 virtual false final false
 void set_vertical(float_t value) ;

/// @brief Method get_zero addr 0x2a69f50 size 0x5c virtual false final false
static TMPro::TMP_Offset get_zero() ;

/// @brief Method .ctor addr 0x2a69fac size 0xc virtual false final false
 void _ctor(float_t left, float_t right, float_t top, float_t bottom) ;

/// @brief Method .ctor addr 0x2a69fb8 size 0xc virtual false final false
 void _ctor(float_t horizontal, float_t vertical) ;

/// @brief Method op_Equality addr 0x2a69fc4 size 0x30 virtual false final false
static bool op_Equality(TMPro::TMP_Offset lhs, TMPro::TMP_Offset rhs) ;

/// @brief Method op_Inequality addr 0x2a69ff4 size 0xb8 virtual false final false
static bool op_Inequality(TMPro::TMP_Offset lhs, TMPro::TMP_Offset rhs) ;

/// @brief Method op_Multiply addr 0x2a6a0ac size 0x14 virtual false final false
static TMPro::TMP_Offset op_Multiply(TMPro::TMP_Offset a, float_t b) ;

/// @brief Method GetHashCode addr 0x2a6a0c0 size 0x64 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2a6a124 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2a6a19c size 0xa8 virtual false final false
 bool Equals(TMPro::TMP_Offset other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Offset, "TMPro", "TMP_Offset");
