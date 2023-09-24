#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace TMPro {
class TMP_InputValidator;
}
// Type: TMPro::TMP_InputValidator
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12335))
// CS Name: TMPro.TMP_InputValidator
class CORDL_TYPE TMP_InputValidator : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TMP_InputValidator() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_InputValidator", modifiers: " const&", def_value: None }]
constexpr TMP_InputValidator(TMP_InputValidator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_InputValidator", modifiers: "&&", def_value: None }]
constexpr TMP_InputValidator(TMP_InputValidator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_InputValidator(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr TMP_InputValidator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_InputValidator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_InputValidator& operator=(TMP_InputValidator&& o) noexcept = default;
  constexpr TMP_InputValidator& operator=(TMP_InputValidator const& o) noexcept = default;
                


// Methods

/// @brief Method Validate addr 0x0 size 0xffffffffffffffff virtual true final false
 char16_t Validate(ByRef<::StringW> text, ByRef<int32_t> pos, char16_t ch) ;

static TMPro::TMP_InputValidator New_ctor() ;

/// @brief Method .ctor addr 0x2aa1d4c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_InputValidator);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_InputValidator, "TMPro", "TMP_InputValidator");
