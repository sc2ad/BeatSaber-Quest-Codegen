#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename T>
class ITypeMath_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TKey,typename TValue>
class IKdTree_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TKey,typename TValue>
class KdTreeNode_2;
}
namespace UnityEngine::ProBuilder::KdTree {
struct AddDuplicateBehavior;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename T>
struct HyperRect_1;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TItem,typename TDistance>
class NearestNeighbourList_2;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename TKey,typename TValue>
class KdTree_2;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TKey,typename TValue>
class ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33;
}
namespace UnityEngine::ProBuilder::KdTree {
template<typename TKey,typename TValue>
class ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class KdTree_2<TKey,TValue>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<>
class KdTree_2<float_t,int32_t>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<TKey,TValue>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<>
class ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<TKey,TValue>;
}
namespace UnityEngine::ProBuilder::KdTree {
template<>
class ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>;
}
// Type: ::<>c__DisplayClass33_0
// Type: ::<GetEnumerator>d__33
// Type: UnityEngine.ProBuilder.KdTree::KdTree`2
// Type: ::<>c__DisplayClass33_0
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15800))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15800), inst: 80 })
// CS Name: UnityEngine.ProBuilder.KdTree.KdTree`2::<>c__DisplayClass33_0
class CORDL_TYPE ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0(____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0(____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0& operator=(____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0& operator=(____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> __declspec(property(get=__get_left, put=__set_left))  left;

constexpr void __set_left(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> __get_left() const;

 ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> __declspec(property(get=__get_right, put=__set_right))  right;

constexpr void __set_right(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> __get_right() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <GetEnumerator>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _GetEnumerator_b__0(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> node) ;

/// @brief Method <GetEnumerator>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _GetEnumerator_b__1(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: ::<>c__DisplayClass33_0
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15800))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15800), inst: 5762 })
// CS Name: UnityEngine.ProBuilder.KdTree.KdTree`2::<>c__DisplayClass33_0
class CORDL_TYPE ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0(____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0(____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0& operator=(____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0& operator=(____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> __declspec(property(get=__get_left, put=__set_left))  left;

constexpr void __set_left(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> __get_left() const;

 ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> __declspec(property(get=__get_right, put=__set_right))  right;

constexpr void __set_right(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> value) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> __get_right() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <GetEnumerator>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _GetEnumerator_b__0(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> node) ;

/// @brief Method <GetEnumerator>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _GetEnumerator_b__1(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: ::<GetEnumerator>d__33
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15801))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15801), inst: 80 })
// CS Name: UnityEngine.ProBuilder.KdTree.KdTree`2::<GetEnumerator>d__33
class CORDL_TYPE ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33(____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33(____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33& operator=(____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33& operator=(____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> __get___2__current() const;

 ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue> __get___4__this() const;

 ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<TKey,TValue> __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<TKey,TValue> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<TKey,TValue> __get___8__1() const;

 ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> __declspec(property(get=__get__addLeft_5__2, put=__set__addLeft_5__2))  _addLeft_5__2;

constexpr void __set__addLeft_5__2(::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> value) ;

constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> __get__addLeft_5__2() const;

 ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> __declspec(property(get=__get__addRight_5__3, put=__set__addRight_5__3))  _addRight_5__3;

constexpr void __set__addRight_5__3(::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> value) ;

constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> __get__addRight_5__3() const;


// Properties

 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey,TValue___get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey,TValue___Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.ProBuilder.KdTree.KdTreeNode<TKey,TValue>>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey,TValue___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: ::<GetEnumerator>d__33
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15801))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15801), inst: 5762 })
// CS Name: UnityEngine.ProBuilder.KdTree.KdTree`2::<GetEnumerator>d__33
class CORDL_TYPE ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33(____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33(____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33& operator=(____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33& operator=(____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> __get___2__current() const;

 ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t> __get___4__this() const;

 ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t> __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t> __get___8__1() const;

 ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> __declspec(property(get=__get__addLeft_5__2, put=__set__addLeft_5__2))  _addLeft_5__2;

constexpr void __set__addLeft_5__2(::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> value) ;

constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> __get__addLeft_5__2() const;

 ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> __declspec(property(get=__get__addRight_5__3, put=__set__addRight_5__3))  _addRight_5__3;

constexpr void __set__addRight_5__3(::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> value) ;

constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> __get__addRight_5__3() const;


// Properties

 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey,TValue___get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey,TValue___Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.ProBuilder.KdTree.KdTreeNode<TKey,TValue>>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey,TValue___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: UnityEngine.ProBuilder.KdTree::KdTree`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15802))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15802), inst: 80 })
// CS Name: UnityEngine.ProBuilder.KdTree.KdTree`2
class CORDL_TYPE KdTree_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__33 = ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<TKey, TValue>;

using __c__DisplayClass33_0 = ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<TKey, TValue>;

/// @brief Convert operator to ::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>
constexpr operator  ::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~KdTree_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "KdTree_2", modifiers: " const&", def_value: None }]
constexpr KdTree_2(KdTree_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KdTree_2", modifiers: "&&", def_value: None }]
constexpr KdTree_2(KdTree_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KdTree_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KdTree_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KdTree_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KdTree_2& operator=(KdTree_2&& o) noexcept = default;
  constexpr KdTree_2& operator=(KdTree_2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_dimensions, put=__set_dimensions))  dimensions;

constexpr void __set_dimensions(int32_t value) ;

constexpr int32_t __get_dimensions() const;

 ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey> __declspec(property(get=__get_typeMath, put=__set_typeMath))  typeMath;

constexpr void __set_typeMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey> __get_typeMath() const;

 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> __declspec(property(get=__get_root, put=__set_root))  root;

constexpr void __set_root(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> __get_root() const;

 ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior __declspec(property(get=__get__AddDuplicateBehavior_k__BackingField, put=__set__AddDuplicateBehavior_k__BackingField))  _AddDuplicateBehavior_k__BackingField;

constexpr void __set__AddDuplicateBehavior_k__BackingField(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior __get__AddDuplicateBehavior_k__BackingField() const;

 int32_t __declspec(property(get=__get__Count_k__BackingField, put=__set__Count_k__BackingField))  _Count_k__BackingField;

constexpr void __set__Count_k__BackingField(int32_t value) ;

constexpr int32_t __get__Count_k__BackingField() const;


// Properties

 ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior __declspec(property(get=get_AddDuplicateBehavior, put=set_AddDuplicateBehavior))  AddDuplicateBehavior;

 int32_t __declspec(property(get=get_Count, put=set_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "dimensions", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "typeMath", ty: "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>", modifiers: "", def_value: None }]
explicit KdTree_2(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey> typeMath) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey> typeMath) ;

// Ctor Parameters [CppParam { name: "dimensions", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "typeMath", ty: "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>", modifiers: "", def_value: None }, CppParam { name: "addDuplicateBehavior", ty: "::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior", modifiers: "", def_value: None }]
explicit KdTree_2(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey> typeMath, ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior addDuplicateBehavior) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey> typeMath, ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior addDuplicateBehavior) ;

/// @brief Method get_AddDuplicateBehavior addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior get_AddDuplicateBehavior() ;

/// @brief Method set_AddDuplicateBehavior addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_AddDuplicateBehavior(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Add(::ArrayW<TKey> point, TValue value) ;

/// @brief Method ReadChildNodes addr 0x0 size 0xffffffffffffffff virtual false final false
 void ReadChildNodes(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> removedNode) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
 void RemoveAt(::ArrayW<TKey> point) ;

/// @brief Method GetNearestNeighbours addr 0x0 size 0xffffffffffffffff virtual true final true
 ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> GetNearestNeighbours(::ArrayW<TKey> point, int32_t count) ;

/// @brief Method AddNearestNeighbours addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddNearestNeighbours(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> node, ::ArrayW<TKey> target, ::UnityEngine::ProBuilder::KdTree::HyperRect_1<TKey> rect, int32_t depth, ::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>,TKey> nearestNeighbours, TKey maxSearchRadiusSquared) ;

/// @brief Method RadialSearch addr 0x0 size 0xffffffffffffffff virtual true final true
 ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> RadialSearch(::ArrayW<TKey> center, TKey radius, int32_t count) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method set_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Count(int32_t value) ;

/// @brief Method TryFindValueAt addr 0x0 size 0xffffffffffffffff virtual true final true
 bool TryFindValueAt(::ArrayW<TKey> point, ByRef<TValue> value) ;

/// @brief Method FindValueAt addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue FindValueAt(::ArrayW<TKey> point) ;

/// @brief Method TryFindValue addr 0x0 size 0xffffffffffffffff virtual true final true
 bool TryFindValue(TValue value, ByRef<::ArrayW<TKey>> point) ;

/// @brief Method FindValue addr 0x0 size 0xffffffffffffffff virtual true final true
 ::ArrayW<TKey> FindValue(TValue value) ;

/// @brief Method AddNodeToStringBuilder addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddNodeToStringBuilder(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> node, ::System::Text::StringBuilder sb, int32_t depth) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method AddNodesToList addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddNodesToList(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> node, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> nodes) ;

/// @brief Method SortNodesArray addr 0x0 size 0xffffffffffffffff virtual false final false
 void SortNodesArray(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> nodes, int32_t byDimension, int32_t fromIndex, int32_t toIndex) ;

/// @brief Method AddNodesBalanced addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddNodesBalanced(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> nodes, int32_t byDimension, int32_t fromIndex, int32_t toIndex) ;

/// @brief Method Balance addr 0x0 size 0xffffffffffffffff virtual false final false
 void Balance() ;

/// @brief Method RemoveChildNodes addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveChildNodes(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> node) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method SaveToFile addr 0x0 size 0xffffffffffffffff virtual false final false
 void SaveToFile(::StringW filename) ;

/// @brief Method LoadFromFile addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue> LoadFromFile(::StringW filename) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
// Type: UnityEngine.ProBuilder.KdTree::KdTree`2
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15802))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15802), inst: 5762 })
// CS Name: UnityEngine.ProBuilder.KdTree.KdTree`2
class CORDL_TYPE KdTree_2<float_t,int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__33 = ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t, int32_t>;

using __c__DisplayClass33_0 = ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t, int32_t>;

/// @brief Convert operator to ::UnityEngine::ProBuilder::KdTree::IKdTree_2<float_t,int32_t>
constexpr operator  ::UnityEngine::ProBuilder::KdTree::IKdTree_2<float_t,int32_t>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~KdTree_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "KdTree_2", modifiers: " const&", def_value: None }]
constexpr KdTree_2(KdTree_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KdTree_2", modifiers: "&&", def_value: None }]
constexpr KdTree_2(KdTree_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KdTree_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KdTree_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KdTree_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KdTree_2& operator=(KdTree_2&& o) noexcept = default;
  constexpr KdTree_2& operator=(KdTree_2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_dimensions, put=__set_dimensions))  dimensions;

constexpr void __set_dimensions(int32_t value) ;

constexpr int32_t __get_dimensions() const;

 ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> __declspec(property(get=__get_typeMath, put=__set_typeMath))  typeMath;

constexpr void __set_typeMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> __get_typeMath() const;

 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> __declspec(property(get=__get_root, put=__set_root))  root;

constexpr void __set_root(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> __get_root() const;

 ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior __declspec(property(get=__get__AddDuplicateBehavior_k__BackingField, put=__set__AddDuplicateBehavior_k__BackingField))  _AddDuplicateBehavior_k__BackingField;

constexpr void __set__AddDuplicateBehavior_k__BackingField(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value) ;

constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior __get__AddDuplicateBehavior_k__BackingField() const;

 int32_t __declspec(property(get=__get__Count_k__BackingField, put=__set__Count_k__BackingField))  _Count_k__BackingField;

constexpr void __set__Count_k__BackingField(int32_t value) ;

constexpr int32_t __get__Count_k__BackingField() const;


// Properties

 ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior __declspec(property(get=get_AddDuplicateBehavior, put=set_AddDuplicateBehavior))  AddDuplicateBehavior;

 int32_t __declspec(property(get=get_Count, put=set_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "dimensions", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "typeMath", ty: "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>", modifiers: "", def_value: None }]
explicit KdTree_2(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> typeMath) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> typeMath) ;

// Ctor Parameters [CppParam { name: "dimensions", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "typeMath", ty: "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "addDuplicateBehavior", ty: "::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior", modifiers: "", def_value: None }]
explicit KdTree_2(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> typeMath, ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior addDuplicateBehavior) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> typeMath, ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior addDuplicateBehavior) ;

/// @brief Method get_AddDuplicateBehavior addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior get_AddDuplicateBehavior() ;

/// @brief Method set_AddDuplicateBehavior addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_AddDuplicateBehavior(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Add(::ArrayW<float_t> point, int32_t value) ;

/// @brief Method ReadChildNodes addr 0x0 size 0xffffffffffffffff virtual false final false
 void ReadChildNodes(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> removedNode) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual true final true
 void RemoveAt(::ArrayW<float_t> point) ;

/// @brief Method GetNearestNeighbours addr 0x0 size 0xffffffffffffffff virtual true final true
 ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> GetNearestNeighbours(::ArrayW<float_t> point, int32_t count) ;

/// @brief Method AddNearestNeighbours addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddNearestNeighbours(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> node, ::ArrayW<float_t> target, ::UnityEngine::ProBuilder::KdTree::HyperRect_1<float_t> rect, int32_t depth, ::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>,float_t> nearestNeighbours, float_t maxSearchRadiusSquared) ;

/// @brief Method RadialSearch addr 0x0 size 0xffffffffffffffff virtual true final true
 ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> RadialSearch(::ArrayW<float_t> center, float_t radius, int32_t count) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method set_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Count(int32_t value) ;

/// @brief Method TryFindValueAt addr 0x0 size 0xffffffffffffffff virtual true final true
 bool TryFindValueAt(::ArrayW<float_t> point, ByRef<int32_t> value) ;

/// @brief Method FindValueAt addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t FindValueAt(::ArrayW<float_t> point) ;

/// @brief Method TryFindValue addr 0x0 size 0xffffffffffffffff virtual true final true
 bool TryFindValue(int32_t value, ByRef<::ArrayW<float_t>> point) ;

/// @brief Method FindValue addr 0x0 size 0xffffffffffffffff virtual true final true
 ::ArrayW<float_t> FindValue(int32_t value) ;

/// @brief Method AddNodeToStringBuilder addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddNodeToStringBuilder(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> node, ::System::Text::StringBuilder sb, int32_t depth) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method AddNodesToList addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddNodesToList(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> node, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> nodes) ;

/// @brief Method SortNodesArray addr 0x0 size 0xffffffffffffffff virtual false final false
 void SortNodesArray(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> nodes, int32_t byDimension, int32_t fromIndex, int32_t toIndex) ;

/// @brief Method AddNodesBalanced addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddNodesBalanced(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> nodes, int32_t byDimension, int32_t fromIndex, int32_t toIndex) ;

/// @brief Method Balance addr 0x0 size 0xffffffffffffffff virtual false final false
 void Balance() ;

/// @brief Method RemoveChildNodes addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveChildNodes(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> node) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method SaveToFile addr 0x0 size 0xffffffffffffffff virtual false final false
 void SaveToFile(::StringW filename) ;

/// @brief Method LoadFromFile addr 0x0 size 0xffffffffffffffff virtual false final false
static ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t> LoadFromFile(::StringW filename) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::KdTree_2, "UnityEngine.ProBuilder.KdTree", "KdTree`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33, "UnityEngine.ProBuilder.KdTree", "KdTree`2/<GetEnumerator>d__33");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0, "UnityEngine.ProBuilder.KdTree", "KdTree`2/<>c__DisplayClass33_0");
