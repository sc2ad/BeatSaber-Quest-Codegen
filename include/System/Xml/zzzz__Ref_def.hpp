#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Xml {
class Ref;
}
// Type: System.Xml::Ref
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11477))
// CS Name: System.Xml.Ref
class CORDL_TYPE Ref : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Ref() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ref", modifiers: " const&", def_value: None }]
constexpr Ref(Ref const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ref", modifiers: "&&", def_value: None }]
constexpr Ref(Ref&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ref(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Ref& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ref& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ref& operator=(Ref&& o) noexcept = default;
  constexpr Ref& operator=(Ref const& o) noexcept = default;
                


// Methods

/// @brief Method Equal addr 0x26fa810 size 0xc virtual false final false
static bool Equal(::StringW strA, ::StringW strB) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::Ref);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Ref, "System.Xml", "Ref");
