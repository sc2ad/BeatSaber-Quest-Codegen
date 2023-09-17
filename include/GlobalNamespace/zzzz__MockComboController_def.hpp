#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IComboController;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class MockComboController;
}
// Type: ::MockComboController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5407))
// CS Name: MockComboController
class CORDL_TYPE MockComboController : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IComboController
constexpr operator  ::GlobalNamespace::IComboController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MockComboController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockComboController", modifiers: " const&", def_value: None }]
constexpr MockComboController(MockComboController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockComboController", modifiers: "&&", def_value: None }]
constexpr MockComboController(MockComboController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockComboController(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockComboController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockComboController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockComboController& operator=(MockComboController&& o) noexcept = default;
  constexpr MockComboController& operator=(MockComboController const& o) noexcept = default;
                


// Fields

 ::System::Action_1<int32_t> __declspec(property(get=__get_comboDidChangeEvent, put=__set_comboDidChangeEvent))  comboDidChangeEvent;

constexpr void __set_comboDidChangeEvent(::System::Action_1<int32_t> value) ;

constexpr ::System::Action_1<int32_t> __get_comboDidChangeEvent() const;

 ::System::Action __declspec(property(get=__get_comboBreakingEventHappenedEvent, put=__set_comboBreakingEventHappenedEvent))  comboBreakingEventHappenedEvent;

constexpr void __set_comboBreakingEventHappenedEvent(::System::Action value) ;

constexpr ::System::Action __get_comboBreakingEventHappenedEvent() const;


// Methods

/// @brief Method add_comboDidChangeEvent addr 0x210e2c4 size 0xb0 virtual true final true
 void add_comboDidChangeEvent(::System::Action_1<int32_t> value) ;

/// @brief Method remove_comboDidChangeEvent addr 0x210e374 size 0xb0 virtual true final true
 void remove_comboDidChangeEvent(::System::Action_1<int32_t> value) ;

/// @brief Method add_comboBreakingEventHappenedEvent addr 0x210e424 size 0x9c virtual true final true
 void add_comboBreakingEventHappenedEvent(::System::Action value) ;

/// @brief Method remove_comboBreakingEventHappenedEvent addr 0x210e4c0 size 0x9c virtual true final true
 void remove_comboBreakingEventHappenedEvent(::System::Action value) ;

// Ctor Parameters []
explicit MockComboController() ;

/// @brief Method .ctor addr 0x210e55c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MockComboController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockComboController, "", "MockComboController");
