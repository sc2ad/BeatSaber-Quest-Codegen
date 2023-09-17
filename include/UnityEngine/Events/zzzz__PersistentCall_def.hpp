#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::Events {
class UnityEventBase;
}
namespace UnityEngine::Events {
class ArgumentCache;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::Events {
struct PersistentListenerMode;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::Events {
struct UnityEventCallState;
}
namespace UnityEngine::Events {
class BaseInvokableCall;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace UnityEngine::Events {
class PersistentCall;
}
// Type: UnityEngine.Events::PersistentCall
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10394))
// CS Name: UnityEngine.Events.PersistentCall
class CORDL_TYPE PersistentCall : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ISerializationCallbackReceiver
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~PersistentCall() = default;

// Ctor Parameters [CppParam { name: "", ty: "PersistentCall", modifiers: " const&", def_value: None }]
constexpr PersistentCall(PersistentCall const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PersistentCall", modifiers: "&&", def_value: None }]
constexpr PersistentCall(PersistentCall&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PersistentCall(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PersistentCall& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PersistentCall& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PersistentCall& operator=(PersistentCall&& o) noexcept = default;
  constexpr PersistentCall& operator=(PersistentCall const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Object __declspec(property(get=__get_m_Target, put=__set_m_Target))  m_Target;

constexpr void __set_m_Target(::UnityEngine::Object value) ;

constexpr ::UnityEngine::Object __get_m_Target() const;

 ::StringW __declspec(property(get=__get_m_TargetAssemblyTypeName, put=__set_m_TargetAssemblyTypeName))  m_TargetAssemblyTypeName;

constexpr void __set_m_TargetAssemblyTypeName(::StringW value) ;

constexpr ::StringW __get_m_TargetAssemblyTypeName() const;

 ::StringW __declspec(property(get=__get_m_MethodName, put=__set_m_MethodName))  m_MethodName;

constexpr void __set_m_MethodName(::StringW value) ;

constexpr ::StringW __get_m_MethodName() const;

 ::UnityEngine::Events::PersistentListenerMode __declspec(property(get=__get_m_Mode, put=__set_m_Mode))  m_Mode;

constexpr void __set_m_Mode(::UnityEngine::Events::PersistentListenerMode value) ;

constexpr ::UnityEngine::Events::PersistentListenerMode __get_m_Mode() const;

 ::UnityEngine::Events::ArgumentCache __declspec(property(get=__get_m_Arguments, put=__set_m_Arguments))  m_Arguments;

constexpr void __set_m_Arguments(::UnityEngine::Events::ArgumentCache value) ;

constexpr ::UnityEngine::Events::ArgumentCache __get_m_Arguments() const;

 ::UnityEngine::Events::UnityEventCallState __declspec(property(get=__get_m_CallState, put=__set_m_CallState))  m_CallState;

constexpr void __set_m_CallState(::UnityEngine::Events::UnityEventCallState value) ;

constexpr ::UnityEngine::Events::UnityEventCallState __get_m_CallState() const;


// Properties

 ::UnityEngine::Object __declspec(property(get=get_target))  target;

 ::StringW __declspec(property(get=get_targetAssemblyTypeName))  targetAssemblyTypeName;

 ::StringW __declspec(property(get=get_methodName))  methodName;

 ::UnityEngine::Events::PersistentListenerMode __declspec(property(get=get_mode))  mode;

 ::UnityEngine::Events::ArgumentCache __declspec(property(get=get_arguments))  arguments;


// Methods

/// @brief Method get_target addr 0x2b7f778 size 0x8 virtual false final false
 ::UnityEngine::Object get_target() ;

/// @brief Method get_targetAssemblyTypeName addr 0x2b7f780 size 0xac virtual false final false
 ::StringW get_targetAssemblyTypeName() ;

/// @brief Method get_methodName addr 0x2b7f82c size 0x8 virtual false final false
 ::StringW get_methodName() ;

/// @brief Method get_mode addr 0x2b7f834 size 0x8 virtual false final false
 ::UnityEngine::Events::PersistentListenerMode get_mode() ;

/// @brief Method get_arguments addr 0x2b7f83c size 0x8 virtual false final false
 ::UnityEngine::Events::ArgumentCache get_arguments() ;

/// @brief Method IsValid addr 0x2b7f844 size 0x3c virtual false final false
 bool IsValid() ;

/// @brief Method GetRuntimeCall addr 0x2b7f880 size 0x2e8 virtual false final false
 ::UnityEngine::Events::BaseInvokableCall GetRuntimeCall(::UnityEngine::Events::UnityEventBase theEvent) ;

/// @brief Method GetObjectCall addr 0x2b7fd30 size 0x430 virtual false final false
static ::UnityEngine::Events::BaseInvokableCall GetObjectCall(::UnityEngine::Object target, ::System::Reflection::MethodInfo method, ::UnityEngine::Events::ArgumentCache arguments) ;

/// @brief Method OnBeforeSerialize addr 0x2b80160 size 0x1c virtual true final true
 void OnBeforeSerialize() ;

/// @brief Method OnAfterDeserialize addr 0x2b8017c size 0x1c virtual true final true
 void OnAfterDeserialize() ;

// Ctor Parameters []
explicit PersistentCall() ;

/// @brief Method .ctor addr 0x2b80198 size 0x74 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Events::PersistentCall);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::PersistentCall, "UnityEngine.Events", "PersistentCall");
