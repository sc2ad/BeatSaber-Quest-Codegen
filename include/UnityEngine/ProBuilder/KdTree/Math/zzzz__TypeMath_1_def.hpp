#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::ProBuilder::KdTree {
template<typename T>
class ITypeMath_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree::Math {
template<typename T>
class TypeMath_1;
}
namespace UnityEngine::ProBuilder::KdTree::Math {
template<::cordl_internals::il2cpp_reference_type T>
class TypeMath_1<T>;
}
namespace UnityEngine::ProBuilder::KdTree::Math {
template<>
class TypeMath_1<double_t>;
}
namespace UnityEngine::ProBuilder::KdTree::Math {
template<>
class TypeMath_1<float_t>;
}
// Type: UnityEngine.ProBuilder.KdTree.Math::TypeMath`1
// Type: UnityEngine.ProBuilder.KdTree.Math::TypeMath`1
namespace UnityEngine::ProBuilder::KdTree::Math {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15811))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15811), inst: 2598 })
// CS Name: UnityEngine.ProBuilder.KdTree.Math.TypeMath`1
class CORDL_TYPE TypeMath_1<double_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ProBuilder::KdTree::ITypeMath_1<double_t>
constexpr operator  UnityEngine::ProBuilder::KdTree::ITypeMath_1<double_t>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TypeMath_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeMath_1", modifiers: " const&", def_value: None }]
constexpr TypeMath_1(TypeMath_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeMath_1", modifiers: "&&", def_value: None }]
constexpr TypeMath_1(TypeMath_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeMath_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeMath_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeMath_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeMath_1& operator=(TypeMath_1&& o) noexcept = default;
  constexpr TypeMath_1& operator=(TypeMath_1 const& o) noexcept = default;
                


// Properties

 double_t __declspec(property(get=get_MinValue))  MinValue;

 double_t __declspec(property(get=get_MaxValue))  MaxValue;

 double_t __declspec(property(get=get_Zero))  Zero;

 double_t __declspec(property(get=get_NegativeInfinity))  NegativeInfinity;

 double_t __declspec(property(get=get_PositiveInfinity))  PositiveInfinity;


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(double_t a, double_t b) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AreEqual(double_t a, double_t b) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AreEqual(::ArrayW<double_t> a, ::ArrayW<double_t> b) ;

/// @brief Method get_MinValue addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t get_MinValue() ;

/// @brief Method get_MaxValue addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t get_MaxValue() ;

/// @brief Method Min addr 0x0 size 0xffffffffffffffff virtual true final true
 double_t Min(double_t a, double_t b) ;

/// @brief Method Max addr 0x0 size 0xffffffffffffffff virtual true final true
 double_t Max(double_t a, double_t b) ;

/// @brief Method get_Zero addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t get_Zero() ;

/// @brief Method get_NegativeInfinity addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t get_NegativeInfinity() ;

/// @brief Method get_PositiveInfinity addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t get_PositiveInfinity() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t Add(double_t a, double_t b) ;

/// @brief Method Subtract addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t Subtract(double_t a, double_t b) ;

/// @brief Method Multiply addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t Multiply(double_t a, double_t b) ;

/// @brief Method DistanceSquaredBetweenPoints addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t DistanceSquaredBetweenPoints(::ArrayW<double_t> a, ::ArrayW<double_t> b) ;

static UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<double_t> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree::Math
// Type: UnityEngine.ProBuilder.KdTree.Math::TypeMath`1
namespace UnityEngine::ProBuilder::KdTree::Math {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15811))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15811), inst: 374 })
// CS Name: UnityEngine.ProBuilder.KdTree.Math.TypeMath`1
class CORDL_TYPE TypeMath_1<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>
constexpr operator  UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TypeMath_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeMath_1", modifiers: " const&", def_value: None }]
constexpr TypeMath_1(TypeMath_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeMath_1", modifiers: "&&", def_value: None }]
constexpr TypeMath_1(TypeMath_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeMath_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeMath_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeMath_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeMath_1& operator=(TypeMath_1&& o) noexcept = default;
  constexpr TypeMath_1& operator=(TypeMath_1 const& o) noexcept = default;
                


// Properties

 float_t __declspec(property(get=get_MinValue))  MinValue;

 float_t __declspec(property(get=get_MaxValue))  MaxValue;

 float_t __declspec(property(get=get_Zero))  Zero;

 float_t __declspec(property(get=get_NegativeInfinity))  NegativeInfinity;

 float_t __declspec(property(get=get_PositiveInfinity))  PositiveInfinity;


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(float_t a, float_t b) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AreEqual(float_t a, float_t b) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AreEqual(::ArrayW<float_t> a, ::ArrayW<float_t> b) ;

/// @brief Method get_MinValue addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_MinValue() ;

/// @brief Method get_MaxValue addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_MaxValue() ;

/// @brief Method Min addr 0x0 size 0xffffffffffffffff virtual true final true
 float_t Min(float_t a, float_t b) ;

/// @brief Method Max addr 0x0 size 0xffffffffffffffff virtual true final true
 float_t Max(float_t a, float_t b) ;

/// @brief Method get_Zero addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_Zero() ;

/// @brief Method get_NegativeInfinity addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_NegativeInfinity() ;

/// @brief Method get_PositiveInfinity addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_PositiveInfinity() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t Add(float_t a, float_t b) ;

/// @brief Method Subtract addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t Subtract(float_t a, float_t b) ;

/// @brief Method Multiply addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t Multiply(float_t a, float_t b) ;

/// @brief Method DistanceSquaredBetweenPoints addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t DistanceSquaredBetweenPoints(::ArrayW<float_t> a, ::ArrayW<float_t> b) ;

static UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<float_t> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree::Math
// Type: UnityEngine.ProBuilder.KdTree.Math::TypeMath`1
namespace UnityEngine::ProBuilder::KdTree::Math {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15811))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15811), inst: 2 })
// CS Name: UnityEngine.ProBuilder.KdTree.Math.TypeMath`1
class CORDL_TYPE TypeMath_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>
constexpr operator  UnityEngine::ProBuilder::KdTree::ITypeMath_1<T>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TypeMath_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeMath_1", modifiers: " const&", def_value: None }]
constexpr TypeMath_1(TypeMath_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeMath_1", modifiers: "&&", def_value: None }]
constexpr TypeMath_1(TypeMath_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeMath_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeMath_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeMath_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeMath_1& operator=(TypeMath_1&& o) noexcept = default;
  constexpr TypeMath_1& operator=(TypeMath_1 const& o) noexcept = default;
                


// Properties

 T __declspec(property(get=get_MinValue))  MinValue;

 T __declspec(property(get=get_MaxValue))  MaxValue;

 T __declspec(property(get=get_Zero))  Zero;

 T __declspec(property(get=get_NegativeInfinity))  NegativeInfinity;

 T __declspec(property(get=get_PositiveInfinity))  PositiveInfinity;


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(T a, T b) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AreEqual(T a, T b) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AreEqual(::ArrayW<T> a, ::ArrayW<T> b) ;

/// @brief Method get_MinValue addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_MinValue() ;

/// @brief Method get_MaxValue addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_MaxValue() ;

/// @brief Method Min addr 0x0 size 0xffffffffffffffff virtual true final true
 T Min(T a, T b) ;

/// @brief Method Max addr 0x0 size 0xffffffffffffffff virtual true final true
 T Max(T a, T b) ;

/// @brief Method get_Zero addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_Zero() ;

/// @brief Method get_NegativeInfinity addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_NegativeInfinity() ;

/// @brief Method get_PositiveInfinity addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_PositiveInfinity() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 T Add(T a, T b) ;

/// @brief Method Subtract addr 0x0 size 0xffffffffffffffff virtual true final false
 T Subtract(T a, T b) ;

/// @brief Method Multiply addr 0x0 size 0xffffffffffffffff virtual true final false
 T Multiply(T a, T b) ;

/// @brief Method DistanceSquaredBetweenPoints addr 0x0 size 0xffffffffffffffff virtual true final false
 T DistanceSquaredBetweenPoints(::ArrayW<T> a, ::ArrayW<T> b) ;

static UnityEngine::ProBuilder::KdTree::Math::TypeMath_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree::Math
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ProBuilder::KdTree::Math::TypeMath_1, "UnityEngine.ProBuilder.KdTree.Math", "TypeMath`1");
