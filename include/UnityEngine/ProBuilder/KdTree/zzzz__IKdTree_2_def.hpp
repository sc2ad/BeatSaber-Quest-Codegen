#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine::ProBuilder::KdTree {
template<typename TKey,typename TValue>
class KdTreeNode_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename TKey,typename TValue>
class IKdTree_2;
}
// Type: UnityEngine.ProBuilder.KdTree::IKdTree`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15796))
// CS Name: UnityEngine.ProBuilder.KdTree.IKdTree`2
class CORDL_TYPE IKdTree_2 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

~IKdTree_2() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKdTree_2(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Add(::ArrayW<TKey> point, TValue value) ;

/// @brief Method TryFindValueAt addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryFindValueAt(::ArrayW<TKey> point, ByRef<TValue> value) ;

/// @brief Method FindValueAt addr 0x0 size 0xffffffffffffffff virtual true final false
 TValue FindValueAt(::ArrayW<TKey> point) ;

/// @brief Method TryFindValue addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryFindValue(TValue value, ByRef<::ArrayW<TKey>> point) ;

/// @brief Method FindValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<TKey> FindValue(TValue value) ;

/// @brief Method RadialSearch addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> RadialSearch(::ArrayW<TKey> center, TKey radius, int32_t count) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final false
 void RemoveAt(::ArrayW<TKey> point) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

/// @brief Method GetNearestNeighbours addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> GetNearestNeighbours(::ArrayW<TKey> point, int32_t count) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Count() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ProBuilder::KdTree::IKdTree_2, "UnityEngine.ProBuilder.KdTree", "IKdTree`2");
