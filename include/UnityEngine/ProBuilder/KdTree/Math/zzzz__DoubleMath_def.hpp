#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/KdTree/Math/zzzz__TypeMath_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree::Math {
class DoubleMath;
}
// Type: UnityEngine.ProBuilder.KdTree.Math::DoubleMath
namespace UnityEngine::ProBuilder::KdTree::Math {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15811)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15811), inst: 2598 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15809))
// CS Name: UnityEngine.ProBuilder.KdTree.Math.DoubleMath
class CORDL_TYPE DoubleMath : public UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<double_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DoubleMath() = default;

// Ctor Parameters [CppParam { name: "", ty: "DoubleMath", modifiers: " const&", def_value: None }]
constexpr DoubleMath(DoubleMath const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DoubleMath", modifiers: "&&", def_value: None }]
constexpr DoubleMath(DoubleMath&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DoubleMath(void* ptr) noexcept : UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<double_t>(ptr) {
}


  constexpr DoubleMath& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DoubleMath& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DoubleMath& operator=(DoubleMath&& o) noexcept = default;
  constexpr DoubleMath& operator=(DoubleMath const& o) noexcept = default;
                


// Properties

 double_t __declspec(property(get=get_MinValue))  MinValue;

 double_t __declspec(property(get=get_MaxValue))  MaxValue;

 double_t __declspec(property(get=get_Zero))  Zero;

 double_t __declspec(property(get=get_NegativeInfinity))  NegativeInfinity;

 double_t __declspec(property(get=get_PositiveInfinity))  PositiveInfinity;


// Methods

/// @brief Method Compare addr 0x2999b28 size 0x20 virtual true final false
 int32_t Compare(double_t a, double_t b) ;

/// @brief Method AreEqual addr 0x2999b48 size 0xc virtual true final false
 bool AreEqual(double_t a, double_t b) ;

/// @brief Method get_MinValue addr 0x2999b54 size 0xc virtual true final false
 double_t get_MinValue() ;

/// @brief Method get_MaxValue addr 0x2999b60 size 0xc virtual true final false
 double_t get_MaxValue() ;

/// @brief Method get_Zero addr 0x2999b6c size 0x8 virtual true final false
 double_t get_Zero() ;

/// @brief Method get_NegativeInfinity addr 0x2999b74 size 0xc virtual true final false
 double_t get_NegativeInfinity() ;

/// @brief Method get_PositiveInfinity addr 0x2999b80 size 0xc virtual true final false
 double_t get_PositiveInfinity() ;

/// @brief Method Add addr 0x2999b8c size 0x8 virtual true final false
 double_t Add(double_t a, double_t b) ;

/// @brief Method Subtract addr 0x2999b94 size 0x8 virtual true final false
 double_t Subtract(double_t a, double_t b) ;

/// @brief Method Multiply addr 0x2999b9c size 0x8 virtual true final false
 double_t Multiply(double_t a, double_t b) ;

/// @brief Method DistanceSquaredBetweenPoints addr 0x2999ba4 size 0x100 virtual true final false
 double_t DistanceSquaredBetweenPoints(::ArrayW<double_t> a, ::ArrayW<double_t> b) ;

// Ctor Parameters []
explicit DoubleMath() ;

/// @brief Method .ctor addr 0x2999ca4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree::Math
NEED_NO_BOX(UnityEngine::ProBuilder::KdTree::Math::DoubleMath);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::KdTree::Math::DoubleMath, "UnityEngine.ProBuilder.KdTree.Math", "DoubleMath");
