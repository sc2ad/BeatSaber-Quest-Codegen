#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GlobalNamespace {
class SetApplicationVersionText;
}
// Type: ::SetApplicationVersionText
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5147))
// CS Name: SetApplicationVersionText
class CORDL_TYPE SetApplicationVersionText : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SetApplicationVersionText() = default;

// Ctor Parameters [CppParam { name: "", ty: "SetApplicationVersionText", modifiers: " const&", def_value: None }]
constexpr SetApplicationVersionText(SetApplicationVersionText const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SetApplicationVersionText", modifiers: "&&", def_value: None }]
constexpr SetApplicationVersionText(SetApplicationVersionText&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SetApplicationVersionText(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SetApplicationVersionText& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SetApplicationVersionText& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SetApplicationVersionText& operator=(SetApplicationVersionText&& o) noexcept = default;
  constexpr SetApplicationVersionText& operator=(SetApplicationVersionText const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshPro __declspec(property(get=__get__versionText, put=__set__versionText))  _versionText;

constexpr void __set__versionText(::TMPro::TextMeshPro value) ;

constexpr ::TMPro::TextMeshPro __get__versionText() const;


// Methods

/// @brief Method Start addr 0x20cd8e8 size 0x48 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit SetApplicationVersionText() ;

/// @brief Method .ctor addr 0x20cd930 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SetApplicationVersionText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetApplicationVersionText, "", "SetApplicationVersionText");
