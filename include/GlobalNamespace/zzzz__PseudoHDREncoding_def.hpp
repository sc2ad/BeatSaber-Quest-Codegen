#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class PseudoHDREncoding;
}
// Type: ::PseudoHDREncoding
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5951))
// CS Name: PseudoHDREncoding
class CORDL_TYPE PseudoHDREncoding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PseudoHDREncoding() = default;

// Ctor Parameters [CppParam { name: "", ty: "PseudoHDREncoding", modifiers: " const&", def_value: None }]
constexpr PseudoHDREncoding(PseudoHDREncoding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PseudoHDREncoding", modifiers: "&&", def_value: None }]
constexpr PseudoHDREncoding(PseudoHDREncoding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PseudoHDREncoding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PseudoHDREncoding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PseudoHDREncoding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PseudoHDREncoding& operator=(PseudoHDREncoding&& o) noexcept = default;
  constexpr PseudoHDREncoding& operator=(PseudoHDREncoding const& o) noexcept = default;
                


// Fields

/// @brief Field kPseudoHDREncodingShaderName offset 0
static constexpr ::ConstString  kPseudoHDREncodingShaderName{u"Hidden/PseudoHDREncoding"};

static ::UnityEngine::Material __declspec(property(get=__get__material, put=__set__material))  _material;

static void __set__material(::UnityEngine::Material value) ;

static ::UnityEngine::Material __get__material() ;


// Methods

/// @brief Method CreatePseudoHDREncodedTexture addr 0x219cc98 size 0x1f0 virtual false final false
static ::UnityEngine::RenderTexture CreatePseudoHDREncodedTexture(::UnityEngine::RenderTexture src) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PseudoHDREncoding);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PseudoHDREncoding, "", "PseudoHDREncoding");
