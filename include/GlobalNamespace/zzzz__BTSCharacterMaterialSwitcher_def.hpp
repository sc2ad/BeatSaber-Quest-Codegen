#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Material;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterMaterialSwitcher;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs;
}
// Type: ::RendererMaterialsPairs
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3951))
// CS Name: BTSCharacterMaterialSwitcher::RendererMaterialsPairs
class CORDL_TYPE ____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs(____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs(____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs& operator=(____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs&& o) noexcept = default;
  constexpr ____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs& operator=(____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Renderer __declspec(property(get=__get__renderer, put=__set__renderer))  _renderer;

constexpr void __set__renderer(::UnityEngine::Renderer value) ;

constexpr ::UnityEngine::Renderer __get__renderer() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs> __declspec(property(get=__get__materialPairs, put=__set__materialPairs))  _materialPairs;

constexpr void __set__materialPairs(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs> __get__materialPairs() const;


// Properties

 ::UnityEngine::Renderer __declspec(property(get=get_renderer))  renderer;

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs> __declspec(property(get=get_materialPairs))  materialPairs;


// Methods

/// @brief Method get_renderer addr 0x20a727c size 0x8 virtual false final false
 ::UnityEngine::Renderer get_renderer() ;

/// @brief Method get_materialPairs addr 0x20a7284 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs> get_materialPairs() ;

// Ctor Parameters [CppParam { name: "renderer", ty: "::UnityEngine::Renderer", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs(::UnityEngine::Renderer renderer) ;

/// @brief Method .ctor addr 0x20a728c size 0x90 virtual false final false
 void _ctor(::UnityEngine::Renderer renderer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MaterialPairs
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3952))
// CS Name: BTSCharacterMaterialSwitcher::MaterialPairs
class CORDL_TYPE ____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs(____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs(____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs& operator=(____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs&& o) noexcept = default;
  constexpr ____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs& operator=(____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_materialIndex, put=__set_materialIndex))  materialIndex;

constexpr void __set_materialIndex(int32_t value) ;

constexpr int32_t __get_materialIndex() const;

 ::UnityEngine::Material __declspec(property(get=__get_defaultMaterial, put=__set_defaultMaterial))  defaultMaterial;

constexpr void __set_defaultMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_defaultMaterial() const;

 ::UnityEngine::Material __declspec(property(get=__get_alternativeMaterial, put=__set_alternativeMaterial))  alternativeMaterial;

constexpr void __set_alternativeMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_alternativeMaterial() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs() ;

/// @brief Method .ctor addr 0x20a731c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BTSCharacterMaterialSwitcher
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3953))
// CS Name: BTSCharacterMaterialSwitcher
class CORDL_TYPE BTSCharacterMaterialSwitcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MaterialPairs = ::GlobalNamespace::____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs;

using RendererMaterialsPairs = ::GlobalNamespace::____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BTSCharacterMaterialSwitcher() = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterMaterialSwitcher", modifiers: " const&", def_value: None }]
constexpr BTSCharacterMaterialSwitcher(BTSCharacterMaterialSwitcher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterMaterialSwitcher", modifiers: "&&", def_value: None }]
constexpr BTSCharacterMaterialSwitcher(BTSCharacterMaterialSwitcher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BTSCharacterMaterialSwitcher(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BTSCharacterMaterialSwitcher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BTSCharacterMaterialSwitcher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BTSCharacterMaterialSwitcher& operator=(BTSCharacterMaterialSwitcher&& o) noexcept = default;
  constexpr BTSCharacterMaterialSwitcher& operator=(BTSCharacterMaterialSwitcher const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs> __declspec(property(get=__get__rendererMaterialsPairs, put=__set__rendererMaterialsPairs))  _rendererMaterialsPairs;

constexpr void __set__rendererMaterialsPairs(::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs> __get__rendererMaterialsPairs() const;


// Methods

/// @brief Method SwapMaterials addr 0x20a6fd0 size 0x254 virtual false final false
 void SwapMaterials(bool alternative) ;

// Ctor Parameters []
explicit BTSCharacterMaterialSwitcher() ;

/// @brief Method .ctor addr 0x20a7274 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterMaterialSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterMaterialSwitcher, "", "BTSCharacterMaterialSwitcher");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BTSCharacterMaterialSwitcher__MaterialPairs, "", "BTSCharacterMaterialSwitcher/MaterialPairs");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BTSCharacterMaterialSwitcher__RendererMaterialsPairs, "", "BTSCharacterMaterialSwitcher/RendererMaterialsPairs");
