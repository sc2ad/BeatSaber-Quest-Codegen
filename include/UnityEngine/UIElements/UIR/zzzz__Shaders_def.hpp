#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class Shaders;
}
// Type: UnityEngine.UIElements.UIR::Shaders
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7516))
// CS Name: UnityEngine.UIElements.UIR.Shaders
class CORDL_TYPE Shaders : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Shaders() = default;

// Ctor Parameters [CppParam { name: "", ty: "Shaders", modifiers: " const&", def_value: None }]
constexpr Shaders(Shaders const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Shaders", modifiers: "&&", def_value: None }]
constexpr Shaders(Shaders&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Shaders(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Shaders& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Shaders& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Shaders& operator=(Shaders&& o) noexcept = default;
  constexpr Shaders& operator=(Shaders const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_k_AtlasBlit, put=__set_k_AtlasBlit))  k_AtlasBlit;

static void __set_k_AtlasBlit(::StringW value) ;

static ::StringW __get_k_AtlasBlit() ;

static ::StringW __declspec(property(get=__get_k_Editor, put=__set_k_Editor))  k_Editor;

static void __set_k_Editor(::StringW value) ;

static ::StringW __get_k_Editor() ;

static ::StringW __declspec(property(get=__get_k_Runtime, put=__set_k_Runtime))  k_Runtime;

static void __set_k_Runtime(::StringW value) ;

static ::StringW __get_k_Runtime() ;

static ::StringW __declspec(property(get=__get_k_RuntimeWorld, put=__set_k_RuntimeWorld))  k_RuntimeWorld;

static void __set_k_RuntimeWorld(::StringW value) ;

static ::StringW __get_k_RuntimeWorld() ;

static ::StringW __declspec(property(get=__get_k_GraphView, put=__set_k_GraphView))  k_GraphView;

static void __set_k_GraphView(::StringW value) ;

static ::StringW __get_k_GraphView() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::Shaders);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::Shaders, "UnityEngine.UIElements.UIR", "Shaders");
