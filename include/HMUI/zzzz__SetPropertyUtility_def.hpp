#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace HMUI {
class SetPropertyUtility;
}
// Type: HMUI::SetPropertyUtility
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13706))
// CS Name: HMUI.SetPropertyUtility
class CORDL_TYPE SetPropertyUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SetPropertyUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "SetPropertyUtility", modifiers: " const&", def_value: None }]
constexpr SetPropertyUtility(SetPropertyUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SetPropertyUtility", modifiers: "&&", def_value: None }]
constexpr SetPropertyUtility(SetPropertyUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SetPropertyUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SetPropertyUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SetPropertyUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SetPropertyUtility& operator=(SetPropertyUtility&& o) noexcept = default;
  constexpr SetPropertyUtility& operator=(SetPropertyUtility const& o) noexcept = default;
                


// Methods

/// @brief Method SetColor addr 0x1fd27ec size 0x48 virtual false final false
static bool SetColor(ByRef<::UnityEngine::Color> currentValue, ::UnityEngine::Color newValue) ;

/// @brief Method SetStruct addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool SetStruct(ByRef<T> currentValue, T newValue) ;

/// @brief Method SetClass addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool SetClass(ByRef<T> currentValue, T newValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::SetPropertyUtility);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SetPropertyUtility, "HMUI", "SetPropertyUtility");
