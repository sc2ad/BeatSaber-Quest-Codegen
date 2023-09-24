#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Vector3Mask;
}
// Type: UnityEngine.ProBuilder::Vector3Mask
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12159))
// CS Name: UnityEngine.ProBuilder.Vector3Mask
struct CORDL_TYPE Vector3Mask : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::ProBuilder::Vector3Mask>
constexpr operator  System::IEquatable_1<UnityEngine::ProBuilder::Vector3Mask>() const;

// Ctor Parameters [CppParam { name: "m_Mask", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Vector3Mask(uint8_t m_Mask) noexcept;


                    constexpr Vector3Mask(Vector3Mask const&) = default;
                    constexpr Vector3Mask(Vector3Mask&&) = default;
                    constexpr Vector3Mask& operator=(Vector3Mask const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Vector3Mask& operator=(Vector3Mask&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Vector3Mask(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field X offset 0
static constexpr uint8_t  X{1u};

/// @brief Field Y offset 0
static constexpr uint8_t  Y{2u};

/// @brief Field Z offset 0
static constexpr uint8_t  Z{4u};

static UnityEngine::ProBuilder::Vector3Mask __declspec(property(get=__get_XYZ, put=__set_XYZ))  XYZ;

static void __set_XYZ(UnityEngine::ProBuilder::Vector3Mask value) ;

static UnityEngine::ProBuilder::Vector3Mask __get_XYZ() ;

 uint8_t __declspec(property(get=__get_m_Mask, put=__set_m_Mask))  m_Mask;

constexpr void __set_m_Mask(uint8_t value) ;

constexpr uint8_t __get_m_Mask() const;


// Properties

 float_t __declspec(property(get=get_x))  x;

 float_t __declspec(property(get=get_y))  y;

 float_t __declspec(property(get=get_z))  z;

 int32_t __declspec(property(get=get_active))  active;

 float_t __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_x addr 0x29eadd4 size 0x18 virtual false final false
 float_t get_x() ;

/// @brief Method get_y addr 0x29eadec size 0x18 virtual false final false
 float_t get_y() ;

/// @brief Method get_z addr 0x29eae04 size 0x18 virtual false final false
 float_t get_z() ;

/// @brief Method .ctor addr 0x29eae1c size 0x34 virtual false final false
 void _ctor(UnityEngine::Vector3 v, float_t epsilon) ;

/// @brief Method .ctor addr 0x29eae50 size 0x8 virtual false final false
 void _ctor(uint8_t mask) ;

/// @brief Method ToString addr 0x29eae58 size 0xec virtual true final false
 ::StringW ToString() ;

/// @brief Method get_active addr 0x29eaf44 size 0x1c virtual false final false
 int32_t get_active() ;

/// @brief Method op_Implicit addr 0x29eaf60 size 0x24 virtual false final false
static UnityEngine::Vector3 op_Implicit_UnityEngine__Vector3(UnityEngine::ProBuilder::Vector3Mask mask) ;

/// @brief Method op_Explicit addr 0x29eaf84 size 0x38 virtual false final false
static UnityEngine::ProBuilder::Vector3Mask op_Explicit_UnityEngine__ProBuilder__Vector3Mask(UnityEngine::Vector3 v) ;

/// @brief Method op_BitwiseOr addr 0x29eafbc size 0xc virtual false final false
static UnityEngine::ProBuilder::Vector3Mask op_BitwiseOr(UnityEngine::ProBuilder::Vector3Mask left, UnityEngine::ProBuilder::Vector3Mask right) ;

/// @brief Method op_BitwiseAnd addr 0x29eafc8 size 0xc virtual false final false
static UnityEngine::ProBuilder::Vector3Mask op_BitwiseAnd(UnityEngine::ProBuilder::Vector3Mask left, UnityEngine::ProBuilder::Vector3Mask right) ;

/// @brief Method op_ExclusiveOr addr 0x29eafd4 size 0xc virtual false final false
static UnityEngine::ProBuilder::Vector3Mask op_ExclusiveOr(UnityEngine::ProBuilder::Vector3Mask left, UnityEngine::ProBuilder::Vector3Mask right) ;

/// @brief Method op_Multiply addr 0x29eafe0 size 0x34 virtual false final false
static UnityEngine::Vector3 op_Multiply(UnityEngine::ProBuilder::Vector3Mask mask, float_t value) ;

/// @brief Method op_Multiply addr 0x29eb014 size 0x30 virtual false final false
static UnityEngine::Vector3 op_Multiply(UnityEngine::ProBuilder::Vector3Mask mask, UnityEngine::Vector3 value) ;

/// @brief Method op_Multiply addr 0x29eb044 size 0x13c virtual false final false
static UnityEngine::Vector3 op_Multiply(UnityEngine::Quaternion rotation, UnityEngine::ProBuilder::Vector3Mask mask) ;

/// @brief Method op_Equality addr 0x29eb180 size 0x10 virtual false final false
static bool op_Equality(UnityEngine::ProBuilder::Vector3Mask left, UnityEngine::ProBuilder::Vector3Mask right) ;

/// @brief Method op_Inequality addr 0x29eb190 size 0x68 virtual false final false
static bool op_Inequality(UnityEngine::ProBuilder::Vector3Mask left, UnityEngine::ProBuilder::Vector3Mask right) ;

/// @brief Method get_Item addr 0x29eb1f8 size 0x60 virtual false final false
 float_t get_Item(int32_t i) ;

/// @brief Method set_Item addr 0x29eb258 size 0x74 virtual false final false
 void set_Item(int32_t i, float_t value) ;

/// @brief Method Equals addr 0x29eb2cc size 0x10 virtual true final true
 bool Equals(UnityEngine::ProBuilder::Vector3Mask other) ;

/// @brief Method Equals addr 0x29eb2dc size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x29eb354 size 0x8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Vector3Mask, "UnityEngine.ProBuilder", "Vector3Mask");
