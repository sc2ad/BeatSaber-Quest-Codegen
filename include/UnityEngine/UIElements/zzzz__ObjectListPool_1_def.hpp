#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
template<typename T>
class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class ObjectListPool_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class ObjectListPool_1<T>;
}
// Type: UnityEngine.UIElements::ObjectListPool`1
// Type: UnityEngine.UIElements::ObjectListPool`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6911))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6911), inst: 2 })
// CS Name: UnityEngine.UIElements.ObjectListPool`1
class CORDL_TYPE ObjectListPool_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ObjectListPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectListPool_1", modifiers: " const&", def_value: None }]
constexpr ObjectListPool_1(ObjectListPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectListPool_1", modifiers: "&&", def_value: None }]
constexpr ObjectListPool_1(ObjectListPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectListPool_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjectListPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectListPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectListPool_1& operator=(ObjectListPool_1&& o) noexcept = default;
  constexpr ObjectListPool_1& operator=(ObjectListPool_1 const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::List_1<T>> __declspec(property(get=__get_pool, put=__set_pool))  pool;

static void __set_pool(UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::List_1<T>> value) ;

static UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::List_1<T>> __get_pool() ;


// Methods

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static System::Collections::Generic::List_1<T> Get() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static void Release(System::Collections::Generic::List_1<T> elements) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::ObjectListPool_1, "UnityEngine.UIElements", "ObjectListPool`1");
