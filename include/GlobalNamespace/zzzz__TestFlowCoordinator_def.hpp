#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
namespace HMUI {
class ViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class TestFlowCoordinator;
}
// Type: ::TestFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13633))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5618))
// CS Name: TestFlowCoordinator
class CORDL_TYPE TestFlowCoordinator : public HMUI::FlowCoordinator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~TestFlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "TestFlowCoordinator", modifiers: " const&", def_value: None }]
constexpr TestFlowCoordinator(TestFlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TestFlowCoordinator", modifiers: "&&", def_value: None }]
constexpr TestFlowCoordinator(TestFlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TestFlowCoordinator(void* ptr) noexcept : HMUI::FlowCoordinator(ptr) {
}


  constexpr TestFlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TestFlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TestFlowCoordinator& operator=(TestFlowCoordinator&& o) noexcept = default;
  constexpr TestFlowCoordinator& operator=(TestFlowCoordinator const& o) noexcept = default;
                


// Fields

 HMUI::ViewController __declspec(property(get=__get__viewController, put=__set__viewController))  _viewController;

constexpr void __set__viewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__viewController() const;

 HMUI::ViewController __declspec(property(get=__get__leftViewController, put=__set__leftViewController))  _leftViewController;

constexpr void __set__leftViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__leftViewController() const;

 HMUI::ViewController __declspec(property(get=__get__rightViewController, put=__set__rightViewController))  _rightViewController;

constexpr void __set__rightViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__rightViewController() const;

 HMUI::ViewController __declspec(property(get=__get__bottomScreenViewController, put=__set__bottomScreenViewController))  _bottomScreenViewController;

constexpr void __set__bottomScreenViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__bottomScreenViewController() const;

 HMUI::ViewController __declspec(property(get=__get__topScreenViewController, put=__set__topScreenViewController))  _topScreenViewController;

constexpr void __set__topScreenViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__topScreenViewController() const;


// Methods

/// @brief Method DidActivate addr 0x2146a3c size 0x1c virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

// Ctor Parameters []
explicit TestFlowCoordinator() ;

/// @brief Method .ctor addr 0x2146a58 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TestFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestFlowCoordinator, "", "TestFlowCoordinator");
