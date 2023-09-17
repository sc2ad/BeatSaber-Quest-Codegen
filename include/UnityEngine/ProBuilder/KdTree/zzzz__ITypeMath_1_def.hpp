#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename T>
class ITypeMath_1;
}
// Type: UnityEngine.ProBuilder.KdTree::ITypeMath`1
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15804))
// CS Name: UnityEngine.ProBuilder.KdTree.ITypeMath`1
class CORDL_TYPE ITypeMath_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITypeMath_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITypeMath_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 T __declspec(property(get=get_MinValue))  MinValue;

 T __declspec(property(get=get_MaxValue))  MaxValue;

 T __declspec(property(get=get_Zero))  Zero;

 T __declspec(property(get=get_NegativeInfinity))  NegativeInfinity;

 T __declspec(property(get=get_PositiveInfinity))  PositiveInfinity;


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(T a, T b) ;

/// @brief Method get_MinValue addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_MinValue() ;

/// @brief Method get_MaxValue addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_MaxValue() ;

/// @brief Method Min addr 0x0 size 0xffffffffffffffff virtual true final false
 T Min(T a, T b) ;

/// @brief Method Max addr 0x0 size 0xffffffffffffffff virtual true final false
 T Max(T a, T b) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AreEqual(T a, T b) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AreEqual(::ArrayW<T> a, ::ArrayW<T> b) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 T Add(T a, T b) ;

/// @brief Method Subtract addr 0x0 size 0xffffffffffffffff virtual true final false
 T Subtract(T a, T b) ;

/// @brief Method Multiply addr 0x0 size 0xffffffffffffffff virtual true final false
 T Multiply(T a, T b) ;

/// @brief Method get_Zero addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_Zero() ;

/// @brief Method get_NegativeInfinity addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_NegativeInfinity() ;

/// @brief Method get_PositiveInfinity addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_PositiveInfinity() ;

/// @brief Method DistanceSquaredBetweenPoints addr 0x0 size 0xffffffffffffffff virtual true final false
 T DistanceSquaredBetweenPoints(::ArrayW<T> a, ::ArrayW<T> b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::ITypeMath_1, "UnityEngine.ProBuilder.KdTree", "ITypeMath`1");
