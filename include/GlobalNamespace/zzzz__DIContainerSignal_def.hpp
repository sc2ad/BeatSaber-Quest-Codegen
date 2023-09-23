#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__GenericSignal_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class DIContainerSignal;
}
// Type: ::DIContainerSignal
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13881), inst: 288 }), TypeDefinitionIndex(TypeDefinitionIndex(13881)), TypeDefinitionIndex(TypeDefinitionIndex(11108))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13878))
// CS Name: DIContainerSignal
class CORDL_TYPE DIContainerSignal : public GlobalNamespace::GenericSignal_1<Zenject::DiContainer> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DIContainerSignal() = default;

// Ctor Parameters [CppParam { name: "", ty: "DIContainerSignal", modifiers: " const&", def_value: None }]
constexpr DIContainerSignal(DIContainerSignal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DIContainerSignal", modifiers: "&&", def_value: None }]
constexpr DIContainerSignal(DIContainerSignal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DIContainerSignal(void* ptr) noexcept : GlobalNamespace::GenericSignal_1<Zenject::DiContainer>(ptr) {
}


  constexpr DIContainerSignal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DIContainerSignal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DIContainerSignal& operator=(DIContainerSignal&& o) noexcept = default;
  constexpr DIContainerSignal& operator=(DIContainerSignal const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DIContainerSignal() ;

/// @brief Method .ctor addr 0x1f8312c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DIContainerSignal);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DIContainerSignal, "", "DIContainerSignal");
