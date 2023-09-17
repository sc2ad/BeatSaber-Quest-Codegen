#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
class UnityString;
}
// Type: UnityEngine::UnityString
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15865))
// CS Name: UnityEngine.UnityString
class CORDL_TYPE UnityString : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityString() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityString", modifiers: " const&", def_value: None }]
constexpr UnityString(UnityString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityString", modifiers: "&&", def_value: None }]
constexpr UnityString(UnityString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityString(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityString& operator=(UnityString&& o) noexcept = default;
  constexpr UnityString& operator=(UnityString const& o) noexcept = default;
                


// Methods

/// @brief Method Format addr 0x2ba0f4c size 0x88 virtual false final false
static ::StringW Format(::StringW fmt, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UnityString);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnityString, "UnityEngine", "UnityString");