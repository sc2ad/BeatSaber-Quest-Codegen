#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct IntVec2;
}
// Type: UnityEngine.ProBuilder::IntVec2
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12074))
// CS Name: UnityEngine.ProBuilder.IntVec2
struct CORDL_TYPE IntVec2 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::ProBuilder::IntVec2>
constexpr operator  System::IEquatable_1<UnityEngine::ProBuilder::IntVec2>() const;

// Ctor Parameters [CppParam { name: "value", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr IntVec2(UnityEngine::Vector2 value) noexcept;


                    constexpr IntVec2(IntVec2 const&) = default;
                    constexpr IntVec2(IntVec2&&) = default;
                    constexpr IntVec2& operator=(IntVec2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IntVec2& operator=(IntVec2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IntVec2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector2 __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_value() const;


// Properties

 float_t __declspec(property(get=get_x))  x;

 float_t __declspec(property(get=get_y))  y;


// Methods

/// @brief Method get_x addr 0x29b2dd0 size 0x8 virtual false final false
 float_t get_x() ;

/// @brief Method get_y addr 0x29b2dd8 size 0x8 virtual false final false
 float_t get_y() ;

/// @brief Method .ctor addr 0x29b2de0 size 0x8 virtual false final false
 void _ctor(UnityEngine::Vector2 vector) ;

/// @brief Method ToString addr 0x29b2de8 size 0xa0 virtual true final false
 ::StringW ToString() ;

/// @brief Method op_Equality addr 0x29b2e88 size 0x24 virtual false final false
static bool op_Equality(UnityEngine::ProBuilder::IntVec2 a, UnityEngine::ProBuilder::IntVec2 b) ;

/// @brief Method op_Inequality addr 0x29b2f18 size 0x28 virtual false final false
static bool op_Inequality(UnityEngine::ProBuilder::IntVec2 a, UnityEngine::ProBuilder::IntVec2 b) ;

/// @brief Method Equals addr 0x29b2eac size 0x6c virtual true final true
 bool Equals(UnityEngine::ProBuilder::IntVec2 p) ;

/// @brief Method Equals addr 0x29b2fa8 size 0x6c virtual false final false
 bool Equals(UnityEngine::Vector2 p) ;

/// @brief Method Equals addr 0x29b3014 size 0xbc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType b) ;

/// @brief Method GetHashCode addr 0x29b30d0 size 0xc virtual true final false
 int32_t GetHashCode() ;

/// @brief Method round addr 0x29b2f40 size 0x68 virtual false final false
static int32_t round(float_t v) ;

/// @brief Method op_Implicit addr 0x29b30dc size 0x4 virtual false final false
static UnityEngine::Vector2 op_Implicit_UnityEngine__Vector2(UnityEngine::ProBuilder::IntVec2 p) ;

/// @brief Method op_Implicit addr 0x29b30e0 size 0x4 virtual false final false
static UnityEngine::ProBuilder::IntVec2 op_Implicit_UnityEngine__ProBuilder__IntVec2(UnityEngine::Vector2 p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::IntVec2, "UnityEngine.ProBuilder", "IntVec2");
