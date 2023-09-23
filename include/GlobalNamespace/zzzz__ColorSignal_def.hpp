#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__GenericSignal_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class ColorSignal;
}
// Type: ::ColorSignal
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13881)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13881), inst: 280 }), TypeDefinitionIndex(TypeDefinitionIndex(10192))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13877))
// CS Name: ColorSignal
class CORDL_TYPE ColorSignal : public GlobalNamespace::GenericSignal_1<UnityEngine::Color> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ColorSignal() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSignal", modifiers: " const&", def_value: None }]
constexpr ColorSignal(ColorSignal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSignal", modifiers: "&&", def_value: None }]
constexpr ColorSignal(ColorSignal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorSignal(void* ptr) noexcept : GlobalNamespace::GenericSignal_1<UnityEngine::Color>(ptr) {
}


  constexpr ColorSignal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorSignal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorSignal& operator=(ColorSignal&& o) noexcept = default;
  constexpr ColorSignal& operator=(ColorSignal const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ColorSignal() ;

/// @brief Method .ctor addr 0x1f830e4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorSignal);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSignal, "", "ColorSignal");
