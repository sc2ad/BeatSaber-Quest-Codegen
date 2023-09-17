#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Security::Util {
class TokenizerStringBlock;
}
// Type: System.Security.Util::TokenizerStringBlock
namespace System::Security::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2894))
// CS Name: System.Security.Util.TokenizerStringBlock
class CORDL_TYPE TokenizerStringBlock : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TokenizerStringBlock() = default;

// Ctor Parameters [CppParam { name: "", ty: "TokenizerStringBlock", modifiers: " const&", def_value: None }]
constexpr TokenizerStringBlock(TokenizerStringBlock const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TokenizerStringBlock", modifiers: "&&", def_value: None }]
constexpr TokenizerStringBlock(TokenizerStringBlock&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TokenizerStringBlock(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TokenizerStringBlock& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TokenizerStringBlock& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TokenizerStringBlock& operator=(TokenizerStringBlock&& o) noexcept = default;
  constexpr TokenizerStringBlock& operator=(TokenizerStringBlock const& o) noexcept = default;
                


// Fields

 ::ArrayW<::StringW> __declspec(property(get=__get_m_block, put=__set_m_block))  m_block;

constexpr void __set_m_block(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_block() const;

 ::System::Security::Util::TokenizerStringBlock __declspec(property(get=__get_m_next, put=__set_m_next))  m_next;

constexpr void __set_m_next(::System::Security::Util::TokenizerStringBlock value) ;

constexpr ::System::Security::Util::TokenizerStringBlock __get_m_next() const;


// Methods

// Ctor Parameters []
explicit TokenizerStringBlock() ;

/// @brief Method .ctor addr 0x22ea318 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Util
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Util::TokenizerStringBlock);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Util::TokenizerStringBlock, "System.Security.Util", "TokenizerStringBlock");
