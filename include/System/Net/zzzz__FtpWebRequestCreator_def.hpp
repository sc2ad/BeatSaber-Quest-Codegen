#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class IWebRequestCreate;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class FtpWebRequestCreator;
}
// Type: System.Net::FtpWebRequestCreator
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7902))
// CS Name: System.Net.FtpWebRequestCreator
class CORDL_TYPE FtpWebRequestCreator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Net::IWebRequestCreate
constexpr operator  ::System::Net::IWebRequestCreate() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FtpWebRequestCreator() = default;

// Ctor Parameters [CppParam { name: "", ty: "FtpWebRequestCreator", modifiers: " const&", def_value: None }]
constexpr FtpWebRequestCreator(FtpWebRequestCreator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FtpWebRequestCreator", modifiers: "&&", def_value: None }]
constexpr FtpWebRequestCreator(FtpWebRequestCreator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FtpWebRequestCreator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FtpWebRequestCreator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FtpWebRequestCreator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FtpWebRequestCreator& operator=(FtpWebRequestCreator&& o) noexcept = default;
  constexpr FtpWebRequestCreator& operator=(FtpWebRequestCreator const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit FtpWebRequestCreator() ;

/// @brief Method .ctor addr 0x2809558 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x2809560 size 0x60 virtual true final true
 ::System::Net::WebRequest Create(::System::Uri uri) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::FtpWebRequestCreator);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpWebRequestCreator, "System.Net", "FtpWebRequestCreator");
