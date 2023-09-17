#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security {
class SecurityElement;
}
// Forward declare root types
namespace System::Security {
class SecurityDocument;
}
// Type: System.Security::SecurityDocument
namespace System::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2877))
// CS Name: System.Security.SecurityDocument
class CORDL_TYPE SecurityDocument : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SecurityDocument() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityDocument", modifiers: " const&", def_value: None }]
constexpr SecurityDocument(SecurityDocument const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityDocument", modifiers: "&&", def_value: None }]
constexpr SecurityDocument(SecurityDocument&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecurityDocument(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecurityDocument& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecurityDocument& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecurityDocument& operator=(SecurityDocument&& o) noexcept = default;
  constexpr SecurityDocument& operator=(SecurityDocument const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_data, put=__set_m_data))  m_data;

constexpr void __set_m_data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_data() const;


// Methods

// Ctor Parameters [CppParam { name: "numData", ty: "int32_t", modifiers: "", def_value: None }]
explicit SecurityDocument(int32_t numData) ;

/// @brief Method .ctor addr 0x22e413c size 0x68 virtual false final false
 void _ctor(int32_t numData) ;

/// @brief Method GuaranteeSize addr 0x22e41a4 size 0xa4 virtual false final false
 void GuaranteeSize(int32_t size) ;

/// @brief Method AddString addr 0x22e4248 size 0x14c virtual false final false
 void AddString(::StringW str, ByRef<int32_t> position) ;

/// @brief Method AppendString addr 0x22e4394 size 0x98 virtual false final false
 void AppendString(::StringW str, ByRef<int32_t> position) ;

/// @brief Method EncodedStringSize addr 0x22e442c size 0x20 virtual false final false
static int32_t EncodedStringSize(::StringW str) ;

/// @brief Method GetString addr 0x22e444c size 0x310 virtual false final false
 ::StringW GetString(ByRef<int32_t> position, bool bCreate) ;

/// @brief Method AddToken addr 0x22e49c8 size 0x5c virtual false final false
 void AddToken(uint8_t b, ByRef<int32_t> position) ;

/// @brief Method GetRootElement addr 0x22e4a24 size 0x1c virtual false final false
 ::System::Security::SecurityElement GetRootElement() ;

/// @brief Method GetElement addr 0x22e4a40 size 0x1c virtual false final false
 ::System::Security::SecurityElement GetElement(int32_t position, bool bCreate) ;

/// @brief Method InternalGetElement addr 0x22e4a5c size 0x208 virtual false final false
 ::System::Security::SecurityElement InternalGetElement(ByRef<int32_t> position, bool bCreate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security
} // end anonymous namespace
NEED_NO_BOX(::System::Security::SecurityDocument);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::SecurityDocument, "System.Security", "SecurityDocument");
