#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine {
class CustomRenderTexture;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine {
class CustomRenderTextureManager;
}
// Type: UnityEngine::CustomRenderTextureManager
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10030))
// CS Name: UnityEngine.CustomRenderTextureManager
class CORDL_TYPE CustomRenderTextureManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CustomRenderTextureManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomRenderTextureManager", modifiers: " const&", def_value: None }]
constexpr CustomRenderTextureManager(CustomRenderTextureManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomRenderTextureManager", modifiers: "&&", def_value: None }]
constexpr CustomRenderTextureManager(CustomRenderTextureManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomRenderTextureManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CustomRenderTextureManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomRenderTextureManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomRenderTextureManager& operator=(CustomRenderTextureManager&& o) noexcept = default;
  constexpr CustomRenderTextureManager& operator=(CustomRenderTextureManager const& o) noexcept = default;
                


// Fields

static ::System::Action_1<::UnityEngine::CustomRenderTexture> __declspec(property(get=__get_textureLoaded, put=__set_textureLoaded))  textureLoaded;

static void __set_textureLoaded(::System::Action_1<::UnityEngine::CustomRenderTexture> value) ;

static ::System::Action_1<::UnityEngine::CustomRenderTexture> __get_textureLoaded() ;

static ::System::Action_1<::UnityEngine::CustomRenderTexture> __declspec(property(get=__get_textureUnloaded, put=__set_textureUnloaded))  textureUnloaded;

static void __set_textureUnloaded(::System::Action_1<::UnityEngine::CustomRenderTexture> value) ;

static ::System::Action_1<::UnityEngine::CustomRenderTexture> __get_textureUnloaded() ;


// Methods

/// @brief Method InvokeOnTextureLoaded_Internal addr 0x2b407a4 size 0x6c virtual false final false
static void InvokeOnTextureLoaded_Internal(::UnityEngine::CustomRenderTexture source) ;

/// @brief Method InvokeOnTextureUnloaded_Internal addr 0x2b40810 size 0x6c virtual false final false
static void InvokeOnTextureUnloaded_Internal(::UnityEngine::CustomRenderTexture source) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::CustomRenderTextureManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CustomRenderTextureManager, "UnityEngine", "CustomRenderTextureManager");
