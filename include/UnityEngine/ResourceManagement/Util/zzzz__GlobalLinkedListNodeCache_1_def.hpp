#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::ResourceManagement::Util {
template<typename T>
class LinkedListNodeCache_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
template<typename T>
class GlobalLinkedListNodeCache_1;
}
namespace UnityEngine::ResourceManagement::Util {
template<::cordl_internals::il2cpp_reference_type T>
class GlobalLinkedListNodeCache_1<T>;
}
// Type: UnityEngine.ResourceManagement.Util::GlobalLinkedListNodeCache`1
// Type: UnityEngine.ResourceManagement.Util::GlobalLinkedListNodeCache`1
namespace UnityEngine::ResourceManagement::Util {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14263))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14263), inst: 2 })
// CS Name: UnityEngine.ResourceManagement.Util.GlobalLinkedListNodeCache`1
class CORDL_TYPE GlobalLinkedListNodeCache_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalLinkedListNodeCache_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalLinkedListNodeCache_1", modifiers: " const&", def_value: None }]
constexpr GlobalLinkedListNodeCache_1(GlobalLinkedListNodeCache_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalLinkedListNodeCache_1", modifiers: "&&", def_value: None }]
constexpr GlobalLinkedListNodeCache_1(GlobalLinkedListNodeCache_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalLinkedListNodeCache_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalLinkedListNodeCache_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalLinkedListNodeCache_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalLinkedListNodeCache_1& operator=(GlobalLinkedListNodeCache_1&& o) noexcept = default;
  constexpr GlobalLinkedListNodeCache_1& operator=(GlobalLinkedListNodeCache_1 const& o) noexcept = default;
                


// Fields

static UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T> __declspec(property(get=__get_m_globalCache, put=__set_m_globalCache))  m_globalCache;

static void __set_m_globalCache(UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T> value) ;

static UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T> __get_m_globalCache() ;


// Methods

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::LinkedListNode_1<T> Acquire(T val) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static void Release(System::Collections::Generic::LinkedListNode_1<T> node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1, "UnityEngine.ResourceManagement.Util", "GlobalLinkedListNodeCache`1");
