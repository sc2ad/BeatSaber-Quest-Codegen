#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__GenericSignal_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class StringSignal;
}
// Type: ::StringSignal
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13881), inst: 380 }), TypeDefinitionIndex(TypeDefinitionIndex(13881))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13887))
// CS Name: StringSignal
class CORDL_TYPE StringSignal : public GlobalNamespace::GenericSignal_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StringSignal() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringSignal", modifiers: " const&", def_value: None }]
constexpr StringSignal(StringSignal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringSignal", modifiers: "&&", def_value: None }]
constexpr StringSignal(StringSignal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringSignal(void* ptr) noexcept : GlobalNamespace::GenericSignal_1<::StringW>(ptr) {
}


  constexpr StringSignal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringSignal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringSignal& operator=(StringSignal&& o) noexcept = default;
  constexpr StringSignal& operator=(StringSignal const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit StringSignal() ;

/// @brief Method .ctor addr 0x1f83810 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StringSignal);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StringSignal, "", "StringSignal");
