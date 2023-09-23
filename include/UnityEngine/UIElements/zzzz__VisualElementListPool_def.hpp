#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
template<typename T>
class ObjectPool_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementListPool;
}
// Type: UnityEngine.UIElements::VisualElementListPool
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6910))
// CS Name: UnityEngine.UIElements.VisualElementListPool
class CORDL_TYPE VisualElementListPool : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~VisualElementListPool() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementListPool", modifiers: " const&", def_value: None }]
constexpr VisualElementListPool(VisualElementListPool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementListPool", modifiers: "&&", def_value: None }]
constexpr VisualElementListPool(VisualElementListPool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualElementListPool(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VisualElementListPool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualElementListPool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualElementListPool& operator=(VisualElementListPool&& o) noexcept = default;
  constexpr VisualElementListPool& operator=(VisualElementListPool const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>> __declspec(property(get=__get_pool, put=__set_pool))  pool;

static void __set_pool(UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>> value) ;

static UnityEngine::UIElements::ObjectPool_1<System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement>> __get_pool() ;


// Methods

/// @brief Method Copy addr 0x2c4ac4c size 0xac virtual false final false
static System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> Copy(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> elements) ;

/// @brief Method Get addr 0x2c4acf8 size 0xe0 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> Get(int32_t initialCapacity) ;

/// @brief Method Release addr 0x2c4add8 size 0xb4 virtual false final false
static void Release(System::Collections::Generic::List_1<UnityEngine::UIElements::VisualElement> elements) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::VisualElementListPool);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::VisualElementListPool, "UnityEngine.UIElements", "VisualElementListPool");
