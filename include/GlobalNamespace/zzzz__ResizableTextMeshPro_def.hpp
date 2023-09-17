#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Object;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class ResizableTextMeshPro;
}
// Type: ::ResizableTextMeshPro
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6044))
// CS Name: ResizableTextMeshPro
class CORDL_TYPE ResizableTextMeshPro : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ResizableTextMeshPro() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResizableTextMeshPro", modifiers: " const&", def_value: None }]
constexpr ResizableTextMeshPro(ResizableTextMeshPro const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResizableTextMeshPro", modifiers: "&&", def_value: None }]
constexpr ResizableTextMeshPro(ResizableTextMeshPro&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResizableTextMeshPro(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ResizableTextMeshPro& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResizableTextMeshPro& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResizableTextMeshPro& operator=(ResizableTextMeshPro&& o) noexcept = default;
  constexpr ResizableTextMeshPro& operator=(ResizableTextMeshPro const& o) noexcept = default;
                


// Fields

 ::TMPro::TMP_Text __declspec(property(get=__get__textMeshPro, put=__set__textMeshPro))  _textMeshPro;

constexpr void __set__textMeshPro(::TMPro::TMP_Text value) ;

constexpr ::TMPro::TMP_Text __get__textMeshPro() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get__rectTransform, put=__set__rectTransform))  _rectTransform;

constexpr void __set__rectTransform(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get__rectTransform() const;

 float_t __declspec(property(get=__get__textExtraSpace, put=__set__textExtraSpace))  _textExtraSpace;

constexpr void __set__textExtraSpace(float_t value) ;

constexpr float_t __get__textExtraSpace() const;


// Methods

/// @brief Method Start addr 0x21acbd0 size 0xcc virtual false final false
 void Start() ;

/// @brief Method Update addr 0x21acc9c size 0x80 virtual false final false
 void Update() ;

/// @brief Method OnDestroy addr 0x21acd1c size 0xcc virtual false final false
 void OnDestroy() ;

/// @brief Method HandleTextDidChange addr 0x21acde8 size 0x90 virtual false final false
 void HandleTextDidChange(::UnityEngine::Object textMeshPro) ;

// Ctor Parameters []
explicit ResizableTextMeshPro() ;

/// @brief Method .ctor addr 0x21ace78 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ResizableTextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResizableTextMeshPro, "", "ResizableTextMeshPro");
