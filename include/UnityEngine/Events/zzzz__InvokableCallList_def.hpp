#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::Events {
class BaseInvokableCall;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace UnityEngine::Events {
class InvokableCallList;
}
// Type: UnityEngine.Events::InvokableCallList
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10396))
// CS Name: UnityEngine.Events.InvokableCallList
class CORDL_TYPE InvokableCallList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~InvokableCallList() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCallList", modifiers: " const&", def_value: None }]
constexpr InvokableCallList(InvokableCallList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokableCallList", modifiers: "&&", def_value: None }]
constexpr InvokableCallList(InvokableCallList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvokableCallList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InvokableCallList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvokableCallList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvokableCallList& operator=(InvokableCallList&& o) noexcept = default;
  constexpr InvokableCallList& operator=(InvokableCallList const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall> __declspec(property(get=__get_m_PersistentCalls, put=__set_m_PersistentCalls))  m_PersistentCalls;

constexpr void __set_m_PersistentCalls(System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall> __get_m_PersistentCalls() const;

 System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall> __declspec(property(get=__get_m_RuntimeCalls, put=__set_m_RuntimeCalls))  m_RuntimeCalls;

constexpr void __set_m_RuntimeCalls(System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall> __get_m_RuntimeCalls() const;

 System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall> __declspec(property(get=__get_m_ExecutingCalls, put=__set_m_ExecutingCalls))  m_ExecutingCalls;

constexpr void __set_m_ExecutingCalls(System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall> __get_m_ExecutingCalls() const;

 bool __declspec(property(get=__get_m_NeedsUpdate, put=__set_m_NeedsUpdate))  m_NeedsUpdate;

constexpr void __set_m_NeedsUpdate(bool value) ;

constexpr bool __get_m_NeedsUpdate() const;


// Methods

/// @brief Method AddPersistentInvokableCall addr 0x2b80464 size 0xac virtual false final false
 void AddPersistentInvokableCall(UnityEngine::Events::BaseInvokableCall call) ;

/// @brief Method AddListener addr 0x2b80510 size 0xac virtual false final false
 void AddListener(UnityEngine::Events::BaseInvokableCall call) ;

/// @brief Method RemoveListener addr 0x2b805bc size 0x274 virtual false final false
 void RemoveListener(::bs_hook::Il2CppWrapperType targetObj, System::Reflection::MethodInfo method) ;

/// @brief Method ClearPersistent addr 0x2b80830 size 0xb8 virtual false final false
 void ClearPersistent() ;

/// @brief Method PrepareInvoke addr 0x2b808e8 size 0xb4 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall> PrepareInvoke() ;

// Ctor Parameters []
explicit InvokableCallList() ;

/// @brief Method .ctor addr 0x2b8099c size 0xc4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
NEED_NO_BOX(UnityEngine::Events::InvokableCallList);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::InvokableCallList, "UnityEngine.Events", "InvokableCallList");
