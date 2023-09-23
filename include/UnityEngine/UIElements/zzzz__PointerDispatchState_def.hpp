#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerDispatchState;
}
// Type: UnityEngine.UIElements::PointerDispatchState
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6859))
// CS Name: UnityEngine.UIElements.PointerDispatchState
class CORDL_TYPE PointerDispatchState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PointerDispatchState() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerDispatchState", modifiers: " const&", def_value: None }]
constexpr PointerDispatchState(PointerDispatchState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerDispatchState", modifiers: "&&", def_value: None }]
constexpr PointerDispatchState(PointerDispatchState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerDispatchState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PointerDispatchState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerDispatchState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerDispatchState& operator=(PointerDispatchState&& o) noexcept = default;
  constexpr PointerDispatchState& operator=(PointerDispatchState const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::UIElements::IEventHandler> __declspec(property(get=__get_m_PendingPointerCapture, put=__set_m_PendingPointerCapture))  m_PendingPointerCapture;

constexpr void __set_m_PendingPointerCapture(::ArrayW<UnityEngine::UIElements::IEventHandler> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::IEventHandler> __get_m_PendingPointerCapture() const;

 ::ArrayW<UnityEngine::UIElements::IEventHandler> __declspec(property(get=__get_m_PointerCapture, put=__set_m_PointerCapture))  m_PointerCapture;

constexpr void __set_m_PointerCapture(::ArrayW<UnityEngine::UIElements::IEventHandler> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::IEventHandler> __get_m_PointerCapture() const;

 ::ArrayW<bool> __declspec(property(get=__get_m_ShouldSendCompatibilityMouseEvents, put=__set_m_ShouldSendCompatibilityMouseEvents))  m_ShouldSendCompatibilityMouseEvents;

constexpr void __set_m_ShouldSendCompatibilityMouseEvents(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get_m_ShouldSendCompatibilityMouseEvents() const;


// Methods

// Ctor Parameters []
explicit PointerDispatchState() ;

/// @brief Method .ctor addr 0x2c3ffe4 size 0xd8 virtual false final false
 void _ctor() ;

/// @brief Method Reset addr 0x2c400bc size 0x90 virtual false final false
 void Reset() ;

/// @brief Method GetCapturingElement addr 0x2c3f060 size 0x30 virtual false final false
 UnityEngine::UIElements::IEventHandler GetCapturingElement(int32_t pointerId) ;

/// @brief Method HasPointerCapture addr 0x2c3ed78 size 0x38 virtual false final false
 bool HasPointerCapture(UnityEngine::UIElements::IEventHandler handler, int32_t pointerId) ;

/// @brief Method CapturePointer addr 0x2c3ede8 size 0x13c virtual false final false
 void CapturePointer(UnityEngine::UIElements::IEventHandler handler, int32_t pointerId) ;

/// @brief Method ReleasePointer addr 0x2c3f154 size 0x30 virtual false final false
 void ReleasePointer(int32_t pointerId) ;

/// @brief Method ReleasePointer addr 0x2c3ef5c size 0x3c virtual false final false
 void ReleasePointer(UnityEngine::UIElements::IEventHandler handler, int32_t pointerId) ;

/// @brief Method ProcessPointerCapture addr 0x2c3f68c size 0x958 virtual false final false
 void ProcessPointerCapture(int32_t pointerId) ;

/// @brief Method ActivateCompatibilityMouseEvents addr 0x2c3f248 size 0x34 virtual false final false
 void ActivateCompatibilityMouseEvents(int32_t pointerId) ;

/// @brief Method PreventCompatibilityMouseEvents addr 0x2c3f340 size 0x30 virtual false final false
 void PreventCompatibilityMouseEvents(int32_t pointerId) ;

/// @brief Method ShouldSendCompatibilityMouseEvents addr 0x2c3f494 size 0x134 virtual false final false
 bool ShouldSendCompatibilityMouseEvents(UnityEngine::UIElements::IPointerEvent evt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PointerDispatchState);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PointerDispatchState, "UnityEngine.UIElements", "PointerDispatchState");
