#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Action;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
// Forward declare root types
namespace GlobalNamespace {
class MockLevelEndActions;
}
// Type: ::MockLevelEndActions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5122))
// CS Name: MockLevelEndActions
class CORDL_TYPE MockLevelEndActions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::ILevelEndActions
constexpr operator  GlobalNamespace::ILevelEndActions() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MockLevelEndActions() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockLevelEndActions", modifiers: " const&", def_value: None }]
constexpr MockLevelEndActions(MockLevelEndActions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockLevelEndActions", modifiers: "&&", def_value: None }]
constexpr MockLevelEndActions(MockLevelEndActions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockLevelEndActions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockLevelEndActions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockLevelEndActions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockLevelEndActions& operator=(MockLevelEndActions&& o) noexcept = default;
  constexpr MockLevelEndActions& operator=(MockLevelEndActions const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_levelFailedEvent, put=__set_levelFailedEvent))  levelFailedEvent;

constexpr void __set_levelFailedEvent(System::Action value) ;

constexpr System::Action __get_levelFailedEvent() const;

 System::Action __declspec(property(get=__get_levelFinishedEvent, put=__set_levelFinishedEvent))  levelFinishedEvent;

constexpr void __set_levelFinishedEvent(System::Action value) ;

constexpr System::Action __get_levelFinishedEvent() const;


// Methods

/// @brief Method add_levelFailedEvent addr 0x2271784 size 0x9c virtual true final true
 void add_levelFailedEvent(System::Action value) ;

/// @brief Method remove_levelFailedEvent addr 0x2271820 size 0x9c virtual true final true
 void remove_levelFailedEvent(System::Action value) ;

/// @brief Method add_levelFinishedEvent addr 0x22718bc size 0x9c virtual true final true
 void add_levelFinishedEvent(System::Action value) ;

/// @brief Method remove_levelFinishedEvent addr 0x2271958 size 0x9c virtual true final true
 void remove_levelFinishedEvent(System::Action value) ;

static GlobalNamespace::MockLevelEndActions New_ctor() ;

/// @brief Method .ctor addr 0x22719f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockLevelEndActions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockLevelEndActions, "", "MockLevelEndActions");
