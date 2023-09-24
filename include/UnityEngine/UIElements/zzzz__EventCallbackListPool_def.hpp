#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine::UIElements {
class EventCallbackList;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventCallbackListPool;
}
// Type: UnityEngine.UIElements::EventCallbackListPool
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7264))
// CS Name: UnityEngine.UIElements.EventCallbackListPool
class CORDL_TYPE EventCallbackListPool : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~EventCallbackListPool() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventCallbackListPool", modifiers: " const&", def_value: None }]
constexpr EventCallbackListPool(EventCallbackListPool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventCallbackListPool", modifiers: "&&", def_value: None }]
constexpr EventCallbackListPool(EventCallbackListPool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventCallbackListPool(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventCallbackListPool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventCallbackListPool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventCallbackListPool& operator=(EventCallbackListPool&& o) noexcept = default;
  constexpr EventCallbackListPool& operator=(EventCallbackListPool const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Stack_1<UnityEngine::UIElements::EventCallbackList> __declspec(property(get=__get_m_Stack, put=__set_m_Stack))  m_Stack;

constexpr void __set_m_Stack(System::Collections::Generic::Stack_1<UnityEngine::UIElements::EventCallbackList> value) ;

constexpr System::Collections::Generic::Stack_1<UnityEngine::UIElements::EventCallbackList> __get_m_Stack() const;


// Methods

/// @brief Method Get addr 0x2cd3a0c size 0xc4 virtual false final false
 UnityEngine::UIElements::EventCallbackList Get(UnityEngine::UIElements::EventCallbackList initializer) ;

/// @brief Method Release addr 0x2cd3d70 size 0x64 virtual false final false
 void Release(UnityEngine::UIElements::EventCallbackList element) ;

static UnityEngine::UIElements::EventCallbackListPool New_ctor() ;

/// @brief Method .ctor addr 0x2cd3e40 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::EventCallbackListPool);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::EventCallbackListPool, "UnityEngine.UIElements", "EventCallbackListPool");
