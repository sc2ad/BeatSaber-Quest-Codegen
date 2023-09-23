#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::Events {
class UnityAction;
}
namespace System {
class Type;
}
namespace System::Reflection {
class MethodInfo;
}
namespace UnityEngine::Events {
class BaseInvokableCall;
}
// Forward declare root types
namespace UnityEngine::Events {
class UnityEvent;
}
// Type: UnityEngine.Events::UnityEvent
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10397))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10407))
// CS Name: UnityEngine.Events.UnityEvent
class CORDL_TYPE UnityEvent : public UnityEngine::Events::UnityEventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent", modifiers: " const&", def_value: None }]
constexpr UnityEvent(UnityEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEvent", modifiers: "&&", def_value: None }]
constexpr UnityEvent(UnityEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEvent(void* ptr) noexcept : UnityEngine::Events::UnityEventBase(ptr) {
}


  constexpr UnityEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEvent& operator=(UnityEvent&& o) noexcept = default;
  constexpr UnityEvent& operator=(UnityEvent const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_m_InvokeArray, put=__set_m_InvokeArray))  m_InvokeArray;

constexpr void __set_m_InvokeArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_m_InvokeArray() const;


// Methods

// Ctor Parameters []
explicit UnityEvent() ;

/// @brief Method .ctor addr 0x2b81120 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method AddListener addr 0x2b81128 size 0x2c virtual false final false
 void AddListener(UnityEngine::Events::UnityAction call) ;

/// @brief Method RemoveListener addr 0x2b811c0 size 0x44 virtual false final false
 void RemoveListener(UnityEngine::Events::UnityAction call) ;

/// @brief Method FindMethod_Impl addr 0x2b81204 size 0x64 virtual true final false
 System::Reflection::MethodInfo FindMethod_Impl(::StringW name, System::Type targetObjType) ;

/// @brief Method GetDelegate addr 0x2b81268 size 0x70 virtual true final false
 UnityEngine::Events::BaseInvokableCall GetDelegate(::bs_hook::Il2CppWrapperType target, System::Reflection::MethodInfo theFunction) ;

/// @brief Method GetDelegate addr 0x2b81154 size 0x6c virtual false final false
static UnityEngine::Events::BaseInvokableCall GetDelegate(UnityEngine::Events::UnityAction action) ;

/// @brief Method Invoke addr 0x2b812d8 size 0x180 virtual false final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
NEED_NO_BOX(UnityEngine::Events::UnityEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::UnityEvent, "UnityEngine.Events", "UnityEvent");
