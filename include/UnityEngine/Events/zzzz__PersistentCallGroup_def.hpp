#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::Events {
class InvokableCallList;
}
namespace UnityEngine::Events {
class PersistentCall;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityEventBase;
}
// Forward declare root types
namespace UnityEngine::Events {
class PersistentCallGroup;
}
// Type: UnityEngine.Events::PersistentCallGroup
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10395))
// CS Name: UnityEngine.Events.PersistentCallGroup
class CORDL_TYPE PersistentCallGroup : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PersistentCallGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "PersistentCallGroup", modifiers: " const&", def_value: None }]
constexpr PersistentCallGroup(PersistentCallGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PersistentCallGroup", modifiers: "&&", def_value: None }]
constexpr PersistentCallGroup(PersistentCallGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PersistentCallGroup(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PersistentCallGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PersistentCallGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PersistentCallGroup& operator=(PersistentCallGroup&& o) noexcept = default;
  constexpr PersistentCallGroup& operator=(PersistentCallGroup const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::Events::PersistentCall> __declspec(property(get=__get_m_Calls, put=__set_m_Calls))  m_Calls;

constexpr void __set_m_Calls(System::Collections::Generic::List_1<UnityEngine::Events::PersistentCall> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Events::PersistentCall> __get_m_Calls() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters []
explicit PersistentCallGroup() ;

/// @brief Method .ctor addr 0x2b8020c size 0x80 virtual false final false
 void _ctor() ;

/// @brief Method get_Count addr 0x2b8028c size 0x48 virtual false final false
 int32_t get_Count() ;

/// @brief Method Initialize addr 0x2b802d4 size 0x190 virtual false final false
 void Initialize(UnityEngine::Events::InvokableCallList invokableList, UnityEngine::Events::UnityEventBase unityEventBase) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
NEED_NO_BOX(UnityEngine::Events::PersistentCallGroup);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::PersistentCallGroup, "UnityEngine.Events", "PersistentCallGroup");
