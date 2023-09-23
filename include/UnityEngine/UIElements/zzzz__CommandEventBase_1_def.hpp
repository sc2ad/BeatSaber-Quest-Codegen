#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class Event;
}
namespace UnityEngine::UIElements {
class ICommandEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class CommandEventBase_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class CommandEventBase_1<T>;
}
// Type: UnityEngine.UIElements::CommandEventBase`1
// Type: UnityEngine.UIElements::CommandEventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7328)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 993 }), TypeDefinitionIndex(TypeDefinitionIndex(7279))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7328), inst: 2 })
// CS Name: UnityEngine.UIElements.CommandEventBase`1
class CORDL_TYPE CommandEventBase_1<T> : public UnityEngine::UIElements::EventBase_1<T> {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::ICommandEvent
constexpr operator  UnityEngine::UIElements::ICommandEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CommandEventBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandEventBase_1", modifiers: " const&", def_value: None }]
constexpr CommandEventBase_1(CommandEventBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandEventBase_1", modifiers: "&&", def_value: None }]
constexpr CommandEventBase_1(CommandEventBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommandEventBase_1(void* ptr) noexcept : UnityEngine::UIElements::EventBase_1<T>(ptr) {
}


  constexpr CommandEventBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommandEventBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommandEventBase_1& operator=(CommandEventBase_1&& o) noexcept = default;
  constexpr CommandEventBase_1& operator=(CommandEventBase_1 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_CommandName, put=__set_m_CommandName))  m_CommandName;

constexpr void __set_m_CommandName(::StringW value) ;

constexpr ::StringW __get_m_CommandName() const;


// Properties

 ::StringW __declspec(property(get=get_commandName, put=set_commandName))  commandName;


// Methods

/// @brief Method get_commandName addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW get_commandName() ;

/// @brief Method set_commandName addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_commandName(::StringW value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(UnityEngine::Event systemEvent) ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(::StringW commandName) ;

// Ctor Parameters []
explicit CommandEventBase_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::CommandEventBase_1, "UnityEngine.UIElements", "CommandEventBase`1");
