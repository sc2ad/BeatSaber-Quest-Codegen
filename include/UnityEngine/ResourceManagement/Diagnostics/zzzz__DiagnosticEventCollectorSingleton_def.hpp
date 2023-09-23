#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
namespace GlobalNamespace {
template<typename T>
class DelegateList_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Diagnostics {
class DiagnosticEventCollectorSingleton;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
class UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c;
}
// Type: ::<>c
namespace UnityEngine::ResourceManagement::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14306))
// CS Name: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton::<>c
class CORDL_TYPE UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c(UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c(UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c& operator=(UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c&& o) noexcept = default;
  constexpr UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c& operator=(UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ResourceManagement::Diagnostics::UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ResourceManagement::Diagnostics::UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c value) ;

static UnityEngine::ResourceManagement::Diagnostics::UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c __get___9() ;

static System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> value) ;

static System::Func_2<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t> __get___9__8_0() ;

static System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __declspec(property(get=__get___9__11_0, put=__set___9__11_0))  __9__11_0;

static void __set___9__11_0(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> value) ;

static System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __get___9__11_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c() ;

/// @brief Method .ctor addr 0x2a44bc4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <RegisterEventHandler>b__8_0 addr 0x2a44bcc size 0x8 virtual false final false
 int32_t _RegisterEventHandler_b__8_0(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent evt) ;

/// @brief Method <Awake>b__11_0 addr 0x2a44bd4 size 0x5c virtual false final false
 void _Awake_b__11_0(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent diagnosticEvent) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Diagnostics
// Type: UnityEngine.ResourceManagement.Diagnostics::DiagnosticEventCollectorSingleton
namespace UnityEngine::ResourceManagement::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14247)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14247), inst: 1026 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14307))
// CS Name: UnityEngine.ResourceManagement.Diagnostics.DiagnosticEventCollectorSingleton
class CORDL_TYPE DiagnosticEventCollectorSingleton : public UnityEngine::ResourceManagement::Util::ComponentSingleton_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton> {
public:
// Declarations
using __c = UnityEngine::ResourceManagement::Diagnostics::UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~DiagnosticEventCollectorSingleton() = default;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticEventCollectorSingleton", modifiers: " const&", def_value: None }]
constexpr DiagnosticEventCollectorSingleton(DiagnosticEventCollectorSingleton const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticEventCollectorSingleton", modifiers: "&&", def_value: None }]
constexpr DiagnosticEventCollectorSingleton(DiagnosticEventCollectorSingleton&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DiagnosticEventCollectorSingleton(void* ptr) noexcept : UnityEngine::ResourceManagement::Util::ComponentSingleton_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton>(ptr) {
}


  constexpr DiagnosticEventCollectorSingleton& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DiagnosticEventCollectorSingleton& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DiagnosticEventCollectorSingleton& operator=(DiagnosticEventCollectorSingleton&& o) noexcept = default;
  constexpr DiagnosticEventCollectorSingleton& operator=(DiagnosticEventCollectorSingleton const& o) noexcept = default;
                


// Fields

static System::Guid __declspec(property(get=__get_s_editorConnectionGuid, put=__set_s_editorConnectionGuid))  s_editorConnectionGuid;

static void __set_s_editorConnectionGuid(System::Guid value) ;

static System::Guid __get_s_editorConnectionGuid() ;

 System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __declspec(property(get=__get_m_CreatedEvents, put=__set_m_CreatedEvents))  m_CreatedEvents;

constexpr void __set_m_CreatedEvents(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __get_m_CreatedEvents() const;

 System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __declspec(property(get=__get_m_UnhandledEvents, put=__set_m_UnhandledEvents))  m_UnhandledEvents;

constexpr void __set_m_UnhandledEvents(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __get_m_UnhandledEvents() const;

 GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __declspec(property(get=__get_s_EventHandlers, put=__set_s_EventHandlers))  s_EventHandlers;

constexpr void __set_s_EventHandlers(GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> value) ;

constexpr GlobalNamespace::DelegateList_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __get_s_EventHandlers() const;

 float_t __declspec(property(get=__get_m_lastTickSent, put=__set_m_lastTickSent))  m_lastTickSent;

constexpr void __set_m_lastTickSent(float_t value) ;

constexpr float_t __get_m_lastTickSent() const;

 int32_t __declspec(property(get=__get_m_lastFrame, put=__set_m_lastFrame))  m_lastFrame;

constexpr void __set_m_lastFrame(int32_t value) ;

constexpr int32_t __get_m_lastFrame() const;

 float_t __declspec(property(get=__get_fpsAvg, put=__set_fpsAvg))  fpsAvg;

constexpr void __set_fpsAvg(float_t value) ;

constexpr float_t __get_fpsAvg() const;


// Properties

static System::Guid __declspec(property(get=get_PlayerConnectionGuid))  PlayerConnectionGuid;


// Methods

/// @brief Method get_PlayerConnectionGuid addr 0x2a43e00 size 0xfc virtual false final false
static System::Guid get_PlayerConnectionGuid() ;

/// @brief Method GetGameObjectName addr 0x2a43efc size 0x40 virtual true final false
 ::StringW GetGameObjectName() ;

/// @brief Method RegisterEventHandler addr 0x2a43f3c size 0xbc virtual false final false
static bool RegisterEventHandler(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> handler, bool register, bool create) ;

/// @brief Method RegisterEventHandler addr 0x2a43ff8 size 0x4dc virtual false final false
 void RegisterEventHandler(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> handler) ;

/// @brief Method UnregisterEventHandler addr 0x2a444d4 size 0xa8 virtual false final false
 void UnregisterEventHandler(System::Action_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> handler) ;

/// @brief Method PostEvent addr 0x2a4457c size 0x224 virtual false final false
 void PostEvent(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent diagnosticEvent) ;

/// @brief Method Awake addr 0x2a447a0 size 0xe4 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x2a44884 size 0x1d8 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit DiagnosticEventCollectorSingleton() ;

/// @brief Method .ctor addr 0x2a44a5c size 0x104 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Diagnostics
NEED_NO_BOX(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEventCollectorSingleton");
NEED_NO_BOX(UnityEngine::ResourceManagement::Diagnostics::UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Diagnostics::UnityEngine__ResourceManagement__Diagnostics__DiagnosticEventCollectorSingleton____c, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEventCollectorSingleton/<>c");
