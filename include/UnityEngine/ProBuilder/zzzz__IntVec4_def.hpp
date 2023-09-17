#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct IntVec4;
}
// Type: UnityEngine.ProBuilder::IntVec4
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12076))
// CS Name: UnityEngine.ProBuilder.IntVec4
struct CORDL_TYPE IntVec4 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec4>
constexpr operator  ::System::IEquatable_1<::UnityEngine::ProBuilder::IntVec4>() const;

// Ctor Parameters [CppParam { name: "value", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
constexpr IntVec4(::UnityEngine::Vector4 value) noexcept;


                    constexpr IntVec4(IntVec4 const&) = default;
                    constexpr IntVec4(IntVec4&&) = default;
                    constexpr IntVec4& operator=(IntVec4 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IntVec4& operator=(IntVec4&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IntVec4(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector4 __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::Vector4 value) ;

constexpr ::UnityEngine::Vector4 __get_value() const;


// Properties

 float_t __declspec(property(get=get_x))  x;

 float_t __declspec(property(get=get_y))  y;

 float_t __declspec(property(get=get_z))  z;

 float_t __declspec(property(get=get_w))  w;


// Methods

/// @brief Method get_x addr 0x29b34a4 size 0x8 virtual false final false
 float_t get_x() ;

/// @brief Method get_y addr 0x29b34ac size 0x8 virtual false final false
 float_t get_y() ;

/// @brief Method get_z addr 0x29b34b4 size 0x8 virtual false final false
 float_t get_z() ;

/// @brief Method get_w addr 0x29b34bc size 0x8 virtual false final false
 float_t get_w() ;

/// @brief Method .ctor addr 0x29b34c4 size 0xc virtual false final false
 void _ctor(::UnityEngine::Vector4 vector) ;

/// @brief Method ToString addr 0x29b34d0 size 0x1ac virtual true final false
 ::StringW ToString() ;

/// @brief Method op_Equality addr 0x29b367c size 0x38 virtual false final false
static bool op_Equality(::UnityEngine::ProBuilder::IntVec4 a, ::UnityEngine::ProBuilder::IntVec4 b) ;

/// @brief Method op_Inequality addr 0x29b3768 size 0x3c virtual false final false
static bool op_Inequality(::UnityEngine::ProBuilder::IntVec4 a, ::UnityEngine::ProBuilder::IntVec4 b) ;

/// @brief Method Equals addr 0x29b36b4 size 0xb4 virtual true final true
 bool Equals(::UnityEngine::ProBuilder::IntVec4 p) ;

/// @brief Method Equals addr 0x29b380c size 0xb4 virtual false final false
 bool Equals(::UnityEngine::Vector4 p) ;

/// @brief Method Equals addr 0x29b38c0 size 0xc4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType b) ;

/// @brief Method GetHashCode addr 0x29b3984 size 0x10 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method round addr 0x29b37a4 size 0x68 virtual false final false
static int32_t round(float_t v) ;

/// @brief Method op_Implicit addr 0x29b3994 size 0x4 virtual false final false
static ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::UnityEngine::ProBuilder::IntVec4 p) ;

/// @brief Method op_Implicit addr 0x29b3998 size 0x4 virtual false final false
static ::UnityEngine::ProBuilder::IntVec4 op_Implicit___UnityEngine__ProBuilder__IntVec4(::UnityEngine::Vector4 p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::IntVec4, "UnityEngine.ProBuilder", "IntVec4");
