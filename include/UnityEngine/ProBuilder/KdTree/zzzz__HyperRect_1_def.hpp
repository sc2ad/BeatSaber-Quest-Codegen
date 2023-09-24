#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::ProBuilder::KdTree {
template<typename T>
class ITypeMath_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename T>
struct HyperRect_1;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::cordl_internals::il2cpp_reference_type T>
struct HyperRect_1<T>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<>
struct HyperRect_1<float_t>;
}
// Type: UnityEngine.ProBuilder.KdTree::HyperRect`1
// Type: UnityEngine.ProBuilder.KdTree::HyperRect`1
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15795)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15795), inst: 374 })
// CS Name: UnityEngine.ProBuilder.KdTree.HyperRect`1
struct CORDL_TYPE HyperRect_1<float_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "minPoint", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "maxPoint", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }]
constexpr HyperRect_1(::ArrayW<float_t> minPoint, ::ArrayW<float_t> maxPoint) noexcept;


                    constexpr HyperRect_1(HyperRect_1 const&) = default;
                    constexpr HyperRect_1(HyperRect_1&&) = default;
                    constexpr HyperRect_1& operator=(HyperRect_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HyperRect_1& operator=(HyperRect_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HyperRect_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get_minPoint, put=__set_minPoint))  minPoint;

constexpr void __set_minPoint(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_minPoint() const;

 ::ArrayW<float_t> __declspec(property(get=__get_maxPoint, put=__set_maxPoint))  maxPoint;

constexpr void __set_maxPoint(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_maxPoint() const;


// Properties

 ::ArrayW<float_t> __declspec(property(get=get_MinPoint, put=set_MinPoint))  MinPoint;

 ::ArrayW<float_t> __declspec(property(get=get_MaxPoint, put=set_MaxPoint))  MaxPoint;


// Methods

/// @brief Method get_MinPoint addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<float_t> get_MinPoint() ;

/// @brief Method set_MinPoint addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_MinPoint(::ArrayW<float_t> value) ;

/// @brief Method get_MaxPoint addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<float_t> get_MaxPoint() ;

/// @brief Method set_MaxPoint addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_MaxPoint(::ArrayW<float_t> value) ;

/// @brief Method Infinite addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::ProBuilder::KdTree::HyperRect_1<float_t> Infinite(int32_t dimensions, UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> math) ;

/// @brief Method GetClosestPoint addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<float_t> GetClosestPoint(::ArrayW<float_t> toPoint, UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> math) ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ProBuilder::KdTree::HyperRect_1<float_t> Clone() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: UnityEngine.ProBuilder.KdTree::HyperRect`1
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15795)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15795), inst: 2 })
// CS Name: UnityEngine.ProBuilder.KdTree.HyperRect`1
struct CORDL_TYPE HyperRect_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "minPoint", ty: "::ArrayW<T>", modifiers: "", def_value: None }, CppParam { name: "maxPoint", ty: "::ArrayW<T>", modifiers: "", def_value: None }]
constexpr HyperRect_1(::ArrayW<T> minPoint, ::ArrayW<T> maxPoint) noexcept;


                    constexpr HyperRect_1(HyperRect_1 const&) = default;
                    constexpr HyperRect_1(HyperRect_1&&) = default;
                    constexpr HyperRect_1& operator=(HyperRect_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HyperRect_1& operator=(HyperRect_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HyperRect_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<T> __declspec(property(get=__get_minPoint, put=__set_minPoint))  minPoint;

constexpr void __set_minPoint(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get_minPoint() const;

 ::ArrayW<T> __declspec(property(get=__get_maxPoint, put=__set_maxPoint))  maxPoint;

constexpr void __set_maxPoint(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get_maxPoint() const;


// Properties

 ::ArrayW<T> __declspec(property(get=get_MinPoint, put=set_MinPoint))  MinPoint;

 ::ArrayW<T> __declspec(property(get=get_MaxPoint, put=set_MaxPoint))  MaxPoint;


// Methods

/// @brief Method get_MinPoint addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<T> get_MinPoint() ;

/// @brief Method set_MinPoint addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_MinPoint(::ArrayW<T> value) ;

/// @brief Method get_MaxPoint addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<T> get_MaxPoint() ;

/// @brief Method set_MaxPoint addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_MaxPoint(::ArrayW<T> value) ;

/// @brief Method Infinite addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::ProBuilder::KdTree::HyperRect_1<T> Infinite(int32_t dimensions, UnityEngine::ProBuilder::KdTree::ITypeMath_1<T> math) ;

/// @brief Method GetClosestPoint addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<T> GetClosestPoint(::ArrayW<T> toPoint, UnityEngine::ProBuilder::KdTree::ITypeMath_1<T> math) ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ProBuilder::KdTree::HyperRect_1<T> Clone() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::ProBuilder::KdTree::HyperRect_1, "UnityEngine.ProBuilder.KdTree", "HyperRect`1");
