#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
struct TextAlignment;
}
// Forward declare root types
namespace UnityEngine {
class TextMesh;
}
// Type: UnityEngine::TextMesh
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15788))
// CS Name: UnityEngine.TextMesh
class CORDL_TYPE TextMesh : public ::UnityEngine::Component {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TextMesh() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextMesh", modifiers: " const&", def_value: None }]
constexpr TextMesh(TextMesh const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextMesh", modifiers: "&&", def_value: None }]
constexpr TextMesh(TextMesh&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextMesh(void* ptr) noexcept : ::UnityEngine::Component(ptr) {
}


  constexpr TextMesh& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextMesh& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextMesh& operator=(TextMesh&& o) noexcept = default;
  constexpr TextMesh& operator=(TextMesh const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(put=set_text))  text;

 ::UnityEngine::TextAlignment __declspec(property(get=get_alignment, put=set_alignment))  alignment;


// Methods

/// @brief Method set_text addr 0x2bd6024 size 0x44 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method get_alignment addr 0x2bd6068 size 0x3c virtual false final false
 ::UnityEngine::TextAlignment get_alignment() ;

/// @brief Method set_alignment addr 0x2bd60a4 size 0x44 virtual false final false
 void set_alignment(::UnityEngine::TextAlignment value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::TextMesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextMesh, "UnityEngine", "TextMesh");
