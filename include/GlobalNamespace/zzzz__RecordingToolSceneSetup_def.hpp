#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class RecordingToolSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSceneSetup;
}
// Type: ::RecordingToolSceneSetup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6098))
// CS Name: RecordingToolSceneSetup
class CORDL_TYPE RecordingToolSceneSetup : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RecordingToolSceneSetup() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSceneSetup", modifiers: " const&", def_value: None }]
constexpr RecordingToolSceneSetup(RecordingToolSceneSetup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSceneSetup", modifiers: "&&", def_value: None }]
constexpr RecordingToolSceneSetup(RecordingToolSceneSetup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecordingToolSceneSetup(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr RecordingToolSceneSetup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecordingToolSceneSetup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecordingToolSceneSetup& operator=(RecordingToolSceneSetup&& o) noexcept = default;
  constexpr RecordingToolSceneSetup& operator=(RecordingToolSceneSetup const& o) noexcept = default;
                


// Fields

 GlobalNamespace::RecordingToolSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(GlobalNamespace::RecordingToolSceneSetupData value) ;

constexpr GlobalNamespace::RecordingToolSceneSetupData __get__sceneSetupData() const;


// Methods

/// @brief Method InstallBindings addr 0x21b6968 size 0xc4 virtual true final false
 void InstallBindings() ;

static GlobalNamespace::RecordingToolSceneSetup New_ctor() ;

/// @brief Method .ctor addr 0x21b6a2c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RecordingToolSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RecordingToolSceneSetup, "", "RecordingToolSceneSetup");
