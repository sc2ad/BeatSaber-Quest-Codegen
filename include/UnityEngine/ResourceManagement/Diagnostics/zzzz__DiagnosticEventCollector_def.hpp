#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct Guid;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Diagnostics {
class DiagnosticEventCollector;
}
// Type: UnityEngine.ResourceManagement.Diagnostics::DiagnosticEventCollector
namespace UnityEngine::ResourceManagement::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14308))
// CS Name: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollector
class CORDL_TYPE DiagnosticEventCollector : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DiagnosticEventCollector() = default;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticEventCollector", modifiers: " const&", def_value: None }]
constexpr DiagnosticEventCollector(DiagnosticEventCollector const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticEventCollector", modifiers: "&&", def_value: None }]
constexpr DiagnosticEventCollector(DiagnosticEventCollector&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DiagnosticEventCollector(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DiagnosticEventCollector& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DiagnosticEventCollector& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DiagnosticEventCollector& operator=(DiagnosticEventCollector&& o) noexcept = default;
  constexpr DiagnosticEventCollector& operator=(DiagnosticEventCollector const& o) noexcept = default;
                


// Fields

static UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector __declspec(property(get=__get_s_Collector, put=__set_s_Collector))  s_Collector;

static void __set_s_Collector(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector value) ;

static UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector __get_s_Collector() ;


// Properties

static System::Guid __declspec(property(get=get_PlayerConnectionGuid))  PlayerConnectionGuid;


// Methods

/// @brief Method get_PlayerConnectionGuid addr 0x2a44c30 size 0x4 virtual false final false
static System::Guid get_PlayerConnectionGuid() ;

/// @brief Method FindOrCreateGlobalInstance addr 0x2a44c34 size 0x1c8 virtual false final false
static UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector FindOrCreateGlobalInstance() ;

/// @brief Method RegisterEventHandler addr 0x2a44dfc size 0xc virtual false final false
static bool RegisterEventHandler(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> handler, bool register, bool create) ;

/// @brief Method UnregisterEventHandler addr 0x2a44e08 size 0x54 virtual false final false
 void UnregisterEventHandler(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> handler) ;

/// @brief Method PostEvent addr 0x2a44e5c size 0x80 virtual false final false
 void PostEvent(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent diagnosticEvent) ;

static UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector New_ctor() ;

/// @brief Method .ctor addr 0x2a44edc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Diagnostics
NEED_NO_BOX(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEventCollector");
