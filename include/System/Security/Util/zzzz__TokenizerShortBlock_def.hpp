#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Security::Util {
class TokenizerShortBlock;
}
// Type: System.Security.Util::TokenizerShortBlock
namespace System::Security::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2893))
// CS Name: System.Security.Util.TokenizerShortBlock
class CORDL_TYPE TokenizerShortBlock : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TokenizerShortBlock() = default;

// Ctor Parameters [CppParam { name: "", ty: "TokenizerShortBlock", modifiers: " const&", def_value: None }]
constexpr TokenizerShortBlock(TokenizerShortBlock const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TokenizerShortBlock", modifiers: "&&", def_value: None }]
constexpr TokenizerShortBlock(TokenizerShortBlock&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TokenizerShortBlock(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TokenizerShortBlock& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TokenizerShortBlock& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TokenizerShortBlock& operator=(TokenizerShortBlock&& o) noexcept = default;
  constexpr TokenizerShortBlock& operator=(TokenizerShortBlock const& o) noexcept = default;
                


// Fields

 ::ArrayW<int16_t> __declspec(property(get=__get_m_block, put=__set_m_block))  m_block;

constexpr void __set_m_block(::ArrayW<int16_t> value) ;

constexpr ::ArrayW<int16_t> __get_m_block() const;

 System::Security::Util::TokenizerShortBlock __declspec(property(get=__get_m_next, put=__set_m_next))  m_next;

constexpr void __set_m_next(System::Security::Util::TokenizerShortBlock value) ;

constexpr System::Security::Util::TokenizerShortBlock __get_m_next() const;


// Methods

// Ctor Parameters []
explicit TokenizerShortBlock() ;

/// @brief Method .ctor addr 0x22ea2c0 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Util
NEED_NO_BOX(System::Security::Util::TokenizerShortBlock);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::TokenizerShortBlock, "System.Security.Util", "TokenizerShortBlock");
