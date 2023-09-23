#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Polyglot {
class ILocalize;
}
// Forward declare root types
namespace Polyglot {
class SaveLanguagePreference;
}
// Type: Polyglot::SaveLanguagePreference
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15545))
// CS Name: Polyglot.SaveLanguagePreference
class CORDL_TYPE SaveLanguagePreference : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to Polyglot::ILocalize
constexpr operator  Polyglot::ILocalize() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SaveLanguagePreference() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaveLanguagePreference", modifiers: " const&", def_value: None }]
constexpr SaveLanguagePreference(SaveLanguagePreference const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaveLanguagePreference", modifiers: "&&", def_value: None }]
constexpr SaveLanguagePreference(SaveLanguagePreference&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaveLanguagePreference(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SaveLanguagePreference& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaveLanguagePreference& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaveLanguagePreference& operator=(SaveLanguagePreference&& o) noexcept = default;
  constexpr SaveLanguagePreference& operator=(SaveLanguagePreference const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_preferenceKey, put=__set_preferenceKey))  preferenceKey;

constexpr void __set_preferenceKey(::StringW value) ;

constexpr ::StringW __get_preferenceKey() const;


// Methods

/// @brief Method Start addr 0x2674bc8 size 0x50 virtual false final false
 void Start() ;

/// @brief Method OnLocalize addr 0x2674c18 size 0x28 virtual true final true
 void OnLocalize() ;

// Ctor Parameters []
explicit SaveLanguagePreference() ;

/// @brief Method .ctor addr 0x2674c40 size 0x50 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
NEED_NO_BOX(Polyglot::SaveLanguagePreference);
DEFINE_IL2CPP_ARG_TYPE(Polyglot::SaveLanguagePreference, "Polyglot", "SaveLanguagePreference");
