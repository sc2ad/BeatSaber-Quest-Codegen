#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct CreateServerFormData;
}
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
// Forward declare root types
namespace GlobalNamespace {
class CreateServerFormController;
}
// Type: ::CreateServerFormController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5653))
// CS Name: CreateServerFormController
class CORDL_TYPE CreateServerFormController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CreateServerFormController() = default;

// Ctor Parameters [CppParam { name: "", ty: "CreateServerFormController", modifiers: " const&", def_value: None }]
constexpr CreateServerFormController(CreateServerFormController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CreateServerFormController", modifiers: "&&", def_value: None }]
constexpr CreateServerFormController(CreateServerFormController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CreateServerFormController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CreateServerFormController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CreateServerFormController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CreateServerFormController& operator=(CreateServerFormController&& o) noexcept = default;
  constexpr CreateServerFormController& operator=(CreateServerFormController const& o) noexcept = default;
                


// Fields

/// @brief Field kMinPlayers offset 0
static constexpr int32_t  kMinPlayers{2};

/// @brief Field kMaxPlayers offset 0
static constexpr int32_t  kMaxPlayers{5};

 ::GlobalNamespace::FormattedFloatListSettingsController __declspec(property(get=__get__maxPlayersList, put=__set__maxPlayersList))  _maxPlayersList;

constexpr void __set__maxPlayersList(::GlobalNamespace::FormattedFloatListSettingsController value) ;

constexpr ::GlobalNamespace::FormattedFloatListSettingsController __get__maxPlayersList() const;

 bool __declspec(property(get=__get__netDiscoverable, put=__set__netDiscoverable))  _netDiscoverable;

constexpr void __set__netDiscoverable(bool value) ;

constexpr bool __get__netDiscoverable() const;


// Properties

 ::GlobalNamespace::CreateServerFormData __declspec(property(get=get_formData))  formData;


// Methods

/// @brief Method get_formData addr 0x214c33c size 0xb0 virtual false final false
 ::GlobalNamespace::CreateServerFormData get_formData() ;

/// @brief Method Setup addr 0x214c3ec size 0x60 virtual false final false
 void Setup(int32_t selectedNumberOfPlayers, bool netDiscoverable) ;

// Ctor Parameters []
explicit CreateServerFormController() ;

/// @brief Method .ctor addr 0x214c460 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CreateServerFormController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreateServerFormController, "", "CreateServerFormController");
