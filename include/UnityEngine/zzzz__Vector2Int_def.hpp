#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class IFormattable;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace UnityEngine {
struct Vector2Int;
}
// Type: UnityEngine::Vector2Int
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10185))
// CS Name: UnityEngine.Vector2Int
struct CORDL_TYPE Vector2Int : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::Vector2Int>
constexpr operator  ::System::IEquatable_1<::UnityEngine::Vector2Int>() const;

/// @brief Convert operator to ::System::IFormattable
constexpr operator  ::System::IFormattable() const;

// Ctor Parameters [CppParam { name: "m_X", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Vector2Int(int32_t m_X, int32_t m_Y) noexcept;


                    constexpr Vector2Int(Vector2Int const&) = default;
                    constexpr Vector2Int(Vector2Int&&) = default;
                    constexpr Vector2Int& operator=(Vector2Int const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Vector2Int& operator=(Vector2Int&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Vector2Int(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_X, put=__set_m_X))  m_X;

constexpr void __set_m_X(int32_t value) ;

constexpr int32_t __get_m_X() const;

 int32_t __declspec(property(get=__get_m_Y, put=__set_m_Y))  m_Y;

constexpr void __set_m_Y(int32_t value) ;

constexpr int32_t __get_m_Y() const;

static ::UnityEngine::Vector2Int __declspec(property(get=__get_s_Zero, put=__set_s_Zero))  s_Zero;

static void __set_s_Zero(::UnityEngine::Vector2Int value) ;

static ::UnityEngine::Vector2Int __get_s_Zero() ;

static ::UnityEngine::Vector2Int __declspec(property(get=__get_s_One, put=__set_s_One))  s_One;

static void __set_s_One(::UnityEngine::Vector2Int value) ;

static ::UnityEngine::Vector2Int __get_s_One() ;

static ::UnityEngine::Vector2Int __declspec(property(get=__get_s_Up, put=__set_s_Up))  s_Up;

static void __set_s_Up(::UnityEngine::Vector2Int value) ;

static ::UnityEngine::Vector2Int __get_s_Up() ;

static ::UnityEngine::Vector2Int __declspec(property(get=__get_s_Down, put=__set_s_Down))  s_Down;

static void __set_s_Down(::UnityEngine::Vector2Int value) ;

static ::UnityEngine::Vector2Int __get_s_Down() ;

static ::UnityEngine::Vector2Int __declspec(property(get=__get_s_Left, put=__set_s_Left))  s_Left;

static void __set_s_Left(::UnityEngine::Vector2Int value) ;

static ::UnityEngine::Vector2Int __get_s_Left() ;

static ::UnityEngine::Vector2Int __declspec(property(get=__get_s_Right, put=__set_s_Right))  s_Right;

static void __set_s_Right(::UnityEngine::Vector2Int value) ;

static ::UnityEngine::Vector2Int __get_s_Right() ;


// Properties

 int32_t __declspec(property(get=get_x, put=set_x))  x;

 int32_t __declspec(property(get=get_y, put=set_y))  y;


// Methods

/// @brief Method get_x addr 0x2b5e3e4 size 0x8 virtual false final false
 int32_t get_x() ;

/// @brief Method set_x addr 0x2b5e3ec size 0x8 virtual false final false
 void set_x(int32_t value) ;

/// @brief Method get_y addr 0x2b5e3f4 size 0x8 virtual false final false
 int32_t get_y() ;

/// @brief Method set_y addr 0x2b5e3fc size 0x8 virtual false final false
 void set_y(int32_t value) ;

/// @brief Method .ctor addr 0x2b5e404 size 0x8 virtual false final false
 void _ctor(int32_t x, int32_t y) ;

/// @brief Method op_Implicit addr 0x2b5e40c size 0x10 virtual false final false
static ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::UnityEngine::Vector2Int v) ;

/// @brief Method FloorToInt addr 0x2b5e41c size 0xf8 virtual false final false
static ::UnityEngine::Vector2Int FloorToInt(::UnityEngine::Vector2 v) ;

/// @brief Method op_Equality addr 0x2b5e514 size 0x20 virtual false final false
static bool op_Equality(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs) ;

/// @brief Method Equals addr 0x2b5e534 size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b5e5bc size 0x28 virtual true final true
 bool Equals(::UnityEngine::Vector2Int other) ;

/// @brief Method GetHashCode addr 0x2b5e5e4 size 0x48 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2b5e62c size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b5e638 size 0x17c virtual true final true
 ::StringW ToString(::StringW format, ::System::IFormatProvider formatProvider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector2Int, "UnityEngine", "Vector2Int");
