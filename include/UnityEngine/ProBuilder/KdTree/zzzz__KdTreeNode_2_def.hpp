#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename TKey,typename TValue>
class KdTreeNode_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class KdTreeNode_2<TKey,TValue>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<>
class KdTreeNode_2<float_t,int32_t>;
}
// Type: UnityEngine.ProBuilder.KdTree::KdTreeNode`2
// Type: UnityEngine.ProBuilder.KdTree::KdTreeNode`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15803))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15803), inst: 80 })
// CS Name: UnityEngine.ProBuilder.KdTree.KdTreeNode`2
class CORDL_TYPE KdTreeNode_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~KdTreeNode_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "KdTreeNode_2", modifiers: " const&", def_value: None }]
constexpr KdTreeNode_2(KdTreeNode_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KdTreeNode_2", modifiers: "&&", def_value: None }]
constexpr KdTreeNode_2(KdTreeNode_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KdTreeNode_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KdTreeNode_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KdTreeNode_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KdTreeNode_2& operator=(KdTreeNode_2&& o) noexcept = default;
  constexpr KdTreeNode_2& operator=(KdTreeNode_2 const& o) noexcept = default;
                


// Fields

 ::ArrayW<TKey> __declspec(property(get=__get_Point, put=__set_Point))  Point;

constexpr void __set_Point(::ArrayW<TKey> value) ;

constexpr ::ArrayW<TKey> __get_Point() const;

 TValue __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(TValue value) ;

constexpr TValue __get_Value() const;

 ::System::Collections::Generic::List_1<TValue> __declspec(property(get=__get_Duplicates, put=__set_Duplicates))  Duplicates;

constexpr void __set_Duplicates(::System::Collections::Generic::List_1<TValue> value) ;

constexpr ::System::Collections::Generic::List_1<TValue> __get_Duplicates() const;

 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> __declspec(property(get=__get_LeftChild, put=__set_LeftChild))  LeftChild;

constexpr void __set_LeftChild(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> __get_LeftChild() const;

 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> __declspec(property(get=__get_RightChild, put=__set_RightChild))  RightChild;

constexpr void __set_RightChild(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> __get_RightChild() const;


// Properties

 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsLeaf))  IsLeaf;


// Methods

// Ctor Parameters []
explicit KdTreeNode_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "point", ty: "::ArrayW<TKey>", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
explicit KdTreeNode_2(::ArrayW<TKey> point, TValue value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<TKey> point, TValue value) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> get_Item(int32_t compare) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t compare, ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> value) ;

/// @brief Method get_IsLeaf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsLeaf() ;

/// @brief Method AddDuplicate addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddDuplicate(TValue value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: UnityEngine.ProBuilder.KdTree::KdTreeNode`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15803))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15803), inst: 5762 })
// CS Name: UnityEngine.ProBuilder.KdTree.KdTreeNode`2
class CORDL_TYPE KdTreeNode_2<float_t,int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~KdTreeNode_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "KdTreeNode_2", modifiers: " const&", def_value: None }]
constexpr KdTreeNode_2(KdTreeNode_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KdTreeNode_2", modifiers: "&&", def_value: None }]
constexpr KdTreeNode_2(KdTreeNode_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KdTreeNode_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KdTreeNode_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KdTreeNode_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KdTreeNode_2& operator=(KdTreeNode_2&& o) noexcept = default;
  constexpr KdTreeNode_2& operator=(KdTreeNode_2 const& o) noexcept = default;
                


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get_Point, put=__set_Point))  Point;

constexpr void __set_Point(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_Point() const;

 int32_t __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(int32_t value) ;

constexpr int32_t __get_Value() const;

 ::System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_Duplicates, put=__set_Duplicates))  Duplicates;

constexpr void __set_Duplicates(::System::Collections::Generic::List_1<int32_t> value) ;

constexpr ::System::Collections::Generic::List_1<int32_t> __get_Duplicates() const;

 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> __declspec(property(get=__get_LeftChild, put=__set_LeftChild))  LeftChild;

constexpr void __set_LeftChild(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> __get_LeftChild() const;

 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> __declspec(property(get=__get_RightChild, put=__set_RightChild))  RightChild;

constexpr void __set_RightChild(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> __get_RightChild() const;


// Properties

 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsLeaf))  IsLeaf;


// Methods

// Ctor Parameters []
explicit KdTreeNode_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "point", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
explicit KdTreeNode_2(::ArrayW<float_t> point, int32_t value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<float_t> point, int32_t value) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> get_Item(int32_t compare) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t compare, ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> value) ;

/// @brief Method get_IsLeaf addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsLeaf() ;

/// @brief Method AddDuplicate addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddDuplicate(int32_t value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2, "UnityEngine.ProBuilder.KdTree", "KdTreeNode`2");
