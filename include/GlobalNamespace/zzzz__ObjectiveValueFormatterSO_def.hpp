#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class ObjectiveValueFormatterSO;
}
// Type: ::ObjectiveValueFormatterSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4474))
// CS Name: ObjectiveValueFormatterSO
class CORDL_TYPE ObjectiveValueFormatterSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ObjectiveValueFormatterSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectiveValueFormatterSO", modifiers: " const&", def_value: None }]
constexpr ObjectiveValueFormatterSO(ObjectiveValueFormatterSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectiveValueFormatterSO", modifiers: "&&", def_value: None }]
constexpr ObjectiveValueFormatterSO(ObjectiveValueFormatterSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectiveValueFormatterSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr ObjectiveValueFormatterSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectiveValueFormatterSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectiveValueFormatterSO& operator=(ObjectiveValueFormatterSO&& o) noexcept = default;
  constexpr ObjectiveValueFormatterSO& operator=(ObjectiveValueFormatterSO const& o) noexcept = default;
                


// Methods

/// @brief Method FormatValue addr 0x21f12a4 size 0x1c virtual true final false
 ::StringW FormatValue(int32_t value) ;

// Ctor Parameters []
explicit ObjectiveValueFormatterSO() ;

/// @brief Method .ctor addr 0x21f0df8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ObjectiveValueFormatterSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectiveValueFormatterSO, "", "ObjectiveValueFormatterSO");
