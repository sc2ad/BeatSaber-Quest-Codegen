#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct IntVec3;
}
// Type: UnityEngine.ProBuilder::IntVec3
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12075))
// CS Name: UnityEngine.ProBuilder.IntVec3
struct CORDL_TYPE IntVec3 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::ProBuilder::IntVec3>
constexpr operator  System::IEquatable_1<UnityEngine::ProBuilder::IntVec3>() const;

// Ctor Parameters [CppParam { name: "value", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr IntVec3(UnityEngine::Vector3 value) noexcept;


                    constexpr IntVec3(IntVec3 const&) = default;
                    constexpr IntVec3(IntVec3&&) = default;
                    constexpr IntVec3& operator=(IntVec3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IntVec3& operator=(IntVec3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IntVec3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_value() const;


// Properties

 float_t __declspec(property(get=get_x))  x;

 float_t __declspec(property(get=get_y))  y;

 float_t __declspec(property(get=get_z))  z;


// Methods

/// @brief Method get_x addr 0x29b30e4 size 0x8 virtual false final false
 float_t get_x() ;

/// @brief Method get_y addr 0x29b30ec size 0x8 virtual false final false
 float_t get_y() ;

/// @brief Method get_z addr 0x29b30f4 size 0x8 virtual false final false
 float_t get_z() ;

/// @brief Method .ctor addr 0x29b30fc size 0xc virtual false final false
 void _ctor(UnityEngine::Vector3 vector) ;

/// @brief Method ToString addr 0x29b3108 size 0xc4 virtual true final false
 ::StringW ToString() ;

/// @brief Method op_Equality addr 0x29b31cc size 0x34 virtual false final false
static bool op_Equality(UnityEngine::ProBuilder::IntVec3 a, UnityEngine::ProBuilder::IntVec3 b) ;

/// @brief Method op_Inequality addr 0x29b3294 size 0x38 virtual false final false
static bool op_Inequality(UnityEngine::ProBuilder::IntVec3 a, UnityEngine::ProBuilder::IntVec3 b) ;

/// @brief Method Equals addr 0x29b3200 size 0x94 virtual true final true
 bool Equals(UnityEngine::ProBuilder::IntVec3 p) ;

/// @brief Method Equals addr 0x29b3334 size 0x94 virtual false final false
 bool Equals(UnityEngine::Vector3 p) ;

/// @brief Method Equals addr 0x29b33c8 size 0xc4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType b) ;

/// @brief Method GetHashCode addr 0x29b348c size 0x10 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method round addr 0x29b32cc size 0x68 virtual false final false
static int32_t round(float_t v) ;

/// @brief Method op_Implicit addr 0x29b349c size 0x4 virtual false final false
static UnityEngine::Vector3 op_Implicit_UnityEngine__Vector3(UnityEngine::ProBuilder::IntVec3 p) ;

/// @brief Method op_Implicit addr 0x29b34a0 size 0x4 virtual false final false
static UnityEngine::ProBuilder::IntVec3 op_Implicit_UnityEngine__ProBuilder__IntVec3(UnityEngine::Vector3 p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::IntVec3, "UnityEngine.ProBuilder", "IntVec3");
