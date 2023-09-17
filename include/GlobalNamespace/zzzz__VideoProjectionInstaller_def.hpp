#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace {
namespace GlobalNamespace {
class EnvironmentSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class VideoProjectionInstaller;
}
// Type: ::VideoProjectionInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5081))
// CS Name: VideoProjectionInstaller
class CORDL_TYPE VideoProjectionInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~VideoProjectionInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "VideoProjectionInstaller", modifiers: " const&", def_value: None }]
constexpr VideoProjectionInstaller(VideoProjectionInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VideoProjectionInstaller", modifiers: "&&", def_value: None }]
constexpr VideoProjectionInstaller(VideoProjectionInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VideoProjectionInstaller(void* ptr) noexcept : ::Zenject::MonoInstaller(ptr) {
}


  constexpr VideoProjectionInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VideoProjectionInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VideoProjectionInstaller& operator=(VideoProjectionInstaller&& o) noexcept = default;
  constexpr VideoProjectionInstaller& operator=(VideoProjectionInstaller const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::EnvironmentSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(::GlobalNamespace::EnvironmentSceneSetupData value) ;

constexpr ::GlobalNamespace::EnvironmentSceneSetupData __get__sceneSetupData() const;


// Methods

/// @brief Method InstallBindings addr 0x2268b64 size 0xc4 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit VideoProjectionInstaller() ;

/// @brief Method .ctor addr 0x2268c28 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::VideoProjectionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionInstaller, "", "VideoProjectionInstaller");
