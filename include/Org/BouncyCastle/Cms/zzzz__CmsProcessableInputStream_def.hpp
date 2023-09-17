#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsProcessableInputStream;
}
// Type: Org.BouncyCastle.Cms::CmsProcessableInputStream
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(647))
// CS Name: Org.BouncyCastle.Cms.CmsProcessableInputStream
class CORDL_TYPE CmsProcessableInputStream : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Cms::CmsProcessable
constexpr operator  ::Org::BouncyCastle::Cms::CmsProcessable() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Cms::CmsReadable
constexpr operator  ::Org::BouncyCastle::Cms::CmsReadable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CmsProcessableInputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsProcessableInputStream", modifiers: " const&", def_value: None }]
constexpr CmsProcessableInputStream(CmsProcessableInputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsProcessableInputStream", modifiers: "&&", def_value: None }]
constexpr CmsProcessableInputStream(CmsProcessableInputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsProcessableInputStream(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsProcessableInputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsProcessableInputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsProcessableInputStream& operator=(CmsProcessableInputStream&& o) noexcept = default;
  constexpr CmsProcessableInputStream& operator=(CmsProcessableInputStream const& o) noexcept = default;
                


// Fields

 ::System::IO::Stream __declspec(property(get=__get_input, put=__set_input))  input;

constexpr void __set_input(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_input() const;

 bool __declspec(property(get=__get_used, put=__set_used))  used;

constexpr void __set_used(bool value) ;

constexpr bool __get_used() const;


// Methods

// Ctor Parameters [CppParam { name: "input", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit CmsProcessableInputStream(::System::IO::Stream input) ;

/// @brief Method .ctor addr 0x1159298 size 0x2c virtual false final false
 void _ctor(::System::IO::Stream input) ;

/// @brief Method GetInputStream addr 0x115a15c size 0x20 virtual true final false
 ::System::IO::Stream GetInputStream() ;

/// @brief Method Write addr 0x115a17c size 0x88 virtual true final false
 void Write(::System::IO::Stream output) ;

/// @brief Method GetContent addr 0x115a204 size 0xc virtual true final false
 ::bs_hook::Il2CppWrapperType GetContent() ;

/// @brief Method CheckSingleUsage addr 0x115a210 size 0xf8 virtual true final false
 void CheckSingleUsage() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsProcessableInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsProcessableInputStream, "Org.BouncyCastle.Cms", "CmsProcessableInputStream");
