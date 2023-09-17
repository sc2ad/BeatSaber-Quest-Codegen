#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class ObjectsMovementRecorderEditorInstaller;
}
// Type: ::ObjectsMovementRecorderEditorInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6010))
// CS Name: ObjectsMovementRecorderEditorInstaller
class CORDL_TYPE ObjectsMovementRecorderEditorInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ObjectsMovementRecorderEditorInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorderEditorInstaller", modifiers: " const&", def_value: None }]
constexpr ObjectsMovementRecorderEditorInstaller(ObjectsMovementRecorderEditorInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectsMovementRecorderEditorInstaller", modifiers: "&&", def_value: None }]
constexpr ObjectsMovementRecorderEditorInstaller(ObjectsMovementRecorderEditorInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectsMovementRecorderEditorInstaller(void* ptr) noexcept : ::Zenject::MonoInstaller(ptr) {
}


  constexpr ObjectsMovementRecorderEditorInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectsMovementRecorderEditorInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectsMovementRecorderEditorInstaller& operator=(ObjectsMovementRecorderEditorInstaller&& o) noexcept = default;
  constexpr ObjectsMovementRecorderEditorInstaller& operator=(ObjectsMovementRecorderEditorInstaller const& o) noexcept = default;
                


// Methods

/// @brief Method InstallBindings addr 0x21a4f04 size 0x4 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit ObjectsMovementRecorderEditorInstaller() ;

/// @brief Method .ctor addr 0x21a4f08 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ObjectsMovementRecorderEditorInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectsMovementRecorderEditorInstaller, "", "ObjectsMovementRecorderEditorInstaller");
