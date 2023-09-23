#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Reflection::Emit {
class ILGenerator;
}
// Type: System.Reflection.Emit::ILGenerator
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3533))
// CS Name: System.Reflection.Emit.ILGenerator
class CORDL_TYPE ILGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ILGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ILGenerator", modifiers: " const&", def_value: None }]
constexpr ILGenerator(ILGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ILGenerator", modifiers: "&&", def_value: None }]
constexpr ILGenerator(ILGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ILGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ILGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ILGenerator& operator=(ILGenerator&& o) noexcept = default;
  constexpr ILGenerator& operator=(ILGenerator const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection::Emit
NEED_NO_BOX(System::Reflection::Emit::ILGenerator);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::ILGenerator, "System.Reflection.Emit", "ILGenerator");
