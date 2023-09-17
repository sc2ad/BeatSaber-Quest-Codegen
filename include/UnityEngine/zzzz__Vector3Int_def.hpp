#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine {
struct Vector3Int;
}
// Type: UnityEngine::Vector3Int
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10188))
// CS Name: UnityEngine.Vector3Int
struct CORDL_TYPE Vector3Int : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::Vector3Int>
constexpr operator  ::System::IEquatable_1<::UnityEngine::Vector3Int>() const;

/// @brief Convert operator to ::System::IFormattable
constexpr operator  ::System::IFormattable() const;

// Ctor Parameters [CppParam { name: "m_X", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Z", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Vector3Int(int32_t m_X, int32_t m_Y, int32_t m_Z) noexcept;


                    constexpr Vector3Int(Vector3Int const&) = default;
                    constexpr Vector3Int(Vector3Int&&) = default;
                    constexpr Vector3Int& operator=(Vector3Int const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Vector3Int& operator=(Vector3Int&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Vector3Int(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 int32_t __declspec(property(get=__get_m_Z, put=__set_m_Z))  m_Z;

constexpr void __set_m_Z(int32_t value) ;

constexpr int32_t __get_m_Z() const;

static ::UnityEngine::Vector3Int __declspec(property(get=__get_s_Zero, put=__set_s_Zero))  s_Zero;

static void __set_s_Zero(::UnityEngine::Vector3Int value) ;

static ::UnityEngine::Vector3Int __get_s_Zero() ;

static ::UnityEngine::Vector3Int __declspec(property(get=__get_s_One, put=__set_s_One))  s_One;

static void __set_s_One(::UnityEngine::Vector3Int value) ;

static ::UnityEngine::Vector3Int __get_s_One() ;

static ::UnityEngine::Vector3Int __declspec(property(get=__get_s_Up, put=__set_s_Up))  s_Up;

static void __set_s_Up(::UnityEngine::Vector3Int value) ;

static ::UnityEngine::Vector3Int __get_s_Up() ;

static ::UnityEngine::Vector3Int __declspec(property(get=__get_s_Down, put=__set_s_Down))  s_Down;

static void __set_s_Down(::UnityEngine::Vector3Int value) ;

static ::UnityEngine::Vector3Int __get_s_Down() ;

static ::UnityEngine::Vector3Int __declspec(property(get=__get_s_Left, put=__set_s_Left))  s_Left;

static void __set_s_Left(::UnityEngine::Vector3Int value) ;

static ::UnityEngine::Vector3Int __get_s_Left() ;

static ::UnityEngine::Vector3Int __declspec(property(get=__get_s_Right, put=__set_s_Right))  s_Right;

static void __set_s_Right(::UnityEngine::Vector3Int value) ;

static ::UnityEngine::Vector3Int __get_s_Right() ;

static ::UnityEngine::Vector3Int __declspec(property(get=__get_s_Forward, put=__set_s_Forward))  s_Forward;

static void __set_s_Forward(::UnityEngine::Vector3Int value) ;

static ::UnityEngine::Vector3Int __get_s_Forward() ;

static ::UnityEngine::Vector3Int __declspec(property(get=__get_s_Back, put=__set_s_Back))  s_Back;

static void __set_s_Back(::UnityEngine::Vector3Int value) ;

static ::UnityEngine::Vector3Int __get_s_Back() ;


// Properties

 int32_t __declspec(property(get=get_x, put=set_x))  x;

 int32_t __declspec(property(get=get_y, put=set_y))  y;

 int32_t __declspec(property(get=get_z, put=set_z))  z;

 int32_t __declspec(property(get=get_Item))  Item;

static ::UnityEngine::Vector3Int __declspec(property(get=get_one))  one;


// Methods

/// @brief Method get_x addr 0x2b60c30 size 0x8 virtual false final false
 int32_t get_x() ;

/// @brief Method set_x addr 0x2b60c38 size 0x8 virtual false final false
 void set_x(int32_t value) ;

/// @brief Method get_y addr 0x2b60c40 size 0x8 virtual false final false
 int32_t get_y() ;

/// @brief Method set_y addr 0x2b60c48 size 0x8 virtual false final false
 void set_y(int32_t value) ;

/// @brief Method get_z addr 0x2b60c50 size 0x8 virtual false final false
 int32_t get_z() ;

/// @brief Method set_z addr 0x2b60c58 size 0x8 virtual false final false
 void set_z(int32_t value) ;

/// @brief Method .ctor addr 0x2b60c60 size 0xc virtual false final false
 void _ctor(int32_t x, int32_t y, int32_t z) ;

/// @brief Method get_Item addr 0x2b60c6c size 0xf0 virtual false final false
 int32_t get_Item(int32_t index) ;

/// @brief Method Min addr 0x2b60d5c size 0x2c virtual false final false
static ::UnityEngine::Vector3Int Min(::UnityEngine::Vector3Int lhs, ::UnityEngine::Vector3Int rhs) ;

/// @brief Method Max addr 0x2b60d88 size 0x2c virtual false final false
static ::UnityEngine::Vector3Int Max(::UnityEngine::Vector3Int lhs, ::UnityEngine::Vector3Int rhs) ;

/// @brief Method op_Implicit addr 0x2b60db4 size 0x14 virtual false final false
static ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::UnityEngine::Vector3Int v) ;

/// @brief Method op_Addition addr 0x2b60dc8 size 0x1c virtual false final false
static ::UnityEngine::Vector3Int op_Addition(::UnityEngine::Vector3Int a, ::UnityEngine::Vector3Int b) ;

/// @brief Method op_Equality addr 0x2b60de4 size 0x30 virtual false final false
static bool op_Equality(::UnityEngine::Vector3Int lhs, ::UnityEngine::Vector3Int rhs) ;

/// @brief Method Equals addr 0x2b60e14 size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b60eb0 size 0x38 virtual true final true
 bool Equals(::UnityEngine::Vector3Int other) ;

/// @brief Method GetHashCode addr 0x2b60ee8 size 0x78 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2b60f60 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b544e0 size 0x1c4 virtual true final true
 ::StringW ToString(::StringW format, ::System::IFormatProvider formatProvider) ;

/// @brief Method get_one addr 0x2b60f6c size 0x4c virtual false final false
static ::UnityEngine::Vector3Int get_one() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector3Int, "UnityEngine", "Vector3Int");
