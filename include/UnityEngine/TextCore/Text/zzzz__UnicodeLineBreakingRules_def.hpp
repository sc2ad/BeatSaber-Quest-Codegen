#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine {
class TextAsset;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class UnicodeLineBreakingRules;
}
// Type: UnityEngine.TextCore.Text::UnicodeLineBreakingRules
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13546))
// CS Name: UnityEngine.TextCore.Text.UnicodeLineBreakingRules
class CORDL_TYPE UnicodeLineBreakingRules : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnicodeLineBreakingRules() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnicodeLineBreakingRules", modifiers: " const&", def_value: None }]
constexpr UnicodeLineBreakingRules(UnicodeLineBreakingRules const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnicodeLineBreakingRules", modifiers: "&&", def_value: None }]
constexpr UnicodeLineBreakingRules(UnicodeLineBreakingRules&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnicodeLineBreakingRules(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnicodeLineBreakingRules& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnicodeLineBreakingRules& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnicodeLineBreakingRules& operator=(UnicodeLineBreakingRules&& o) noexcept = default;
  constexpr UnicodeLineBreakingRules& operator=(UnicodeLineBreakingRules const& o) noexcept = default;
                


// Fields

static UnityEngine::TextCore::Text::UnicodeLineBreakingRules __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(UnityEngine::TextCore::Text::UnicodeLineBreakingRules value) ;

static UnityEngine::TextCore::Text::UnicodeLineBreakingRules __get_s_Instance() ;

 UnityEngine::TextAsset __declspec(property(get=__get_m_UnicodeLineBreakingRules, put=__set_m_UnicodeLineBreakingRules))  m_UnicodeLineBreakingRules;

constexpr void __set_m_UnicodeLineBreakingRules(UnityEngine::TextAsset value) ;

constexpr UnityEngine::TextAsset __get_m_UnicodeLineBreakingRules() const;

 UnityEngine::TextAsset __declspec(property(get=__get_m_LeadingCharacters, put=__set_m_LeadingCharacters))  m_LeadingCharacters;

constexpr void __set_m_LeadingCharacters(UnityEngine::TextAsset value) ;

constexpr UnityEngine::TextAsset __get_m_LeadingCharacters() const;

 UnityEngine::TextAsset __declspec(property(get=__get_m_FollowingCharacters, put=__set_m_FollowingCharacters))  m_FollowingCharacters;

constexpr void __set_m_FollowingCharacters(UnityEngine::TextAsset value) ;

constexpr UnityEngine::TextAsset __get_m_FollowingCharacters() const;

 bool __declspec(property(get=__get_m_UseModernHangulLineBreakingRules, put=__set_m_UseModernHangulLineBreakingRules))  m_UseModernHangulLineBreakingRules;

constexpr void __set_m_UseModernHangulLineBreakingRules(bool value) ;

constexpr bool __get_m_UseModernHangulLineBreakingRules() const;

static System::Collections::Generic::HashSet_1<uint32_t> __declspec(property(get=__get_s_LeadingCharactersLookup, put=__set_s_LeadingCharactersLookup))  s_LeadingCharactersLookup;

static void __set_s_LeadingCharactersLookup(System::Collections::Generic::HashSet_1<uint32_t> value) ;

static System::Collections::Generic::HashSet_1<uint32_t> __get_s_LeadingCharactersLookup() ;

static System::Collections::Generic::HashSet_1<uint32_t> __declspec(property(get=__get_s_FollowingCharactersLookup, put=__set_s_FollowingCharactersLookup))  s_FollowingCharactersLookup;

static void __set_s_FollowingCharactersLookup(System::Collections::Generic::HashSet_1<uint32_t> value) ;

static System::Collections::Generic::HashSet_1<uint32_t> __get_s_FollowingCharactersLookup() ;


// Properties

 System::Collections::Generic::HashSet_1<uint32_t> __declspec(property(get=get_leadingCharactersLookup))  leadingCharactersLookup;

 System::Collections::Generic::HashSet_1<uint32_t> __declspec(property(get=get_followingCharactersLookup))  followingCharactersLookup;


// Methods

/// @brief Method get_leadingCharactersLookup addr 0x2bd4378 size 0x88 virtual false final false
 System::Collections::Generic::HashSet_1<uint32_t> get_leadingCharactersLookup() ;

/// @brief Method get_followingCharactersLookup addr 0x2bd4714 size 0x88 virtual false final false
 System::Collections::Generic::HashSet_1<uint32_t> get_followingCharactersLookup() ;

/// @brief Method LoadLineBreakingRules addr 0x2bd4400 size 0x314 virtual false final false
static void LoadLineBreakingRules() ;

/// @brief Method GetCharacters addr 0x2bd479c size 0xe8 virtual false final false
static System::Collections::Generic::HashSet_1<uint32_t> GetCharacters(UnityEngine::TextAsset file) ;

// Ctor Parameters []
explicit UnicodeLineBreakingRules() ;

/// @brief Method .ctor addr 0x2bd4884 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(UnityEngine::TextCore::Text::UnicodeLineBreakingRules);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::UnicodeLineBreakingRules, "UnityEngine.TextCore.Text", "UnicodeLineBreakingRules");
