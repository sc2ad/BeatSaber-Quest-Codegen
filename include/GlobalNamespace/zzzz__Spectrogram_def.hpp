#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace GlobalNamespace {
class BasicSpectrogramData;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class Spectrogram;
}
// Type: ::Spectrogram
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5099))
// CS Name: Spectrogram
class CORDL_TYPE Spectrogram : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Spectrogram() = default;

// Ctor Parameters [CppParam { name: "", ty: "Spectrogram", modifiers: " const&", def_value: None }]
constexpr Spectrogram(Spectrogram const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Spectrogram", modifiers: "&&", def_value: None }]
constexpr Spectrogram(Spectrogram&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Spectrogram(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr Spectrogram& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Spectrogram& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Spectrogram& operator=(Spectrogram&& o) noexcept = default;
  constexpr Spectrogram& operator=(Spectrogram const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::MeshRenderer> __declspec(property(get=__get__meshRenderers, put=__set__meshRenderers))  _meshRenderers;

constexpr void __set__meshRenderers(::ArrayW<UnityEngine::MeshRenderer> value) ;

constexpr ::ArrayW<UnityEngine::MeshRenderer> __get__meshRenderers() const;

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController))  _materialPropertyBlockController;

constexpr void __set__materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr GlobalNamespace::MaterialPropertyBlockController __get__materialPropertyBlockController() const;

 GlobalNamespace::BasicSpectrogramData __declspec(property(get=__get__spectrogramData, put=__set__spectrogramData))  _spectrogramData;

constexpr void __set__spectrogramData(GlobalNamespace::BasicSpectrogramData value) ;

constexpr GlobalNamespace::BasicSpectrogramData __get__spectrogramData() const;

static int32_t __declspec(property(get=__get__spectrogramDataID, put=__set__spectrogramDataID))  _spectrogramDataID;

static void __set__spectrogramDataID(int32_t value) ;

static int32_t __get__spectrogramDataID() ;

static UnityEngine::MaterialPropertyBlock __declspec(property(get=__get__materialPropertyBlock, put=__set__materialPropertyBlock))  _materialPropertyBlock;

static void __set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock value) ;

static UnityEngine::MaterialPropertyBlock __get__materialPropertyBlock() ;


// Properties

 UnityEngine::MaterialPropertyBlock __declspec(property(get=get_materialPropertyBlock))  materialPropertyBlock;


// Methods

/// @brief Method get_materialPropertyBlock addr 0x226bd20 size 0xb4 virtual false final false
 UnityEngine::MaterialPropertyBlock get_materialPropertyBlock() ;

/// @brief Method Awake addr 0x226bdd4 size 0xe8 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x226bebc size 0x15c virtual false final false
 void Update() ;

static GlobalNamespace::Spectrogram New_ctor() ;

/// @brief Method .ctor addr 0x226c018 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::Spectrogram);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Spectrogram, "", "Spectrogram");
