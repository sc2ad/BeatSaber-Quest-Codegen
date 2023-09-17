#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Type: ::MaterialPropertyBlockController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14726))
// CS Name: MaterialPropertyBlockController
class CORDL_TYPE MaterialPropertyBlockController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MaterialPropertyBlockController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockController", modifiers: " const&", def_value: None }]
constexpr MaterialPropertyBlockController(MaterialPropertyBlockController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockController", modifiers: "&&", def_value: None }]
constexpr MaterialPropertyBlockController(MaterialPropertyBlockController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaterialPropertyBlockController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MaterialPropertyBlockController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaterialPropertyBlockController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaterialPropertyBlockController& operator=(MaterialPropertyBlockController&& o) noexcept = default;
  constexpr MaterialPropertyBlockController& operator=(MaterialPropertyBlockController const& o) noexcept = default;
                


// Fields

 ::ArrayW<::UnityEngine::Renderer> __declspec(property(get=__get__renderers, put=__set__renderers))  _renderers;

constexpr void __set__renderers(::ArrayW<::UnityEngine::Renderer> value) ;

constexpr ::ArrayW<::UnityEngine::Renderer> __get__renderers() const;

 ::UnityEngine::MaterialPropertyBlock __declspec(property(get=__get__materialPropertyBlock, put=__set__materialPropertyBlock))  _materialPropertyBlock;

constexpr void __set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock value) ;

constexpr ::UnityEngine::MaterialPropertyBlock __get__materialPropertyBlock() const;

 ::System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get__numberOfMaterialsInRenderers, put=__set__numberOfMaterialsInRenderers))  _numberOfMaterialsInRenderers;

constexpr void __set__numberOfMaterialsInRenderers(::System::Collections::Generic::List_1<int32_t> value) ;

constexpr ::System::Collections::Generic::List_1<int32_t> __get__numberOfMaterialsInRenderers() const;

 bool __declspec(property(get=__get__isInitialized, put=__set__isInitialized))  _isInitialized;

constexpr void __set__isInitialized(bool value) ;

constexpr bool __get__isInitialized() const;


// Properties

 ::ArrayW<::UnityEngine::Renderer> __declspec(property(get=get_renderers))  renderers;

 ::UnityEngine::MaterialPropertyBlock __declspec(property(get=get_materialPropertyBlock))  materialPropertyBlock;


// Methods

/// @brief Method get_renderers addr 0x1fa25f0 size 0x8 virtual false final false
 ::ArrayW<::UnityEngine::Renderer> get_renderers() ;

/// @brief Method get_materialPropertyBlock addr 0x1fa23d8 size 0x6c virtual false final false
 ::UnityEngine::MaterialPropertyBlock get_materialPropertyBlock() ;

/// @brief Method ApplyChanges addr 0x1fa2174 size 0x1f0 virtual false final false
 void ApplyChanges() ;

// Ctor Parameters []
explicit MaterialPropertyBlockController() ;

/// @brief Method .ctor addr 0x1fa25f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockController, "", "MaterialPropertyBlockController");
