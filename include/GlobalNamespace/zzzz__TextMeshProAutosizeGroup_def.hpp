#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class TextMeshProAutosizeGroup;
}
// Type: ::TextMeshProAutosizeGroup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13550))
// CS Name: TextMeshProAutosizeGroup
class CORDL_TYPE TextMeshProAutosizeGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TextMeshProAutosizeGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProAutosizeGroup", modifiers: " const&", def_value: None }]
constexpr TextMeshProAutosizeGroup(TextMeshProAutosizeGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProAutosizeGroup", modifiers: "&&", def_value: None }]
constexpr TextMeshProAutosizeGroup(TextMeshProAutosizeGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextMeshProAutosizeGroup(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TextMeshProAutosizeGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextMeshProAutosizeGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextMeshProAutosizeGroup& operator=(TextMeshProAutosizeGroup&& o) noexcept = default;
  constexpr TextMeshProAutosizeGroup& operator=(TextMeshProAutosizeGroup const& o) noexcept = default;
                


// Fields

 ::ArrayW<::TMPro::TMP_Text> __declspec(property(get=__get__texts, put=__set__texts))  _texts;

constexpr void __set__texts(::ArrayW<::TMPro::TMP_Text> value) ;

constexpr ::ArrayW<::TMPro::TMP_Text> __get__texts() const;


// Methods

/// @brief Method Start addr 0x1fa33d4 size 0x108 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit TextMeshProAutosizeGroup() ;

/// @brief Method .ctor addr 0x1fa34dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TextMeshProAutosizeGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextMeshProAutosizeGroup, "", "TextMeshProAutosizeGroup");
