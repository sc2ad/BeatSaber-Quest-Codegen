#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Net::Mime {
class EncodedStreamFactory;
}
// Type: System.Net.Mime::EncodedStreamFactory
namespace System::Net::Mime {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8226))
// CS Name: System.Net.Mime.EncodedStreamFactory
class CORDL_TYPE EncodedStreamFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EncodedStreamFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncodedStreamFactory", modifiers: " const&", def_value: None }]
constexpr EncodedStreamFactory(EncodedStreamFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncodedStreamFactory", modifiers: "&&", def_value: None }]
constexpr EncodedStreamFactory(EncodedStreamFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncodedStreamFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EncodedStreamFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncodedStreamFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncodedStreamFactory& operator=(EncodedStreamFactory&& o) noexcept = default;
  constexpr EncodedStreamFactory& operator=(EncodedStreamFactory const& o) noexcept = default;
                


// Methods

static System::Net::Mime::EncodedStreamFactory New_ctor() ;

/// @brief Method .ctor addr 0x276ee00 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Mime
NEED_NO_BOX(System::Net::Mime::EncodedStreamFactory);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Mime::EncodedStreamFactory, "System.Net.Mime", "EncodedStreamFactory");
