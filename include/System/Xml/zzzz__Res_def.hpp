#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Xml {
class Res;
}
// Type: System.Xml::Res
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11520))
// CS Name: System.Xml.Res
class CORDL_TYPE Res : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Res() = default;

// Ctor Parameters [CppParam { name: "", ty: "Res", modifiers: " const&", def_value: None }]
constexpr Res(Res const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Res", modifiers: "&&", def_value: None }]
constexpr Res(Res&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Res(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Res& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Res& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Res& operator=(Res&& o) noexcept = default;
  constexpr Res& operator=(Res const& o) noexcept = default;
                


// Methods

/// @brief Method GetString addr 0x270c008 size 0x4 virtual false final false
static ::StringW GetString(::StringW name) ;

/// @brief Method GetString addr 0x270d170 size 0x10 virtual false final false
static ::StringW GetString(::StringW name, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Res);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Res, "System.Xml", "Res");
