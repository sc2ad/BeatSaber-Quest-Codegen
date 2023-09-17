#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__IncDecSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class ListSettingsController;
}
// Type: ::ListSettingsController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5684))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5687))
// CS Name: ListSettingsController
class CORDL_TYPE ListSettingsController : public ::GlobalNamespace::IncDecSettingsController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ListSettingsController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListSettingsController", modifiers: " const&", def_value: None }]
constexpr ListSettingsController(ListSettingsController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListSettingsController", modifiers: "&&", def_value: None }]
constexpr ListSettingsController(ListSettingsController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListSettingsController(void* ptr) noexcept : ::GlobalNamespace::IncDecSettingsController(ptr) {
}


  constexpr ListSettingsController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListSettingsController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListSettingsController& operator=(ListSettingsController&& o) noexcept = default;
  constexpr ListSettingsController& operator=(ListSettingsController const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__idx, put=__set__idx))  _idx;

constexpr void __set__idx(int32_t value) ;

constexpr int32_t __get__idx() const;

 int32_t __declspec(property(get=__get__numberOfElements, put=__set__numberOfElements))  _numberOfElements;

constexpr void __set__numberOfElements(int32_t value) ;

constexpr int32_t __get__numberOfElements() const;


// Methods

/// @brief Method GetInitValues addr 0x0 size 0xffffffffffffffff virtual true final false
 bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements) ;

/// @brief Method ApplyValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void ApplyValue(int32_t idx) ;

/// @brief Method TextForValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW TextForValue(int32_t idx) ;

/// @brief Method OnEnable addr 0x21536a4 size 0x34 virtual false final false
 void OnEnable() ;

/// @brief Method RefreshUI addr 0x21536d8 size 0x74 virtual false final false
 void RefreshUI() ;

/// @brief Method Refresh addr 0x2152ab8 size 0x5c virtual false final false
 void Refresh(bool applyValue) ;

/// @brief Method IncButtonPressed addr 0x215374c size 0x40 virtual true final false
 void IncButtonPressed() ;

/// @brief Method DecButtonPressed addr 0x215378c size 0x38 virtual true final false
 void DecButtonPressed() ;

// Ctor Parameters []
explicit ListSettingsController() ;

/// @brief Method .ctor addr 0x2152df4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ListSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ListSettingsController, "", "ListSettingsController");
