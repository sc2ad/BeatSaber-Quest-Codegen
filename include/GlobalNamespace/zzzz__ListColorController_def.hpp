#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__IncDecColorController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ListColorController;
}
// Type: ::ListColorController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5522))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5528))
// CS Name: ListColorController
class CORDL_TYPE ListColorController : public ::GlobalNamespace::IncDecColorController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ListColorController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListColorController", modifiers: " const&", def_value: None }]
constexpr ListColorController(ListColorController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListColorController", modifiers: "&&", def_value: None }]
constexpr ListColorController(ListColorController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListColorController(void* ptr) noexcept : ::GlobalNamespace::IncDecColorController(ptr) {
}


  constexpr ListColorController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListColorController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListColorController& operator=(ListColorController&& o) noexcept = default;
  constexpr ListColorController& operator=(ListColorController const& o) noexcept = default;
                


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

/// @brief Method ColorForValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Color ColorForValue(int32_t idx) ;

/// @brief Method OnEnable addr 0x21264dc size 0x34 virtual false final false
 void OnEnable() ;

/// @brief Method RefreshUI addr 0x2126510 size 0x50 virtual false final false
 void RefreshUI() ;

/// @brief Method Refresh addr 0x2126560 size 0x5c virtual false final false
 void Refresh(bool applyValue) ;

/// @brief Method IncButtonPressed addr 0x21265bc size 0x40 virtual true final false
 void IncButtonPressed() ;

/// @brief Method DecButtonPressed addr 0x21265fc size 0x38 virtual true final false
 void DecButtonPressed() ;

// Ctor Parameters []
explicit ListColorController() ;

/// @brief Method .ctor addr 0x2126634 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ListColorController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ListColorController, "", "ListColorController");
