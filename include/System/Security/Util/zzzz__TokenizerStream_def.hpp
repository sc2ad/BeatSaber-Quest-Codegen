#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Util {
class TokenizerShortBlock;
}
namespace System::Security::Util {
class TokenizerStringBlock;
}
// Forward declare root types
namespace System::Security::Util {
class TokenizerStream;
}
// Type: System.Security.Util::TokenizerStream
namespace System::Security::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2895))
// CS Name: System.Security.Util.TokenizerStream
class CORDL_TYPE TokenizerStream : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TokenizerStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "TokenizerStream", modifiers: " const&", def_value: None }]
constexpr TokenizerStream(TokenizerStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TokenizerStream", modifiers: "&&", def_value: None }]
constexpr TokenizerStream(TokenizerStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TokenizerStream(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TokenizerStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TokenizerStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TokenizerStream& operator=(TokenizerStream&& o) noexcept = default;
  constexpr TokenizerStream& operator=(TokenizerStream const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_countTokens, put=__set_m_countTokens))  m_countTokens;

constexpr void __set_m_countTokens(int32_t value) ;

constexpr int32_t __get_m_countTokens() const;

 System::Security::Util::TokenizerShortBlock __declspec(property(get=__get_m_headTokens, put=__set_m_headTokens))  m_headTokens;

constexpr void __set_m_headTokens(System::Security::Util::TokenizerShortBlock value) ;

constexpr System::Security::Util::TokenizerShortBlock __get_m_headTokens() const;

 System::Security::Util::TokenizerShortBlock __declspec(property(get=__get_m_lastTokens, put=__set_m_lastTokens))  m_lastTokens;

constexpr void __set_m_lastTokens(System::Security::Util::TokenizerShortBlock value) ;

constexpr System::Security::Util::TokenizerShortBlock __get_m_lastTokens() const;

 System::Security::Util::TokenizerShortBlock __declspec(property(get=__get_m_currentTokens, put=__set_m_currentTokens))  m_currentTokens;

constexpr void __set_m_currentTokens(System::Security::Util::TokenizerShortBlock value) ;

constexpr System::Security::Util::TokenizerShortBlock __get_m_currentTokens() const;

 int32_t __declspec(property(get=__get_m_indexTokens, put=__set_m_indexTokens))  m_indexTokens;

constexpr void __set_m_indexTokens(int32_t value) ;

constexpr int32_t __get_m_indexTokens() const;

 System::Security::Util::TokenizerStringBlock __declspec(property(get=__get_m_headStrings, put=__set_m_headStrings))  m_headStrings;

constexpr void __set_m_headStrings(System::Security::Util::TokenizerStringBlock value) ;

constexpr System::Security::Util::TokenizerStringBlock __get_m_headStrings() const;

 System::Security::Util::TokenizerStringBlock __declspec(property(get=__get_m_currentStrings, put=__set_m_currentStrings))  m_currentStrings;

constexpr void __set_m_currentStrings(System::Security::Util::TokenizerStringBlock value) ;

constexpr System::Security::Util::TokenizerStringBlock __get_m_currentStrings() const;

 int32_t __declspec(property(get=__get_m_indexStrings, put=__set_m_indexStrings))  m_indexStrings;

constexpr void __set_m_indexStrings(int32_t value) ;

constexpr int32_t __get_m_indexStrings() const;


// Methods

// Ctor Parameters []
explicit TokenizerStream() ;

/// @brief Method .ctor addr 0x22e9b0c size 0xa8 virtual false final false
 void _ctor() ;

/// @brief Method AddToken addr 0x22e9e9c size 0xe8 virtual false final false
 void AddToken(int16_t token) ;

/// @brief Method AddString addr 0x22e9f9c size 0xf0 virtual false final false
 void AddString(::StringW str) ;

/// @brief Method Reset addr 0x22e9bb4 size 0x1c virtual false final false
 void Reset() ;

/// @brief Method GetNextFullToken addr 0x22e9bd0 size 0x70 virtual false final false
 int16_t GetNextFullToken() ;

/// @brief Method GetNextToken addr 0x22e8af8 size 0x14 virtual false final false
 int16_t GetNextToken() ;

/// @brief Method GetNextString addr 0x22e8b84 size 0x6c virtual false final false
 ::StringW GetNextString() ;

/// @brief Method ThrowAwayNextString addr 0x22e8b0c size 0x4 virtual false final false
 void ThrowAwayNextString() ;

/// @brief Method TagLastToken addr 0x22e8b10 size 0x74 virtual false final false
 void TagLastToken(int16_t tag) ;

/// @brief Method GetTokenCount addr 0x22ea370 size 0x8 virtual false final false
 int32_t GetTokenCount() ;

/// @brief Method GoToPosition addr 0x22e9580 size 0x60 virtual false final false
 void GoToPosition(int32_t position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Util
NEED_NO_BOX(System::Security::Util::TokenizerStream);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::TokenizerStream, "System.Security.Util", "TokenizerStream");
