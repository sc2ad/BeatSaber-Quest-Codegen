#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ImageWithHint_def.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class ImageWithHintItemsList;
}
// Type: ::ImageWithHintItemsList
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13725)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13725), inst: 5045 }), TypeDefinitionIndex(TypeDefinitionIndex(13679))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5521))
// CS Name: ImageWithHintItemsList
class CORDL_TYPE ImageWithHintItemsList : public HMUI::UIItemsList_1<HMUI::ImageWithHint> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ImageWithHintItemsList() = default;

// Ctor Parameters [CppParam { name: "", ty: "ImageWithHintItemsList", modifiers: " const&", def_value: None }]
constexpr ImageWithHintItemsList(ImageWithHintItemsList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ImageWithHintItemsList", modifiers: "&&", def_value: None }]
constexpr ImageWithHintItemsList(ImageWithHintItemsList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ImageWithHintItemsList(void* ptr) noexcept : HMUI::UIItemsList_1<HMUI::ImageWithHint>(ptr) {
}


  constexpr ImageWithHintItemsList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ImageWithHintItemsList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ImageWithHintItemsList& operator=(ImageWithHintItemsList&& o) noexcept = default;
  constexpr ImageWithHintItemsList& operator=(ImageWithHintItemsList const& o) noexcept = default;
                


// Methods

static GlobalNamespace::ImageWithHintItemsList New_ctor() ;

/// @brief Method .ctor addr 0x2124e58 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ImageWithHintItemsList);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ImageWithHintItemsList, "", "ImageWithHintItemsList");
