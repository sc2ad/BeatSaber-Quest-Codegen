#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
template<typename T>
class LinkedListNodeCache_1;
}
namespace UnityEngine::ResourceManagement::Util {
template<::cordl_internals::il2cpp_reference_type T>
class LinkedListNodeCache_1<T>;
}
// Type: UnityEngine.ResourceManagement.Util::LinkedListNodeCache`1
// Type: UnityEngine.ResourceManagement.Util::LinkedListNodeCache`1
namespace UnityEngine::ResourceManagement::Util {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14262))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14262), inst: 2 })
// CS Name: UnityEngine.ResourceManagement.Util.LinkedListNodeCache`1
class CORDL_TYPE LinkedListNodeCache_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LinkedListNodeCache_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNodeCache_1", modifiers: " const&", def_value: None }]
constexpr LinkedListNodeCache_1(LinkedListNodeCache_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNodeCache_1", modifiers: "&&", def_value: None }]
constexpr LinkedListNodeCache_1(LinkedListNodeCache_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedListNodeCache_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LinkedListNodeCache_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedListNodeCache_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedListNodeCache_1& operator=(LinkedListNodeCache_1&& o) noexcept = default;
  constexpr LinkedListNodeCache_1& operator=(LinkedListNodeCache_1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_NodesCreated, put=__set_m_NodesCreated))  m_NodesCreated;

constexpr void __set_m_NodesCreated(int32_t value) ;

constexpr int32_t __get_m_NodesCreated() const;

 ::System::Collections::Generic::LinkedList_1<T> __declspec(property(get=__get_m_NodeCache, put=__set_m_NodeCache))  m_NodeCache;

constexpr void __set_m_NodeCache(::System::Collections::Generic::LinkedList_1<T> value) ;

constexpr ::System::Collections::Generic::LinkedList_1<T> __get_m_NodeCache() const;


// Properties

 int32_t __declspec(property(get=get_CreatedNodeCount))  CreatedNodeCount;

 int32_t __declspec(property(get=get_CachedNodeCount))  CachedNodeCount;


// Methods

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::LinkedListNode_1<T> Acquire(T val) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
 void Release(::System::Collections::Generic::LinkedListNode_1<T> node) ;

/// @brief Method get_CreatedNodeCount addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_CreatedNodeCount() ;

/// @brief Method get_CachedNodeCount addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_CachedNodeCount() ;

// Ctor Parameters []
explicit LinkedListNodeCache_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1, "UnityEngine.ResourceManagement.Util", "LinkedListNodeCache`1");
