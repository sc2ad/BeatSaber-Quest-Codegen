#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
struct TextAlignment;
}
namespace Polyglot {
class ILocalize;
}
namespace Polyglot {
struct LanguageDirection;
}
namespace UnityEngine {
class TextMesh;
}
// Forward declare root types
namespace Polyglot {
class LocalizedTextMesh;
}
// Type: Polyglot::LocalizedTextMesh
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15542))
// CS Name: Polyglot.LocalizedTextMesh
class CORDL_TYPE LocalizedTextMesh : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to Polyglot::ILocalize
constexpr operator  Polyglot::ILocalize() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LocalizedTextMesh() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMesh", modifiers: " const&", def_value: None }]
constexpr LocalizedTextMesh(LocalizedTextMesh const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMesh", modifiers: "&&", def_value: None }]
constexpr LocalizedTextMesh(LocalizedTextMesh&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalizedTextMesh(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LocalizedTextMesh& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalizedTextMesh& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalizedTextMesh& operator=(LocalizedTextMesh&& o) noexcept = default;
  constexpr LocalizedTextMesh& operator=(LocalizedTextMesh const& o) noexcept = default;
                


// Fields

 UnityEngine::TextMesh __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(UnityEngine::TextMesh value) ;

constexpr UnityEngine::TextMesh __get_text() const;

 ::StringW __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(::StringW value) ;

constexpr ::StringW __get_key() const;


// Properties

 ::StringW __declspec(property(get=get_Key))  Key;


// Methods

/// @brief Method get_Key addr 0x26745ec size 0x8 virtual false final false
 ::StringW get_Key() ;

/// @brief Method Reset addr 0x26745f4 size 0x50 virtual false final false
 void Reset() ;

/// @brief Method Start addr 0x2674644 size 0x20 virtual false final false
 void Start() ;

/// @brief Method OnLocalize addr 0x2674664 size 0xf8 virtual true final true
 void OnLocalize() ;

/// @brief Method IsOppositeDirection addr 0x267475c size 0x2c virtual false final false
 bool IsOppositeDirection(UnityEngine::TextAlignment alignment, Polyglot::LanguageDirection direction) ;

/// @brief Method IsAlignmentRight addr 0x2674788 size 0xc virtual false final false
 bool IsAlignmentRight(UnityEngine::TextAlignment alignment) ;

/// @brief Method IsAlignmentLeft addr 0x2674794 size 0xc virtual false final false
 bool IsAlignmentLeft(UnityEngine::TextAlignment alignment) ;

static Polyglot::LocalizedTextMesh New_ctor() ;

/// @brief Method .ctor addr 0x26747a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
NEED_NO_BOX(Polyglot::LocalizedTextMesh);
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizedTextMesh, "Polyglot", "LocalizedTextMesh");
