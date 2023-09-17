#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::Events {
class PersistentCall;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::Events {
class InvokableCallList;
}
namespace UnityEngine::Events {
class PersistentCallGroup;
}
namespace UnityEngine::Events {
struct PersistentListenerMode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class BaseInvokableCall;
}
// Forward declare root types
namespace UnityEngine::Events {
class UnityEventBase;
}
// Type: UnityEngine.Events::UnityEventBase
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10397))
// CS Name: UnityEngine.Events.UnityEventBase
class CORDL_TYPE UnityEventBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ISerializationCallbackReceiver
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UnityEventBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEventBase", modifiers: " const&", def_value: None }]
constexpr UnityEventBase(UnityEventBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEventBase", modifiers: "&&", def_value: None }]
constexpr UnityEventBase(UnityEventBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEventBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEventBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEventBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEventBase& operator=(UnityEventBase&& o) noexcept = default;
  constexpr UnityEventBase& operator=(UnityEventBase const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Events::InvokableCallList __declspec(property(get=__get_m_Calls, put=__set_m_Calls))  m_Calls;

constexpr void __set_m_Calls(::UnityEngine::Events::InvokableCallList value) ;

constexpr ::UnityEngine::Events::InvokableCallList __get_m_Calls() const;

 ::UnityEngine::Events::PersistentCallGroup __declspec(property(get=__get_m_PersistentCalls, put=__set_m_PersistentCalls))  m_PersistentCalls;

constexpr void __set_m_PersistentCalls(::UnityEngine::Events::PersistentCallGroup value) ;

constexpr ::UnityEngine::Events::PersistentCallGroup __get_m_PersistentCalls() const;

 bool __declspec(property(get=__get_m_CallsDirty, put=__set_m_CallsDirty))  m_CallsDirty;

constexpr void __set_m_CallsDirty(bool value) ;

constexpr bool __get_m_CallsDirty() const;


// Methods

// Ctor Parameters []
explicit UnityEventBase() ;

/// @brief Method .ctor addr 0x2b80a60 size 0x9c virtual false final false
 void _ctor() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x2b80afc size 0x4 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x2b80b28 size 0x4 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method FindMethod_Impl addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Reflection::MethodInfo FindMethod_Impl(::StringW name, ::System::Type targetObjType) ;

/// @brief Method GetDelegate addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Events::BaseInvokableCall GetDelegate(::bs_hook::Il2CppWrapperType target, ::System::Reflection::MethodInfo theFunction) ;

/// @brief Method FindMethod addr 0x2b7fb68 size 0x1c8 virtual false final false
 ::System::Reflection::MethodInfo FindMethod(::UnityEngine::Events::PersistentCall call) ;

/// @brief Method FindMethod addr 0x2b80b2c size 0x260 virtual false final false
 ::System::Reflection::MethodInfo FindMethod(::StringW name, ::System::Type listenerType, ::UnityEngine::Events::PersistentListenerMode mode, ::System::Type argumentType) ;

/// @brief Method GetPersistentEventCount addr 0x2b80f30 size 0x18 virtual false final false
 int32_t GetPersistentEventCount() ;

/// @brief Method DirtyPersistentCalls addr 0x2b80b00 size 0x28 virtual false final false
 void DirtyPersistentCalls() ;

/// @brief Method RebuildPersistentCallsIfNeeded addr 0x2b80f48 size 0x34 virtual false final false
 void RebuildPersistentCallsIfNeeded() ;

/// @brief Method AddCall addr 0x2b80f7c size 0x18 virtual false final false
 void AddCall(::UnityEngine::Events::BaseInvokableCall call) ;

/// @brief Method RemoveListener addr 0x2b80f94 size 0x18 virtual false final false
 void RemoveListener(::bs_hook::Il2CppWrapperType targetObj, ::System::Reflection::MethodInfo method) ;

/// @brief Method PrepareInvoke addr 0x2b80fac size 0x20 virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::Events::BaseInvokableCall> PrepareInvoke() ;

/// @brief Method ToString addr 0x2b80fcc size 0x84 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetValidMethodInfo addr 0x2b80d8c size 0x1a4 virtual false final false
static ::System::Reflection::MethodInfo GetValidMethodInfo(::System::Type objectType, ::StringW functionName, ::ArrayW<::System::Type> argumentTypes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Events::UnityEventBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::UnityEventBase, "UnityEngine.Events", "UnityEventBase");
